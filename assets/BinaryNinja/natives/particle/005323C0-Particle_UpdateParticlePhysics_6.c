// IGI native provenance: Particle_UpdateParticlePhysics_6 - 0x005323C0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 005323C0-Particle_UpdateParticlePhysics_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_UpdateParticlePhysics_6.h"
int32_t Particle_UpdateParticlePhysics_6()

{
    Particle_TriggerMuzzleFlash_6();
    QTask_Init();
    /* tailcall */
    return AnimSound_LoadParameters();
}
