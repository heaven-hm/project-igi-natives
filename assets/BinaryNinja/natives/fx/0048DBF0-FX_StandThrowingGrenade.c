// Original IGI.EXE function: FX_StandThrowingGrenade (VA 0x0048DBF0; static CFG gate PASS, CFG score 1.000).
#include "FX_StandThrowingGrenade.h"
int32_t FX_StandThrowingGrenade(void* context)

{
    char* item_8 = "Stand - Throwing grenade";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;

    if (!Locomotion_GetState(context, 0))
        return 1;

    void* result = AI_WriteChannel(context, 8, 1.0f);
    result = 0;
    return result;
}
