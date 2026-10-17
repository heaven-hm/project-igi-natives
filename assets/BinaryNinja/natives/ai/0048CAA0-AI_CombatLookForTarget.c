// Original IGI.EXE function: AI_CombatLookForTarget (VA 0x0048CAA0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatLookForTarget.h"

void* AI_CombatLookForTarget(void* pThis @ 0x8)

{
    *(pThis + 0x18) = LookForTarget;
    return pThis;
}
