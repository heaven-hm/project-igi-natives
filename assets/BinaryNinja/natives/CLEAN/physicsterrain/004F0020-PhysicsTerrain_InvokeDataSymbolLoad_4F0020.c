// IGI native provenance: PhysicsTerrain_InvokeDataSymbolLoad_4F0020 - 0x004F0020 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0020-PhysicsTerrain_InvokeDataSymbolLoad_4F0020.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeDataSymbolLoad_4F0020.h"

int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F0020(int32_t* arg1, void* arg2)

{
    char* result_val = *(arg2 + 4);

    if (*result_val)
    {
        char i;

        do
        {
            i = result_val[1];
            result_val = &result_val[1];
        } while (i);
    }

    int32_t var_4 = arg1[5];
    int32_t var_8 = arg1[4];
    int32_t var_c = arg1[3];
    int32_t var_10 = arg1[2];
    int32_t var_14 = arg1[1];
    int32_t var_18 = *arg1;
    return Game_DataSymbolLoad(result_val, "%f, %f, %f");
}
