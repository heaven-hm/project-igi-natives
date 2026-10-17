// Original IGI.EXE function: FX_FireBallUpdate_15 (VA 0x00489F20; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_15.h"
int32_t FX_FireBallUpdate_15(void* context, int32_t param_2, int32_t param_3, float param_4)

{
    return Bones_PlayAnimation(*(context + 0x4ec) + 0x68, 0, param_2, param_3, param_4);
}
