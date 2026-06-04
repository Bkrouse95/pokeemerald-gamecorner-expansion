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
#include "sprite.h"          // <--- ADDED: For sprite functions like CreateSprite
#include "pokemon.h"         // <--- ADDED: For SPECIES_IDs and mon sprite tables
#include "constants/species.h"
#include "decompress.h" 
#include "trainer_pokemon_sprites.h"
#include "event_data.h"


#define MAX_EXTENDED_ROUNDS 12
#define VAR_REACTION_PRIZE VAR_TEMP_0  

enum
{
    REACTION_STATE_INTRO,
    REACTION_STATE_WAIT_START,
    REACTION_STATE_SHOW_CUE,
    REACTION_STATE_WAIT_INPUT,
    REACTION_STATE_RESULT,
    REACTION_STATE_BONUS_MESSAGE_PAUSE,
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
    s16 monSpriteId; // <--- ADDED: To hold the ID of our Pokémon sprite
    u16 reactionTime;
};

static EWRAM_DATA struct ReactionGame *sReaction = NULL;
static EWRAM_DATA u8 *sReactionBgBuffer = NULL;
static EWRAM_DATA u8 sReactionTextBuffer[256];
static const u8 sText_Intro[]           = _("REACTION GAME\n\nPRESS A TO START");
static const u8 sText_Go[]              = _("GO!");
static const u8 sText_Stop[]            = _("STOP!");
static const u8 sText_Good[]            = _("GOOD!\n+100");
static const u8 sText_Wrong[]           = _("WRONG!\n-50");
static const u8 sText_Correct[]         = _("CORRECT!\n+50");
static const u8 sText_TooSlow[]         = _("TOO SLOW!\n+0");
static const u8 sText_BonusRound[]      = _("PERFECT!\nBONUS ROUND!");
static const u8 sText_PerfectBonus[]    = _("PERFECT BONUS!\n+500");
static const u8 sText_GameOver[]        = _("GAME OVER\n\nPRESS A");
static const u8 sText_FinalScore[]      = _("GAME OVER\n\nFINAL SCORE: ");
static const u8 sText_RareCandy[]       = _("\n\nRARE CANDY!");
static const u8 sText_GreatBall[]       = _("\n\nGREAT BALL!");
static const u8 sText_PokeBall[]        = _("\n\nPOKE BALL!");
static const u8 sText_Potion[]          = _("\n\nPOTION!");
static const u8 sText_PressA[]          = _("\n\nPRESS A");
static const u8 sText_Controls[] =
    _("REACTION TEST!\n\n"
      "A BUTTON = GO\n"
      "B BUTTON = STOP\n\n"
      "Respond before time runs out.\n\n"
         "Rapid response for extra points!\n\n"
      "PRESS A TO START");
static const u8 sText_Fast[] = _("FAST!\n+150");      

static void LoadReactionPokemon(void);

#define REACTION_BG_BASE 0
#define REACTION_WINDOW  0

// These tags must be unique across all loaded sprites in the game at any given time.
// Using high values to minimize conflict with common tags.
#define TAG_REACTION_MON_SPRITE_TILES 0x2000
#define TAG_REACTION_MON_SPRITE_PAL   0x2001

// <--- ADDED START: Sprite related declarations ---
// Declare the external Pokémon front pic and palette tables.
// These are typically defined in data/pokemon/front_pics.s and data/pokemon/palettes.s
// and externed in pokemon.h or sprite.h.
extern const struct CompressedSpriteSheet gMonFrontPicTable[];
extern const struct SpritePalette gMonPaletteTable[];

// OamData for a 64x64 sprite (common size for Pokémon front pics)
static const struct OamData sReactionMonOam =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP, // 4 bits per pixel (16 colors)
    .shape = SPRITE_SHAPE(64x64), // Define sprite as 64x64 pixels
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x64), // Define sprite as 64x64 pixels - FIXED TYPO HERE
    .tileNum = 0, // Tile index will be set dynamically by the sprite system
    .priority = 0, // Renders above BG0 (which has priority 0 in BgTemplate, but sprite priority 0 is higher visually)
    .paletteNum = 0, // Palette index will be set dynamically
    .affineParam = 0,
};

// A dummy animation table for a static sprite. Just displays frame 0 for a long time.
static const union AnimCmd sMonSpriteAnim[] =
{
    ANIMCMD_FRAME(0, 30), // Display the first frame (tile 0) for 30 frames
    ANIMCMD_END,          // End of animation
};

static const union AnimCmd *const sMonSpriteAnims[] =
{
    sMonSpriteAnim,
};

// The SpriteTemplate that defines our sprite's properties
static const struct SpriteTemplate sReactionMonSpriteTemplate =
{
    .tileTag = TAG_NONE,       // These will be filled dynamically after loading the actual graphics
    .paletteTag = TAG_NONE,    // using our custom tags
    .oam = &sReactionMonOam,
    .anims = sMonSpriteAnims,
    .images = NULL,            // Not used when loading CompressedSpriteSheet
    .affineAnims = gDummySpriteAffineAnimTable, // For non-affine sprites
    .callback = SpriteCallbackDummy, // No custom behavior function for this static sprite
};
// <--- ADDED END: Sprite related declarations ---

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
    sReaction->monSpriteId = MAX_SPRITES; // <--- ADDED: Initialize sprite ID to an invalid value

    // <--- ADDED START: Load and create the Pokémon sprite ---
     // Let's use Pikachu for now

    // Get the sprite sheet and palette from the global tables
    // Create Pikachu sprite


LoadReactionPokemon();
if (sReaction->monSpriteId != MAX_SPRITES)
{
    gSprites[sReaction->monSpriteId].invisible = FALSE;
}
    
    // <--- ADDED END: Load and create the Pokémon sprite ---

    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);

    SetVBlankCallback(ReactionVBlankCallback);
    SetMainCallback2(ReactionMainCallback);

    CreateTask(ReactionMain, 0);
}
static void LoadReactionPokemon(void)
{
    u16 species;

    if (sReaction->monSpriteId != MAX_SPRITES)
{
    FreeAndDestroyMonPicSprite(sReaction->monSpriteId);
    sReaction->monSpriteId = MAX_SPRITES;
}

    species = (Random() % (NUM_SPECIES - 1)) + 1;

    sReaction->monSpriteId = CreateMonPicSprite(
        species,
        FALSE,
        Random(),
        TRUE,
        240 - 32 - 8,
        80,
        14,
        TAG_NONE
    );

    if (sReaction->monSpriteId != MAX_SPRITES)
    {
        gSprites[sReaction->monSpriteId].invisible = FALSE;
    }
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
    ShowText(sText_Controls);
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
        sReaction->reactionTime = 150;
        sReaction->state = REACTION_STATE_WAIT_INPUT;
        break;



    case REACTION_STATE_WAIT_INPUT:

    // GO -> A is correct
    if (gMain.newKeys & A_BUTTON)
    {
        if (sReaction->currentCue) // GO
        {
           if (sReaction->timer >= 90) // answered within first second
{
    sReaction->score += 150;
    ShowText(sText_Fast);
}
else
{
    sReaction->score += 100;
    ShowText(sText_Good);
}
        }
        else // STOP
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

    // STOP -> B is correct
    if (gMain.newKeys & B_BUTTON)
    {
        if (!sReaction->currentCue) // STOP
        {
            if (sReaction->timer >= 90) // answered within first second
{
    sReaction->score += 150;
    ShowText(sText_Fast);
}
else
{
    sReaction->score += 100;
    ShowText(sText_Good);
}
        }
        else // GO
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
        ShowText(sText_TooSlow);
        sReaction->flawlessGame = FALSE;

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
            if (sReaction->flawlessGame
                && sReaction->totalRounds < MAX_EXTENDED_ROUNDS)
            {
                sReaction->totalRounds += 3;

                if (sReaction->totalRounds > MAX_EXTENDED_ROUNDS)
                    sReaction->totalRounds = MAX_EXTENDED_ROUNDS;

                ShowText(sText_BonusRound);
                sReaction->timer = 120;
                sReaction->state = REACTION_STATE_BONUS_MESSAGE_PAUSE;
            }
            else
            {
                if (sReaction->flawlessGame)
                    sReaction->score += 500;

                sReaction->timer = 0;
                sReaction->state = REACTION_STATE_GAME_OVER;
            }
        }
        else
        {
            LoadReactionPokemon();
            sReaction->state = REACTION_STATE_SHOW_CUE;
        }
    }
    break;

case REACTION_STATE_BONUS_MESSAGE_PAUSE:
    if (--sReaction->timer == 0)
    {
        LoadReactionPokemon();
        sReaction->state = REACTION_STATE_SHOW_CUE;
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
{
    AddBagItem(ITEM_RARE_CANDY, 1);
    VarSet(VAR_REACTION_PRIZE, 4);
}
else if (sReaction->score >= 300)
{
    AddBagItem(ITEM_GREAT_BALL, 1);
    VarSet(VAR_REACTION_PRIZE, 3);
}
else if (sReaction->score >= 150)
{
    AddBagItem(ITEM_POKE_BALL, 1);
    VarSet(VAR_REACTION_PRIZE, 2);
}
else
{
    AddBagItem(ITEM_POTION, 1);
    VarSet(VAR_REACTION_PRIZE, 1);
}

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
    // <--- ADDED START: Destroy the Pokémon sprite ---
if (sReaction->monSpriteId != MAX_SPRITES)
{
    FreeAndDestroyMonPicSprite(sReaction->monSpriteId);
    sReaction->monSpriteId = MAX_SPRITES;
} 

    Free(sReactionBgBuffer);
    Free(sReaction);

    sReactionBgBuffer = NULL;
    sReaction = NULL;

    SetMainCallback2(
        CB2_ReturnToFieldContinueScriptPlayMapMusic);
}