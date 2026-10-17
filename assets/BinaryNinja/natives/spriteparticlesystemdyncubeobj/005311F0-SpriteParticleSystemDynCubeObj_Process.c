// Original IGI.EXE function: SpriteParticleSystemDynCubeObj_Process (VA 0x005311F0; static CFG gate FAIL, CFG score 0.441).
#include "SpriteParticleSystemDynCubeObj_Process.h"
int32_t SpriteParticleSystemDynCubeObj_Process()

{
    Particle_Render3DSprites_4();
    /* tailcall */
    return Particle_Render3DSprites_6();
}
