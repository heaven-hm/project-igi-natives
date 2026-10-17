// Original IGI.EXE function: AI_UpdatePatrol_14 (VA 0x0045B500; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_14.h"
int32_t AI_UpdatePatrol_14(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    *(a2 + 0xd19) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = AI_CombatTarget_14;
    return result;
}
