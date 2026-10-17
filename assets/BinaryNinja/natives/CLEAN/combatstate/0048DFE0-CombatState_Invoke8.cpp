// IGI native provenance: CombatState_Invoke8 - 0x0048DFE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DFE0-CombatState_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_Invoke8.h"

int32_t* CombatState_Invoke8(void* arg1, int32_t* arg2)

{
    int32_t* eax_1 = arg2;
    void* source_ptr = eax_1[0xa];
    eax_1[6] = FX_MoveToEventD;
    Physics_ApplyImpulse_8(&arg2, *(arg1 + 0x3b6c), source_ptr + 8);
    int32_t* result = arg2;
    *(source_ptr + 0x20) = *result;
    return result;
}
