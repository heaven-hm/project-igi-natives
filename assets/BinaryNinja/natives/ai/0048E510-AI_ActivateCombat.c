// Original IGI.EXE function: AI_ActivateCombat (VA 0x0048E510; static CFG gate PASS, CFG score 1.000).
#include "AI_ActivateCombat.h"

void* AI_ActivateCombat(void* pThis )

{
    *(pThis + 0x18) = FX_SmokeEmit_20;
    return pThis;
}
