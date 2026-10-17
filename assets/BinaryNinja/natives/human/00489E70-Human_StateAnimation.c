// Original IGI.EXE function: Human_StateAnimation (VA 0x00489E70; static CFG gate PASS, CFG score 1.000).
#include "Human_StateAnimation.h"
int32_t Human_StateAnimation(void* context, int32_t param_2, float param_3)

{
    int32_t* data_1 = *(context + 0x338) + (param_2 << 3);
    return FX_DebrisSpawn_14(context, *data_1, data_1[1], param_3);
}
