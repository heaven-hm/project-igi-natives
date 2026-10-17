// Original IGI.EXE function: Particle_UpdateParticlePhysics_6 (VA 0x005323C0; static CFG gate PASS, CFG score 0.889).
#include "Particle_UpdateParticlePhysics_6.h"
int32_t Particle_UpdateParticlePhysics_6()

{
    Particle_TriggerMuzzleFlash_6();
    QTask_Init();
    /* tailcall */
    return AnimSound_LoadParameters();
}
