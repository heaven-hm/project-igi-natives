// Original IGI.EXE function: AI_CheckSector_14 (VA 0x0045BC30; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_14.h"
int32_t AI_CheckSector_14(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_45b900;
    return result;
}
