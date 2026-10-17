// Original IGI.EXE function: FX_StandRollLeft (VA 0x0048D830; static CFG gate PASS, CFG score 1.000).
#include "FX_StandRollLeft.h"
bool FX_StandRollLeft(void* context)

{
    char* item_8 = "Stand - Roll left";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    *(context + 0x3c7c) = 0x3f800000;
    *(context + 0x3df4) = 1;
    return Locomotion_GetState(context, 1);
}
