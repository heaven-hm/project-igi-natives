// IGI native provenance: Physics_UpdateForces_10 - 0x0050A490 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A490-Physics_UpdateForces_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_UpdateForces_10.h"
uint32_t Physics_UpdateForces_10(void* context , char* param_2, uint32_t param_3)

{
    uint32_t result = Terrain_SampleHeightmap_4(param_2, 1, param_3, *(context + 0x98));

    if (result < param_3)
        *(context + 0x9c) = 1;

    return result;
}
