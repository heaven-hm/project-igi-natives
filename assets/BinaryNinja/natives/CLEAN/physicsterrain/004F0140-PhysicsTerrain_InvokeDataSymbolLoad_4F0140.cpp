// IGI native provenance: PhysicsTerrain_InvokeDataSymbolLoad_4F0140 - 0x004F0140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0140-PhysicsTerrain_InvokeDataSymbolLoad_4F0140.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeDataSymbolLoad_4F0140.h"

int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F0140(int16_t* arg1, void* arg2)

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

    int32_t var_4 = *arg1;
    return Game_DataSymbolLoad(result_val, "%d");
}
