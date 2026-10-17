// IGI native provenance: PhysicsTerrain_GetContext_4F03D0 - 0x004F03D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F03D0-PhysicsTerrain_GetContext_4F03D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4F03D0.h"

int32_t PhysicsTerrain_GetContext_4F03D0(int32_t arg1, int32_t* arg2)

{
    int32_t i = 0xffffffff;
    int32_t dest_ptr = *arg2;

    while (i)
    {
        bool cond:0_1 = 0 != *dest_ptr;
        dest_ptr += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t context_val = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = __builtin_memcpy(arg1, dest_ptr - context_val, context_val & 0xfffffffc);
    __builtin_memcpy(edi_3, esi_1, context_val & 3);
    return 0;
}
