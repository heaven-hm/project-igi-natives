#include "Particle_TriggerMuzzleFlash_6.h"
int32_t Particle_TriggerMuzzleFlash_6()

{
    Particle_FadeParticles_6();
    /* tailcall */
    return Sys_False();
}
