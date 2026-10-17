// Original IGI.EXE function: AI_UpdateOrders_9 (VA 0x004581B0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_9.h"
int32_t AI_UpdateOrders_9(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_CombatTarget_13;
    return result;
}
