// IGI native provenance: PhysicsTerrain_GetContext_4F3670 - 0x004F3670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3670-PhysicsTerrain_GetContext_4F3670.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4F3670.h"

void* PhysicsTerrain_GetContext_4F3670(void* arg1, int32_t* arg2)

{
    int32_t* result_val = *arg2;
    *(arg1 + 0x20150) = *result_val;
    __builtin_memcpy(arg1 + 0x6c, &result_val[1], 0x88);
    __builtin_memcpy(arg1 + 0xf4, &result_val[0x23], 0x20000);
    return &result_val[1];
}
