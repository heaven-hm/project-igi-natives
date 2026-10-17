// IGI native provenance: PhysicsTerrain_GetContext_4EDA70 - 0x004EDA70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EDA70-PhysicsTerrain_GetContext_4EDA70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EDA70.h"

void* PhysicsTerrain_GetContext_4EDA70(void* arg1)

{
    __builtin_memset(arg1 + 0x20, 0, 0x18);
    *(arg1 + 0x38) = 0x3f800000;
    *(arg1 + 0x3c) = 0x40800000;
    return arg1;
}
