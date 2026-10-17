// IGI native provenance: CombatState_ProcessStep_481E60 - 0x00481E60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00481E60-CombatState_ProcessStep_481E60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_ProcessStep_481E60.h"

void* CombatState_ProcessStep_481E60(void* arg1, void* arg2)

{
    void* result;
    result = *(arg1 + 0x190);

    if (!result)
    {
        result = arg2;
        long double x87_r7_2 = *(result + 4) + *(arg1 + 0x1e8);
        *(arg1 + 0x1e8) = x87_r7_2;
        long double temp0_1 = *(arg1 + 0x1ec);
        x87_r7_2 - temp0_1;
        result = (x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            *(arg1 + 0x1f4) = 0;
    }

    return result;
}
