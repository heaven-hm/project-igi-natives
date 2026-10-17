// IGI native provenance: PhysicsTerrain_GetContext_4F0560 - 0x004F0560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0560-PhysicsTerrain_GetContext_4F0560.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4F0560.h"

int32_t* PhysicsTerrain_GetContext_4F0560(char* arg1, int32_t* arg2)

{
    int32_t* result = arg2;
    char* context_val = *result;
    result = *arg1;
    *context_val = result;
    return result;
}
