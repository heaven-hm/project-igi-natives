#include "AI_CombatLookForTarget.h"

void* AI_CombatLookForTarget(void* pThis @ 0x8)

{
    *(pThis + 0x18) = LookForTarget;
    return pThis;
}
