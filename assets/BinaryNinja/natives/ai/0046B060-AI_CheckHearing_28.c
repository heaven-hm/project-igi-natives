// Original IGI.EXE function: AI_CheckHearing_28 (VA 0x0046B060; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_28.h"
void* AI_CheckHearing_28(int32_t context)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x20) = context;
    return result;
}
