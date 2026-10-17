// Original IGI.EXE function: Env_UpdateCameraLens_6 (VA 0x00444BA0; static CFG gate PASS, CFG score 1.000).
#include "Env_UpdateCameraLens_6.h"
void* Env_UpdateCameraLens_6(void* a1)

{
    *(a1 + 0x11e) = 1;
    *(a1 + 0x130) = 1;
    return a1;
}
