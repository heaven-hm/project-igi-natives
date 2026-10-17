// Original IGI.EXE function: AI_CheckSector_23 (VA 0x00465970; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_23.h"
void* AI_CheckSector_23(void* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    *(context + 0x1b4) = 0x3f800000;
    *(context + 0x1b8) = param_2;
    *(context + 0x1bc) = param_3;
    *(context + 0x1c0) = 1.0 / param_4;
    return context;
}
