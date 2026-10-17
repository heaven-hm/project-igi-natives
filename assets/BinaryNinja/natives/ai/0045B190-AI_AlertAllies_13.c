// Original IGI.EXE function: AI_AlertAllies_13 (VA 0x0045B190; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_13.h"
int32_t AI_AlertAllies_13(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_SelectTarget_13;
    return result;
}
