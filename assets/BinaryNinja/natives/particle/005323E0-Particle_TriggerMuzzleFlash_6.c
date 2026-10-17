// Original IGI.EXE function: Particle_TriggerMuzzleFlash_6 (VA 0x005323E0; static CFG gate FAIL, CFG score 0.537).
#include "Particle_TriggerMuzzleFlash_6.h"
int32_t Particle_TriggerMuzzleFlash_6()

{
    Particle_FadeParticles_6();
    /* tailcall */
    return Sys_False();
}
