#include "gi_platform.h"
#include "00530470-Particle_Render3DSprites.h"
int16_t* Particle_Render3DSprites(void* a1, int16_t a2)

{
    (*(int32_t*)__builtin_memset(a1, 0, 0x3004)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3004)) = a2;
    int16_t* result = a1 + a2 * 6;
    *result = 0x800;
    result[2] = 0;
    result[1] = 0;
    return result;
}
