// Original IGI.EXE function: Physics_UpdateForces_10 (VA 0x0050A490; static CFG gate PASS, CFG score 1.000).
#include "Physics_UpdateForces_10.h"
uint32_t Physics_UpdateForces_10(void* a1 @ 0x8, char* a2, uint32_t a3)

{
    uint32_t result = Terrain_SampleHeightmap_4(a2, 1, a3, *(a1 + 0x98));

    if (result < a3)
        *(a1 + 0x9c) = 1;

    return result;
}
