// IGI native provenance: CombatState_GetContext_48DF70 - 0x0048DF70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DF70-CombatState_GetContext_48DF70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48DF70.h"

void* CombatState_GetContext_48DF70(void* arg1)

{
    *(arg1 + 0x18) = AIAction_PlaySound_Run;
    return arg1;
}
