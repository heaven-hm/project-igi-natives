// IGI native provenance: PhysicsTerrain_Invoke3 - 0x004F1D10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1D10-PhysicsTerrain_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke3.h"

void PhysicsTerrain_Invoke3(int32_t arg1, int32_t* arg2, int32_t arg3)

{
    int32_t* context_val = arg2;

    if (*context_val != 2 || context_val[1] != 1)
        return;

    arg2 = context_val[6];
    int32_t var_c = Script_ParseEnumString_3();
    (*(arg3 + 4))(arg3, &var_c, var_c, arg1, &arg2);
}
