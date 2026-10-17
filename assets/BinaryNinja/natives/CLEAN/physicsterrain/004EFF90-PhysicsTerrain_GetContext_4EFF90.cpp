// IGI native provenance: PhysicsTerrain_GetContext_4EFF90 - 0x004EFF90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFF90-PhysicsTerrain_GetContext_4EFF90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EFF90.h"

int32_t PhysicsTerrain_GetContext_4EFF90(int32_t* arg1, int32_t* arg2)

{
    int32_t* context_val = *arg2;
    *context_val = *arg1;
    int32_t result = arg1[1];
    context_val[1] = result;
    return result;
}
