#include "AI_TriggerCombatState.h"

void* AI_TriggerCombatState(void* pThis @ 0x8)

{
    *(pThis + 0x18) = SetCombat_Run;
    *(pThis + 0x20) = AI_ValidateCombatTask;
    return pThis;
}
