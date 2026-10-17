// IGI native provenance: PhysicsTerrain_InvokeDataSymbolLoad - 0x004EFA20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFA20-PhysicsTerrain_InvokeDataSymbolLoad.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeDataSymbolLoad.h"

int32_t PhysicsTerrain_InvokeDataSymbolLoad(float* arg1, void* arg2)

{
    char* base_val = *(arg2 + 4);

    if (*base_val)
    {
        char i;

        do
        {
            i = base_val[1];
            base_val = &base_val[1];
        } while (i);
    }

    double var_54 = *arg1;
    Game_DataSymbolLoad(base_val, "%f");
    void var_40;
    void* dest_ptr = &var_40;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:0_1 = 0 != *dest_ptr;
        dest_ptr += 1;
        i_1 -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_1 = ~i_1;
    char* edi_2 = base_val;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:1_1 = 0 != *edi_2;
        edi_2 = &edi_2[1];
        i_2 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t esi_1;
    int32_t edi_4;
    edi_4 = __builtin_memcpy(edi_2 - 1, dest_ptr - ecx_1, ecx_1 & 0xfffffffc);
    __builtin_memcpy(edi_4, esi_1, ecx_1 & 3);
    return 0;
}
