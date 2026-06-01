#include "global.h"
#include "main.h"
#include "task.h"
#include "text.h"
#include "random.h"
#include "string_util.h"
#include "reaction_game.h"
#include "malloc.h"
#include "window.h"
#include "bg.h"
#include "gpu_regs.h"
#include "palette.h"
#include "constants/rgb.h"
#include "overworld.h"
#include "field_message_box.h"
#include "text_window.h"
#include "item.h"
#include "item_use.h"
#include "constants/items.h"

enum
{
    REACTION_STATE_INTRO,
    REACTION_STATE_WAIT_START,
    REACTION_STATE_SHOW_CUE,
    REACTION_STATE_WAIT_INPUT,
    REACTION_STATE_RESULT,
    REACTION_STATE_GAME_OVER,
    REACTION_STATE_EXIT,
    REACTION_STATE_FADE_OUT,
};

struct ReactionGame
{
    u8 state;
    u8 currentRound;
    u8 currentCue;
    u16 timer;
    u16 score;
    u8 flawlessGame;
    u8 totalRounds;
    u8 rewardGiven;
};

static EWRAM_DATA struct ReactionGame *sReaction = NULL;
static EWRAM_DATA u8 *sReactionBgBuffer = NULL;
static EWRAM_DATA u8 sReactionTextBuffer[256];
static const u8 sText_Intro[]      = _("REACTION GAME\n\nPRESS A TO START");
static const u8 sText_Go[]         = _("GO!");
static const u8 sText_Stop[]       = _("STOP!");
static const u8 sText_Good[]       = _("GOOD!\n+100");
static const u8 sText_Wrong[]      = _("WRONG!\n-50");
static const u8 sText_Correct[]    = _("CORRECT!\n+50");
static const u8 sText_TooSlow[]    = _("TOO SLOW!\n+0");
static const u8 sText_PerfectBonus[] = _("PERFECT BONUS!\n+500");
static const u8 sText_GameOver[]   = _("GAME OVER\n\nPRESS A");
static const u8 sText_FinalScore[] = _("GAME OVER\n\nFINAL SCORE: ");
static const u8 sText_RareCandy[]  = _("\n\nRARE CANDY!");
static const u8 sText_GreatBall[]  = _("\n\nGREAT BALL!");
static const u8 sText_PokeBall[]   = _("\n\nPOKE BALL!");
static const u8 sText_Potion[]     = _("\n\nPOTION!");
static const u8 sText_PressA[]     = _("\n\nPRESS A");

#define REACTION_BG_BASE 0
#define REACTION_WINDOW  0

static const struct BgTemplate sReactionBgTemplates[] =
{
    {
        .bg = REACTION_BG_BASE,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
};

static const struct WindowTemplate sReactionWinTemplates[] =
{
    {
        .bg = REACTION_BG_BASE,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 28,
        .height = 18,
        .paletteNum = 15,
        .baseBlock = 0x1,
    },
    DUMMY_WIN_TEMPLATE,
};

static void FadeToReactionScreen(u8 taskId);
static void InitReactionScreen(void);
static void ReactionMainCallback(void);
static void ReactionVBlankCallback(void);
static void ReactionMain(u8 taskId);
static void ShowText(const u8 *str);
static void ExitReaction(void);

void StartReactionGame(void)
{
    sReaction = AllocZeroed(sizeof(struct ReactionGame));
    sReactionBgBuffer = AllocZeroed(BG_SCREEN_SIZE);

    CreateTask(FadeToReactionScreen, 0);
}

static void FadeToReactionScreen(u8 taskId)
{
    switch (gTasks[taskId].data[0])
    {
    case 0:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].data[0]++;
        break;

    case 1:
        if (!gPaletteFade.active)
        {
            SetMainCallback2(InitReactionScreen);
            DestroyTask(taskId);
        }
        break;
    }
}

static void InitReactionScreen(void)
{
    SetVBlankCallback(NULL);

    ResetBgsAndClearDma3BusyFlags(0);

    InitBgsFromTemplates(0,
                         sReactionBgTemplates,
                         ARRAY_COUNT(sReactionBgTemplates));

    SetBgTilemapBuffer(REACTION_BG_BASE, sReactionBgBuffer);

    ResetPaletteFade();
    ResetSpriteData();
    FreeAllSpritePalettes();

    InitWindows(sReactionWinTemplates);
    DeactivateAllTextPrinters();

    LoadMessageBoxGfx(0, 0x000, 0xF0);
    LoadUserWindowBorderGfx(0, 0x214, BG_PLTT_ID(14));

    FillWindowPixelBuffer(REACTION_WINDOW, PIXEL_FILL(1));

    PutWindowTilemap(REACTION_WINDOW);
    CopyWindowToVram(REACTION_WINDOW, COPYWIN_FULL);

    CopyBgTilemapBufferToVram(REACTION_BG_BASE);

    ShowBg(REACTION_BG_BASE);

    SetGpuReg(
        REG_OFFSET_DISPCNT,
        DISPCNT_MODE_0
        | DISPCNT_OBJ_1D_MAP
        | DISPCNT_OBJ_ON
        | DISPCNT_BG0_ON);

    sReaction->state = REACTION_STATE_INTRO;
    sReaction->currentRound = 1;
    sReaction->score = 0;
    sReaction->flawlessGame = TRUE;
    sReaction->totalRounds = 3;
    sReaction->rewardGiven = FALSE;

    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);

    SetVBlankCallback(ReactionVBlankCallback);
    SetMainCallback2(ReactionMainCallback);

    CreateTask(ReactionMain, 0);
}

static void ReactionMainCallback(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void ReactionVBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void ShowText(const u8 *str)
{
    FillWindowPixelBuffer(REACTION_WINDOW, PIXEL_FILL(1));

    AddTextPrinterParameterized(
        REACTION_WINDOW,
        0,
        str,
        2,
        2,
        0,
        NULL);

    PutWindowTilemap(REACTION_WINDOW);
    CopyWindowToVram(REACTION_WINDOW, COPYWIN_FULL);
}

static void ReactionMain(u8 taskId)
{
    switch (sReaction->state)
    {
    case REACTION_STATE_INTRO:
        ShowText(sText_Intro);
        sReaction->state = REACTION_STATE_WAIT_START;
        break;

    case REACTION_STATE_WAIT_START:
        if (gMain.newKeys & A_BUTTON)
        {
            sReaction->state = REACTION_STATE_SHOW_CUE;
        }
        break;

    case REACTION_STATE_SHOW_CUE:
        sReaction->currentCue = Random() & 1;

        if (sReaction->currentCue)
            ShowText(sText_Go);
        else
            ShowText(sText_Stop);

        sReaction->timer = 150;
        sReaction->state = REACTION_STATE_WAIT_INPUT;
        break;

    case REACTION_STATE_WAIT_INPUT:
        if (gMain.newKeys & A_BUTTON)
        {
            if (sReaction->currentCue) // GO
            {
                sReaction->score += 100;
                ShowText(sText_Good);
            }
            else // STOP (wrong press)
            {
                if (sReaction->score >= 50)
                    sReaction->score -= 50;

                sReaction->flawlessGame = FALSE;
                ShowText(sText_Wrong);
            }
            sReaction->timer = 30;
            sReaction->state = REACTION_STATE_RESULT;
            break;
        }

        if (--sReaction->timer == 0)
        {
            if (sReaction->currentCue) // GO and player never pressed
            {
                ShowText(sText_TooSlow);
                sReaction->flawlessGame = FALSE;
            }
            else // STOP and player correctly did nothing
            {
                sReaction->score += 50;
                ShowText(sText_Correct);
            }

            sReaction->timer = 30;
            sReaction->state = REACTION_STATE_RESULT;
        }
        break;

    case REACTION_STATE_RESULT:
        if (--sReaction->timer == 0)
        {
            sReaction->currentRound++;

            if (sReaction->currentRound > sReaction->totalRounds)
            {
                if (sReaction->flawlessGame)
                {
                    sReaction->score += 500;
                }

                sReaction->timer = 0;
                sReaction->state = REACTION_STATE_GAME_OVER;
            }
            else
            {
                sReaction->state = REACTION_STATE_SHOW_CUE;
            }
        }
        break;

    case REACTION_STATE_GAME_OVER:
        if (sReaction->timer > 0)
        {
            sReaction->timer--;
            break;
        }

        // Award prize if not already given
        if (!sReaction->rewardGiven)
        {
            if (sReaction->score >= 500)
                AddBagItem(ITEM_RARE_CANDY, 1);
            else if (sReaction->score >= 300)
                AddBagItem(ITEM_GREAT_BALL, 1);
            else if (sReaction->score >= 150)
                AddBagItem(ITEM_POKE_BALL, 1);
            else
                AddBagItem(ITEM_POTION, 1);

            sReaction->rewardGiven = TRUE;
        }

        StringCopy(sReactionTextBuffer, sText_FinalScore);

        ConvertIntToDecimalStringN(
            gStringVar1,
            sReaction->score,
            STR_CONV_MODE_LEFT_ALIGN,
            5);

        StringAppend(sReactionTextBuffer, gStringVar1);

        if (sReaction->score >= 500)
            StringAppend(sReactionTextBuffer, sText_RareCandy);
        else if (sReaction->score >= 300)
            StringAppend(sReactionTextBuffer, sText_GreatBall);
        else if (sReaction->score >= 150)
            StringAppend(sReactionTextBuffer, sText_PokeBall);
        else
            StringAppend(sReactionTextBuffer, sText_Potion);

        StringAppend(sReactionTextBuffer, sText_PressA);

        ShowText(sReactionTextBuffer);

        sReaction->state = REACTION_STATE_EXIT;
        break;

    case REACTION_STATE_EXIT:
        if (gMain.newKeys & A_BUTTON)
        {
            BeginNormalPaletteFade(
                0xFFFFFFFF,
                0,
                0,
                16,
                RGB_BLACK);

            sReaction->state = REACTION_STATE_FADE_OUT;
        }
        break;

    case REACTION_STATE_FADE_OUT:
        if (!gPaletteFade.active)
        {
            DestroyTask(taskId);
            ExitReaction();
        }
        break;
    }
}

static void ExitReaction(void)
{
    Free(sReactionBgBuffer);
    Free(sReaction);

    sReactionBgBuffer = NULL;
    sReaction = NULL;

    SetMainCallback2(
        CB2_ReturnToFieldContinueScriptPlayMapMusic);
}