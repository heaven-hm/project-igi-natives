// Original IGI.EXE function: FX_FireBallUpdate_18 (VA 0x0048AE70; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_18.h"
void* FX_FireBallUpdate_18(int32_t context, void* param_2, int32_t param_3, int32_t param_4)

{
    *(param_2 + 0x24) = param_4;

    if (!param_3)
        return param_2;

    return param_3(context, param_2);
}
