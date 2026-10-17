// IGI native provenance: Particle_UpdateParticlePhysics_5 - 0x00531DC0 - CFG score 52.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00531DC0-Particle_UpdateParticlePhysics_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_UpdateParticlePhysics_5.h"
int32_t Particle_UpdateParticlePhysics_5()

{
    SoundSys_SetMasterVolume_3();
    DynObj_FindSymbol_7();
    /* tailcall */
    return Particle_TriggerMuzzleFlash_5();
}
