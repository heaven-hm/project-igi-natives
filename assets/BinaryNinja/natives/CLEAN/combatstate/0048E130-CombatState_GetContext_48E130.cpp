// IGI native provenance: CombatState_GetContext_48E130 - 0x0048E130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E130-CombatState_GetContext_48E130.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48E130.h"

void* CombatState_GetContext_48E130(void* arg1)

{
    *(arg1 + 0x18) = AIAction_Stunned_Run;
    void* result = *(arg1 + 0x28);
    *(result + 0xc) = 0xffffffff;
    return result;
}
