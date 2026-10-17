// Original IGI.EXE function: Particle_Render3DSprites (VA 0x00530470; static CFG gate FAIL, CFG score 0.667).
#include "Particle_Render3DSprites.h"
int16_t* Particle_Render3DSprites(void* a1, int16_t a2)

{
    *__builtin_memset(a1, 0, 0x3004) = 0;
    *(a1 + 0x3004) = a2;
    int16_t* result = a1 + a2 * 6;
    *result = 0x800;
    result[2] = 0;
    result[1] = 0;
    return result;
}
