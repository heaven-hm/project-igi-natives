// IGI native provenance: SpriteParticleSystemDynCubeObj_OnEvent - 0x005311E0 - CFG score 41.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005311E0-SpriteParticleSystemDynCubeObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SpriteParticleSystemDynCubeObj_OnEvent.h"
int32_t SpriteParticleSystemDynCubeObj_OnEvent()

{
    Particle_UpdateParticlePhysics_6();
    /* tailcall */
    return Particle_UpdateParticlePhysics_4();
}
