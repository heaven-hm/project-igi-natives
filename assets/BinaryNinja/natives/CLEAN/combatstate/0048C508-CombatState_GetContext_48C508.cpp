// IGI native provenance: CombatState_GetContext_48C508 - 0x0048C508 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048C508-CombatState_GetContext_48C508.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48C508.h"

void* CombatState_GetContext_48C508(void* arg1, void* arg2)

{
    *(arg1 + 0x3e50) = 0;
    *(arg2 + 0x18) = CombatLieDown_Dispatch;
    *(arg2 + 0x1c) = 0x48c510;
    return arg2;
}
