// Original IGI.EXE function: AI_UpdateOrders_19 (VA 0x004631A0; static CFG gate PASS, CFG score 0.917).
#include "AI_UpdateOrders_19.h"
int32_t AI_UpdateOrders_19(void* context, int32_t* param_2)

{
    WorldObject_CommitTransform(Level_StartMission_4(), context, param_2, *(context + 0xa0));
    void* item_1c = context;
    AI_CheckHearing_23(*(context + 0x4ec));
    *(context + 0x7d0) = *param_2;
    *(context + 0x7d4) = param_2[1];
    *(context + 0x7d8) = param_2[2];
    *(context + 0x7dc) = param_2[3];
    memset(context + 0x670, 0, 0x18);
    return 0;
}
