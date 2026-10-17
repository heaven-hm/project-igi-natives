// IGI native provenance: CombatState_GetContext_480F30 - 0x00480F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00480F30-CombatState_GetContext_480F30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_480F30.h"

void* CombatState_GetContext_480F30(void* arg1)

{
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x84) = 0;
    return arg1;
}
