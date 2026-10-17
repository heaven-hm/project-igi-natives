// IGI native provenance: AI_TriggerCombatState - 0x0048E540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E540-AI_TriggerCombatState.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TriggerCombatState.h"

void* AI_TriggerCombatState(void* pThis )

{
    *(pThis + 0x18) = SetCombat_Run;
    *(pThis + 0x20) = AI_ValidateCombatTask;
    return pThis;
}
