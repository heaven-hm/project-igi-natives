// Original IGI.EXE function: FX_FireBallUpdate_15 (VA 0x00489F20; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_15.h"
int32_t FX_FireBallUpdate_15(void* a1, int32_t a2, int32_t a3, float a4)

{
    return Bones_PlayAnimation(*(a1 + 0x4ec) + 0x68, 0, a2, a3, a4);
}
