#include "global.h"
#include "link.h"
#include "game_corner_link.h"
#include "event_data.h"
#include "sound.h"
#include "constants/songs.h"
#include "field_message_box.h"
#include "string_util.h"
#include "money.h"

static struct GameCornerLinkPacket sPacket;
static const u8 sJackpotMsg[] = _("Player 1 got 777!");




void GC_SendJackpot(u16 amount)
{
    PlaySE(SE_PIN);

    sPacket.command = GC_LINK_JACKPOT;
    sPacket.value = amount;

    SendBlock(
        BitmaskAllOtherLinkPlayers(),
        &sPacket,
        sizeof(sPacket)
    );
}


  void GC_CheckIncomingPackets(void)
{
    if (!GetBlockReceivedStatus())
        return;

    gSaveBlock1Ptr->money = 555;
    PlaySE(SE_SUCCESS);

    ResetBlockReceivedFlags();
}