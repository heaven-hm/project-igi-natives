// Original IGI.EXE function: AI_UpdatePatrol_15 (VA 0x0045BC60; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_15.h"
int32_t AI_UpdatePatrol_15(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458eb0;
    return result;
}
