#include "AI_CombatFemaleStand.h"

void* AI_CombatFemaleStand(void* pThis @ 0x8)

{
    *(pThis + 0x18) = FX_TrailUpdate_17;
    return pThis;
}
