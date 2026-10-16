#include "SpriteParticleSystemDynCubeObj_Init.h"
int32_t SpriteParticleSystemDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t result = TaskType_Register("SpriteParticleSystemDynCubeObj", 0xd8, Particle_EmitParticles_4(), 0);
    g_a84608 = result;
    g_a84610 = 1;
    return result;
}
