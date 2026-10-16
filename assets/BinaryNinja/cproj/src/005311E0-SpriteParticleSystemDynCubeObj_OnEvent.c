#include "gi_platform.h"
#include "005311E0-SpriteParticleSystemDynCubeObj_OnEvent.h"
int32_t SpriteParticleSystemDynCubeObj_OnEvent()

{
    Particle_UpdateParticlePhysics_6();
    /* tailcall */
    return Particle_UpdateParticlePhysics_4();
}
