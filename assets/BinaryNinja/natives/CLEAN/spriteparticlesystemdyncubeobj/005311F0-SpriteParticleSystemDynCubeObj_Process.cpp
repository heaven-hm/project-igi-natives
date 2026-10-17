// IGI native provenance: SpriteParticleSystemDynCubeObj_Process - 0x005311F0 - CFG score 44.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005311F0-SpriteParticleSystemDynCubeObj_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SpriteParticleSystemDynCubeObj_Process.h"
int32_t SpriteParticleSystemDynCubeObj_Process()

{
    Particle_Render3DSprites_4();
    /* tailcall */
    return Particle_Render3DSprites_6();
}
