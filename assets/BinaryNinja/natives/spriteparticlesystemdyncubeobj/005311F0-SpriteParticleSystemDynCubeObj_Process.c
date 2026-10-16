#include "SpriteParticleSystemDynCubeObj_Process.h"
int32_t SpriteParticleSystemDynCubeObj_Process()

{
    Particle_Render3DSprites_4();
    /* tailcall */
    return Particle_Render3DSprites_6();
}
