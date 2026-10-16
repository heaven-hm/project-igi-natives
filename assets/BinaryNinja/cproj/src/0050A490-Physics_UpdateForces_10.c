#include "gi_platform.h"
#include "0050A490-Physics_UpdateForces_10.h"
uint32_t Physics_UpdateForces_10(void* a1 , char* a2, uint32_t a3)

{
    uint32_t result = Terrain_SampleHeightmap_4(a2, 1, a3, (*(int32_t*)(uintptr_t)(a1 + 0x98)));

    if (result < a3)
        (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = 1;

    return result;
}
