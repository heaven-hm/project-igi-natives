// Original IGI.EXE function: AI_CheckHearing_15 (VA 0x0045BD90; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_15.h"
int32_t AI_CheckHearing_15(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_45bdc0;
    return result;
}
