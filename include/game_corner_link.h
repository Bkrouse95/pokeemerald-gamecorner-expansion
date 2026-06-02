#ifndef GUARD_GAME_CORNER_LINK_H
#define GUARD_GAME_CORNER_LINK_H

enum
{
    GC_LINK_NONE,
    GC_LINK_JACKPOT,
};

struct GameCornerLinkPacket
{
    u16 command;
    u16 value;
};

void GC_SendJackpot(u16 amount);
void GC_CheckIncomingPackets(void);

#endif