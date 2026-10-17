// IGI native provenance: PhysicsTerrain_GetContext_4EF9B0 - 0x004EF9B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EF9B0-PhysicsTerrain_GetContext_4EF9B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EF9B0.h"

int32_t* PhysicsTerrain_GetContext_4EF9B0(int32_t arg1, int32_t* arg2)

{
    __builtin_memcpy(arg1, *arg2, 0x2c);
    return arg2;
}
