// Original IGI.EXE function: AI_CombatTarget_11 (VA 0x00458D70; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_11.h"
int32_t AI_CombatTarget_11(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458dd0;
    return result;
}
