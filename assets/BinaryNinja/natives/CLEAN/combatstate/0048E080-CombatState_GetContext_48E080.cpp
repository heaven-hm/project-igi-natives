// IGI native provenance: CombatState_GetContext_48E080 - 0x0048E080 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E080-CombatState_GetContext_48E080.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48E080.h"

void* CombatState_GetContext_48E080(void* arg1)

{
    *(arg1 + 0x18) = FX_ExplosionSpawn_20;
    void* result = *(arg1 + 0x28);
    *(result + 0x24) = 0xffffffff;
    return result;
}
