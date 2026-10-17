// IGI native provenance: Weapon_ComputeAccuracy_8 - 0x0047CDD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047CDD0-Weapon_ComputeAccuracy_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ComputeAccuracy_8.h"
int32_t* Weapon_ComputeAccuracy_8(int32_t* context)

{
    int32_t i_1 = 0x20;
    *context = 0;
    int32_t* result = &context[3];
    int32_t i;

    do
    {
        result[-2] = 0xffffffff;
        result[-1] = 0;
        *result = 0xffffffff;
        result = &result[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
