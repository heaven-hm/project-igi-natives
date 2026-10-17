// Original IGI.EXE function: Env_UpdateCameraLens_9 (VA 0x00447D60; static CFG gate PASS, CFG score 1.000).
#include "Env_UpdateCameraLens_9.h"
int32_t Env_UpdateCameraLens_9(void* context, char param_2)

{
    *(context + 0x19d) = param_2;
    return param_2;
}
