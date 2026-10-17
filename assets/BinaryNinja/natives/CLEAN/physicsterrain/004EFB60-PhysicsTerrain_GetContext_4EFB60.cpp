// IGI native provenance: PhysicsTerrain_GetContext_4EFB60 - 0x004EFB60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFB60-PhysicsTerrain_GetContext_4EFB60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EFB60.h"

int32_t PhysicsTerrain_GetContext_4EFB60(int32_t* arg1, int32_t* arg2)

{
    int32_t* data_val = *arg2;
    *data_val = *arg1;
    data_val[1] = arg1[1];
    int32_t result = arg1[2];
    data_val[2] = result;
    return result;
}
