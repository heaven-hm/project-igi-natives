#include "AI_ActivateCombat.h"

void* AI_ActivateCombat(void* pThis @ 0x8)

{
    *(pThis + 0x18) = FX_SmokeEmit_20;
    return pThis;
}
