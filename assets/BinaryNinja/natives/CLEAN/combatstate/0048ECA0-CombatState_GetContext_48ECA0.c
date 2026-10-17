// IGI native provenance: CombatState_GetContext_48ECA0 - 0x0048ECA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048ECA0-CombatState_GetContext_48ECA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48ECA0.h"

void* CombatState_GetContext_48ECA0(void* arg1)

{
    void* result = *(arg1 + 0x28);
    *(arg1 + 0x18) = FX_FireBallUpdate_21;
    *(result + 0x19) = 0;
    *(result + 0x14) = 0xffffffff;
    return result;
}
