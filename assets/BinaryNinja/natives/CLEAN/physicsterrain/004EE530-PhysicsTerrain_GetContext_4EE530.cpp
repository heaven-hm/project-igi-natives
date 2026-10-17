// IGI native provenance: PhysicsTerrain_GetContext_4EE530 - 0x004EE530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE530-PhysicsTerrain_GetContext_4EE530.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetContext_4EE530.h"

void* PhysicsTerrain_GetContext_4EE530(void* arg1)

{
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x25) = 0;
    return arg1;
}
