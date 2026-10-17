// Original IGI.EXE function: FX_FireBallUpdate_12 (VA 0x004894E0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_12.h"
int32_t* FX_FireBallUpdate_12(int32_t* context)

{
    Qtask_UpdateList(context[2]);
    *(context + 0x2a) = 0;
    return Camera_ApplyHandiCam_33(context);
}
