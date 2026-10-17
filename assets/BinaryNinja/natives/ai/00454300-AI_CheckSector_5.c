// Original IGI.EXE function: AI_CheckSector_5 (VA 0x00454300; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_5.h"
int32_t AI_CheckSector_5(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_454330;
    return result;
}
