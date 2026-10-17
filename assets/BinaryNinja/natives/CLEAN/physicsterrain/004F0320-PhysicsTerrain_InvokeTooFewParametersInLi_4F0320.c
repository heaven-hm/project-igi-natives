// IGI native provenance: PhysicsTerrain_InvokeTooFewParametersInLi_4F0320 - 0x004F0320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0320-PhysicsTerrain_InvokeTooFewParametersInLi_4F0320.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeTooFewParametersInLi_4F0320.h"

int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4F0320(int32_t* arg1, int32_t* arg2)

{
    int32_t dest_ptr = *arg1;

    if (!dest_ptr)
    {
        *arg2 = 1;
        return arg2;
    }

    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *dest_ptr;
        dest_ptr += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    *arg2 = ~i;
    return 0;
}
