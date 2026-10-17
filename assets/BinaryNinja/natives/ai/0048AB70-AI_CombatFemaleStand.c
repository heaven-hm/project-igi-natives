// Original IGI.EXE function: AI_CombatFemaleStand (VA 0x0048AB70; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatFemaleStand.h"

void* AI_CombatFemaleStand(void* pThis @ 0x8)

{
    *(pThis + 0x18) = FX_TrailUpdate_17;
    return pThis;
}
