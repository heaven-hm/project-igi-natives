// Original IGI.EXE function: AI_CombatReposition (VA 0x0048C750; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatReposition.h"

void* AI_CombatReposition(void* pThis @ 0x8)

{
    *(pThis + 0x18) = RePosition;
    return pThis;
}
