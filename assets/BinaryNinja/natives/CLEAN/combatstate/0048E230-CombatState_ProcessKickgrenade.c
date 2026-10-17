// IGI native provenance: CombatState_ProcessKickgrenade - 0x0048E230 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E230-CombatState_ProcessKickgrenade.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_ProcessKickgrenade.h"

int32_t* CombatState_ProcessKickgrenade(void* arg1)

{
    int32_t* result = *(*(arg1 + 0x28) + 0x28);

    if (result)
        result = Qtask_UpdateList(result);

    return result;
}
