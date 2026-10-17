// IGI native provenance: PhysicsTerrain_GetContext_4EF990 - 0x004EF990 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EF990-PhysicsTerrain_GetContext_4EF990.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EF990.h"

int32_t* PhysicsTerrain_GetContext_4EF990(int32_t arg1, int32_t* arg2)

{
    __builtin_memcpy(*arg2, arg1, 0x2c);
    return arg2;
}
