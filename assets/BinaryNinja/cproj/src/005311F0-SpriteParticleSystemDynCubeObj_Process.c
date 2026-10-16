#include "gi_platform.h"
#include "005311F0-SpriteParticleSystemDynCubeObj_Process.h"
int32_t SpriteParticleSystemDynCubeObj_Process()

{
    Particle_Render3DSprites_4();
    /* tailcall */
    return Particle_Render3DSprites_6();
}
