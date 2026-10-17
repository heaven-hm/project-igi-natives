// IGI native provenance: PhysicsTerrain_GetContext_4F0170 - 0x004F0170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0170-PhysicsTerrain_GetContext_4F0170.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4F0170.h"

int32_t* PhysicsTerrain_GetContext_4F0170(int16_t* arg1, int32_t* arg2)

{
    int32_t* result = arg2;
    int16_t* context_val = *result;
    result = *arg1;
    *context_val = result;
    return result;
}
