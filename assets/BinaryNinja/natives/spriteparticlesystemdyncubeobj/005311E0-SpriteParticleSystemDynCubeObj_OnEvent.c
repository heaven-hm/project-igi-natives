// Original IGI.EXE function: SpriteParticleSystemDynCubeObj_OnEvent (VA 0x005311E0; static CFG gate FAIL, CFG score 0.411).
#include "SpriteParticleSystemDynCubeObj_OnEvent.h"
int32_t SpriteParticleSystemDynCubeObj_OnEvent()

{
    Particle_UpdateParticlePhysics_6();
    /* tailcall */
    return Particle_UpdateParticlePhysics_4();
}
