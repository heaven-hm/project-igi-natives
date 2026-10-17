// IGI native provenance: CombatState_GetContext_48EB40 - 0x0048EB40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EB40-CombatState_GetContext_48EB40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48EB40.h"

void* CombatState_GetContext_48EB40(void* arg1)

{
    *(arg1 + 0x18) = FX_ExplosionSpawn_21;
    void* result = *(arg1 + 0x28);
    *(result + 0xc) = 0xffffffff;
    return result;
}
