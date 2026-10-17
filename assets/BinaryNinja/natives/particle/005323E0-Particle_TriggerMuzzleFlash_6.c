// IGI native provenance: Particle_TriggerMuzzleFlash_6 - 0x005323E0 - CFG score 53.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005323E0-Particle_TriggerMuzzleFlash_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_TriggerMuzzleFlash_6.h"
int32_t Particle_TriggerMuzzleFlash_6()

{
    Particle_FadeParticles_6();
    /* tailcall */
    return Sys_False();
}
