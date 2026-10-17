// IGI native provenance: PhysicsTerrain_GetContext_4EFC90 - 0x004EFC90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFC90-PhysicsTerrain_GetContext_4EFC90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EFC90.h"

int32_t* PhysicsTerrain_GetContext_4EFC90(int32_t arg1, int32_t* arg2)

{
    __builtin_memcpy(*arg2, arg1, 0x28);
    return arg2;
}
