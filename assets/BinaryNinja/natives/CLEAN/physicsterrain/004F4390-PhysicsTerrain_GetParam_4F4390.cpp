// IGI native provenance: PhysicsTerrain_GetParam_4F4390 - 0x004F4390 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4390-PhysicsTerrain_GetParam_4F4390.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_GetParam_4F4390.h"

char* PhysicsTerrain_GetParam_4F4390(int32_t arg1, char* arg2)

{
    *arg2 = *(arg2 + 4) != arg1;
    return arg2;
}
