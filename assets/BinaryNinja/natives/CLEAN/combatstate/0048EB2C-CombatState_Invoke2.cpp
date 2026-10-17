// IGI native provenance: CombatState_Invoke2 - 0x0048EB2C - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EB2C-CombatState_Invoke2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_Invoke2.h"

void* CombatState_Invoke2(void* arg1)

{
    return AI_SelectTarget_2(arg1);
}
