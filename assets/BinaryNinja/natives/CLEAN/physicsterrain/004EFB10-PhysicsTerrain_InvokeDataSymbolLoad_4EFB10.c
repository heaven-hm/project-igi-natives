// IGI native provenance: PhysicsTerrain_InvokeDataSymbolLoad_4EFB10 - 0x004EFB10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFB10-PhysicsTerrain_InvokeDataSymbolLoad_4EFB10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeDataSymbolLoad_4EFB10.h"

int32_t PhysicsTerrain_InvokeDataSymbolLoad_4EFB10(float* arg1, void* arg2)

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

    double var_8 = arg1[2];
    double var_10 = arg1[1];
    double var_18 = *arg1;
    return Game_DataSymbolLoad(result_val, "%f, %f, %f");
}
