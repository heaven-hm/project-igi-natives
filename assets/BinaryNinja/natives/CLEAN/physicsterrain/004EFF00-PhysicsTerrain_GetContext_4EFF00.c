// IGI native provenance: PhysicsTerrain_GetContext_4EFF00 - 0x004EFF00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFF00-PhysicsTerrain_GetContext_4EFF00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EFF00.h"

int32_t* PhysicsTerrain_GetContext_4EFF00(int32_t arg1, int32_t* arg2)

{
    __builtin_memcpy(arg1, *arg2, 0x14);
    return arg2;
}
