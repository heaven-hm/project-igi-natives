// IGI native provenance: CombatState_GetContext_48DEA0 - 0x0048DEA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DEA0-CombatState_GetContext_48DEA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48DEA0.h"

void* CombatState_GetContext_48DEA0(void* arg1)

{
    *(arg1 + 0x18) = CombatPlayAnimation;
    void* result = *(arg1 + 0x28);
    *(result + 0xc) = 0;
    return result;
}
