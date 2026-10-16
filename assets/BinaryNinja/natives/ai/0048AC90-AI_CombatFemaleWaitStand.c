#include "AI_CombatFemaleWaitStand.h"

void* AI_CombatFemaleWaitStand(void* pThis, void* param)

{
    *(param + 0x18) = Named_Combat;
    *(param + 0x1c) = AI_CombatFemaleWaitStand;
    *(pThis + 0x3e50) = 0;
    return pThis;
}
