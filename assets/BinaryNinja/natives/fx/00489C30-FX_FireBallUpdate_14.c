// Original IGI.EXE function: FX_FireBallUpdate_14 (VA 0x00489C30; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_14.h"
int32_t* FX_FireBallUpdate_14(void* a1, int32_t a2)

{
    *(a1 + 0x258) = 0x3f800000;
    *(a1 + 0x25c) = a2;
    int32_t* result = FX_SmokeEmit_14(a1);
    *(a1 + 0x2e8) = 0xffffffff;
    return result;
}
