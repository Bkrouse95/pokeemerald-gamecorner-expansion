#include "global.h"
#include "link.h"
#include "task.h"
#include "sound.h"
#include "overworld.h"
#include "palette.h"
#include "field_player_avatar.h"
#include "event_object_movement.h"
#include "constants/songs.h"
#include "constants/event_objects.h"

#define EMPTY_OBJ_ID 0xFF

struct IncomingPacketBuffer {
    u8 mapGroup;
    u8 mapNum;
    s16 x;
    s16 y;
    u8 direction;
    u16 avatarId;
};

struct RemotePlayerState {
    u8 mapGroup;
    u8 mapNum;
    s16 x;
    s16 y;
    u8 direction;
    u16 avatarId;
    u8 walkTimer; 
    bool8 isReady; 
};

static u8 sRemotePlayerObjectIds[4];
static struct IncomingPacketBuffer sIncoming[4];
static struct RemotePlayerState sActive[4];
static u8 sPacketCycle;
static bool8 sDebugPingPlayed;
static bool8 sMpInitialized;

static void DespawnRemotePlayer(u8 linkId)
{
    u8 objId = sRemotePlayerObjectIds[linkId];
    if (objId != EMPTY_OBJ_ID && objId < OBJECT_EVENTS_COUNT)
    {
        struct ObjectEvent *obj = &gObjectEvents[objId];
        
        if (obj->spriteId != MAX_SPRITES)
        {
            DestroySprite(&gSprites[obj->spriteId]);
            obj->spriteId = MAX_SPRITES;
        }
        
        RemoveObjectEvent(obj);
        sRemotePlayerObjectIds[linkId] = EMPTY_OBJ_ID;
    }
    sActive[linkId].isReady = FALSE;
}

static u8 SpawnRemotePlayerSprite(u8 linkId, u16 graphicsId, s16 x, s16 y)
{
    struct ObjectEventTemplate template = {0};
    template.localId = 240 + linkId; 
    template.graphicsId = graphicsId;
    template.x = x;
    template.y = y;
    template.elevation = 3; 
    template.movementType = MOVEMENT_TYPE_NONE; 

    return SpawnSpecialObjectEvent(&template);
}

void Task_LiveMultiplayerStream(u8 taskId)
{
    if (!sMpInitialized)
    {
        for (u8 i = 0; i < 4; i++)
        {
            sRemotePlayerObjectIds[i] = EMPTY_OBJ_ID;
            sActive[i].isReady = FALSE;
            sActive[i].walkTimer = 0;
        }
        sPacketCycle = 0;
        sDebugPingPlayed = FALSE;
        sMpInitialized = TRUE;
    }

    if (gPaletteFade.active)
        return;

    if (gPlayerAvatar.objectEventId >= OBJECT_EVENTS_COUNT)
        return;

    struct ObjectEvent *playerObj = &gObjectEvents[gPlayerAvatar.objectEventId];
    if (!playerObj->active)
        return;

    for (u8 i = 0; i < 4; i++)
    {
        u8 objId = sRemotePlayerObjectIds[i];
        if (objId != EMPTY_OBJ_ID && objId < OBJECT_EVENTS_COUNT)
        {
            if (!gObjectEvents[objId].active || gObjectEvents[objId].localId != 240 + i)
            {
                sRemotePlayerObjectIds[i] = EMPTY_OBJ_ID; 
                sActive[i].isReady = FALSE; 
            }
        }
    }

    // --- ATOMIC TRANSMISSION ---
    u16 payload = 0x8000 | (sPacketCycle << 13); 

    switch (sPacketCycle)
    {
        case 0:
            payload |= ((gSaveBlock1Ptr->location.mapGroup & 0x3F) << 7);
            payload |= (gSaveBlock1Ptr->location.mapNum & 0x7F);
            break;
        case 1:
            payload |= (playerObj->currentCoords.x & 0x1FFF);
            break;
        case 2:
            payload |= (playerObj->currentCoords.y & 0x1FFF);
            break;
        case 3:
            payload |= (playerObj->facingDirection & 0xF) << 9;
            payload |= ((gSaveBlock2Ptr->playerGender == MALE) ? OBJ_EVENT_GFX_LINK_BRENDAN : OBJ_EVENT_GFX_LINK_MAY) & 0x1FF;
            break;
    }

    // --- THE SYMMETRY FIX ---
    // Slot 0 guarantees the GBA hardware broadcasts this payload for both Host AND Guest
    gSendCmd[0] = payload;
    sPacketCycle = (sPacketCycle + 1) & 3; 


    // --- DECODE INCOMING DATA ---
    for (u8 i = 0; i < GetLinkPlayerCount(); i++)
    {
        if (i == gLocalLinkPlayerId) continue;

        // Pull from Slot 0
        u16 incoming = gRecvCmds[i][0];
        
        if ((incoming & 0x8000) == 0) continue; 

        u8 packetId = (incoming >> 13) & 3;

        switch (packetId)
        {
            case 0:
                sIncoming[i].mapGroup = (incoming >> 7) & 0x3F;
                sIncoming[i].mapNum = incoming & 0x7F;
                break;
            case 1:
                sIncoming[i].x = incoming & 0x1FFF;
                if (sIncoming[i].x & 0x1000) sIncoming[i].x |= 0xE000; 
                break;
            case 2:
                sIncoming[i].y = incoming & 0x1FFF;
                if (sIncoming[i].y & 0x1000) sIncoming[i].y |= 0xE000;
                break;
            case 3:
                sIncoming[i].direction = (incoming >> 9) & 0xF;
                sIncoming[i].avatarId = incoming & 0x1FF;

                if (sActive[i].x != sIncoming[i].x || sActive[i].y != sIncoming[i].y)
                    sActive[i].walkTimer = 16; 

                sActive[i].mapGroup = sIncoming[i].mapGroup;
                sActive[i].mapNum = sIncoming[i].mapNum;
                sActive[i].x = sIncoming[i].x;
                sActive[i].y = sIncoming[i].y;
                sActive[i].direction = sIncoming[i].direction;
                sActive[i].avatarId = sIncoming[i].avatarId;
                sActive[i].isReady = TRUE; 
                break;
        }

        // --- RENDER REMOTE PLAYERS ---
        if (sActive[i].isReady)
        {
            if (sActive[i].mapGroup == gSaveBlock1Ptr->location.mapGroup && 
                sActive[i].mapNum == gSaveBlock1Ptr->location.mapNum)
            {
                if (!sDebugPingPlayed)
                {
                    PlaySE(SE_PIN);
                    sDebugPingPlayed = TRUE;
                }

                if (sRemotePlayerObjectIds[i] == EMPTY_OBJ_ID)
                {
                    u8 newObjId = SpawnRemotePlayerSprite(i, sActive[i].avatarId, sActive[i].x, sActive[i].y);
                    if (newObjId < OBJECT_EVENTS_COUNT)
                    {
                        sRemotePlayerObjectIds[i] = newObjId;
                        gObjectEvents[newObjId].singleMovementActive = FALSE;
                        gObjectEvents[newObjId].triggerGroundEffectsOnMove = TRUE;
                    }
                }
                
                u8 objId = sRemotePlayerObjectIds[i];
                if (objId != EMPTY_OBJ_ID && objId < OBJECT_EVENTS_COUNT)
                {
                    struct ObjectEvent *obj = &gObjectEvents[objId];
                    struct Sprite *sprite = &gSprites[obj->spriteId];

                    MoveObjectEventToMapCoords(obj, sActive[i].x, sActive[i].y);
                    SetSpritePosToMapCoords(sActive[i].x, sActive[i].y, &obj->initialCoords.x, &obj->initialCoords.y);

                    obj->facingDirection = sActive[i].direction;
                    obj->movementDirection = sActive[i].direction;

                    if (sActive[i].walkTimer > 0)
                    {
                        sActive[i].walkTimer--;
                        obj->singleMovementActive = TRUE; 
                        sprite->animPaused = FALSE;
                        StartSpriteAnimIfDifferent(sprite, GetMoveDirectionAnimNum(sActive[i].direction));
                    }
                    else
                    {
                        obj->singleMovementActive = FALSE;
                        sprite->animPaused = TRUE; 
                        StartSpriteAnimIfDifferent(sprite, GetFaceDirectionAnimNum(sActive[i].direction));
                    }
                }
            }
            else
            {
                DespawnRemotePlayer(i);
            }
        }
    }
}