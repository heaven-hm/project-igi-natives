// IGI native provenance: PhysicsTerrain_GetContext_4F3630 - 0x004F3630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3630-PhysicsTerrain_GetContext_4F3630.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4F3630.h"

void* PhysicsTerrain_GetContext_4F3630(void* arg1, int32_t* arg2)

{
    int32_t* result_val = *arg2;
    *result_val = *(arg1 + 0x20150);
    __builtin_memcpy(&result_val[1], arg1 + 0x6c, 0x88);
    __builtin_memcpy(&result_val[0x23], arg1 + 0xf4, 0x20000);
    return &result_val[1];
}
