// Original IGI.EXE function: FX_StandRollRight (VA 0x0048D870; static CFG gate PASS, CFG score 1.000).
#include "FX_StandRollRight.h"
bool FX_StandRollRight(void* context)

{
    char* item_8 = "Stand - Roll right";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    *(context + 0x3c80) = 0x3f800000;
    *(context + 0x3df4) = 0xffffffff;
    return Locomotion_GetState(context, 1);
}
