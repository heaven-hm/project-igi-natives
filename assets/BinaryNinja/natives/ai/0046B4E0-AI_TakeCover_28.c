// Original IGI.EXE function: AI_TakeCover_28 (VA 0x0046B4E0; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_28.h"
void* AI_TakeCover_28(int32_t context)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x38) = context;
    return result;
}
