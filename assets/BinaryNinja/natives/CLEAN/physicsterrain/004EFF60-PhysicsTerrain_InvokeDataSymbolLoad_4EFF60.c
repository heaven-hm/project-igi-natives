// IGI native provenance: PhysicsTerrain_InvokeDataSymbolLoad_4EFF60 - 0x004EFF60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFF60-PhysicsTerrain_InvokeDataSymbolLoad_4EFF60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeDataSymbolLoad_4EFF60.h"

int32_t PhysicsTerrain_InvokeDataSymbolLoad_4EFF60(int32_t* arg1, void* arg2)

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

    int32_t var_4 = arg1[1];
    int32_t var_8 = *arg1;
    return Game_DataSymbolLoad(result_val, "%f");
}
