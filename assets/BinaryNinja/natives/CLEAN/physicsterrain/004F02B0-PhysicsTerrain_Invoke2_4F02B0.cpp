// IGI native provenance: PhysicsTerrain_Invoke2_4F02B0 - 0x004F02B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F02B0-PhysicsTerrain_Invoke2_4F02B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke2_4F02B0.h"

int32_t PhysicsTerrain_Invoke2_4F02B0(int32_t* arg1, int32_t* arg2)

{
    void* result_val = *arg1;

    if (result_val)
    {
        Sys_ExecuteBytecode_2(result_val);
        *arg1 = 0;
    }

    int32_t i = 0xffffffff;
    int32_t result = 0;
    int32_t data_val = *arg2;
    int32_t dest_ptr = data_val;

    while (i)
    {
        bool cond:0_1 = 0 != *dest_ptr;
        dest_ptr += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    if (~i != 1)
    {
        int32_t edi_1 = data_val;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        void* eax_1 = Mem_Alloc(~i_1, 4);
        int32_t i_2 = 0xffffffff;
        *arg1 = eax_1;
        int32_t edi_2 = *arg2;

        while (i_2)
        {
            bool cond:2_1 = 0 != *edi_2;
            edi_2 += 1;
            i_2 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t result_1 = ~i_2;
        result = result_1;
        int32_t esi_2;
        int32_t edi_5;
        edi_5 = __builtin_memcpy(eax_1, edi_2 - result_1, result_1 & 0xfffffffc);
        __builtin_memcpy(edi_5, esi_2, result & 3);
    }

    return result;
}
