// Original IGI.EXE function: AI_CombatTarget_5 (VA 0x00453390; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_5.h"
int32_t* AI_CombatTarget_5(void* a1)

{
    return AI_UpdatePatrol_5(*(a1 + 8), 0);
}
