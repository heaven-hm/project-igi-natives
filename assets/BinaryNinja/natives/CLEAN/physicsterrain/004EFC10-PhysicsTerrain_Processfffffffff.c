// IGI native provenance: PhysicsTerrain_Processfffffffff - 0x004EFC10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFC10-PhysicsTerrain_Processfffffffff.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Processfffffffff.h"

int32_t PhysicsTerrain_Processfffffffff(float* arg1, void* arg2)

{
    char* context_val = *(arg2 + 4);

    if (*context_val)
    {
        char i;

        do
        {
            i = context_val[1];
            context_val = &context_val[1];
        } while (i);
    }

    double var_8 = arg1[8];
    double var_10 = arg1[7];
    double var_18 = arg1[6];
    double var_20 = arg1[5];
    double var_28 = arg1[4];
    double var_30 = arg1[3];
    double var_38 = arg1[2];
    double var_40 = arg1[1];
    double var_48 = *arg1;
    return Game_DataSymbolLoad(context_val, "%f, %f, %f, %f, %f, %f, %f, %f, %f");
}
