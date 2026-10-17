// Original IGI.EXE function: Physics_SolveConstraints_4 (VA 0x00505C10; static CFG gate PASS, CFG score 1.000).
#include "Physics_SolveConstraints_4.h"
void* Physics_SolveConstraints_4(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, char param_7, int32_t param_8)

{
    *(context + 0x38) = param_2;
    *(context + 0x40) = param_4;
    *(context + 0x3c) = param_3;
    *(context + 0x48) = param_6;
    *(context + 0x44) = param_5;
    *(context + 0x4e) = 0;
    *(context + 0x4d) = 0;
    *(context + 0x4c) = param_7;
    *(context + 0x50) = param_8;
    return context;
}
