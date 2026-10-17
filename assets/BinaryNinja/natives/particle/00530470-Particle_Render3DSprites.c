// Original IGI.EXE function: Particle_Render3DSprites (VA 0x00530470; static CFG gate FAIL, CFG score 0.667).
#include "Particle_Render3DSprites.h"
int16_t* Particle_Render3DSprites(void* context, int16_t param_2)

{
    *memset(context, 0, 0x3004) = 0;
    *(context + 0x3004) = param_2;
    int16_t* result = context + param_2 * 6;
    *result = 0x800;
    result[2] = 0;
    result[1] = 0;
    return result;
}
