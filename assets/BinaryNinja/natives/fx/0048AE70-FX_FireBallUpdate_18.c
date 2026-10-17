// Original IGI.EXE function: FX_FireBallUpdate_18 (VA 0x0048AE70; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_18.h"
void* FX_FireBallUpdate_18(int32_t a1, void* a2, int32_t a3, int32_t a4)

{
    *(a2 + 0x24) = a4;

    if (!a3)
        return a2;

    return a3(a1, a2);
}
