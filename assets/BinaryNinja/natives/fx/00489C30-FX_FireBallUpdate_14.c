// Original IGI.EXE function: FX_FireBallUpdate_14 (VA 0x00489C30; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_14.h"
int32_t* FX_FireBallUpdate_14(void* context, int32_t param_2)

{
    *(context + 0x258) = 0x3f800000;
    *(context + 0x25c) = param_2;
    int32_t* result = FX_SmokeEmit_14(context);
    *(context + 0x2e8) = 0xffffffff;
    return result;
}
