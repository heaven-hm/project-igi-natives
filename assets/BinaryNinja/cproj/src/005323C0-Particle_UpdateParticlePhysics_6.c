#include "gi_platform.h"
#include "005323C0-Particle_UpdateParticlePhysics_6.h"
int32_t Particle_UpdateParticlePhysics_6()

{
    Particle_TriggerMuzzleFlash_6();
    QTask_Init();
    /* tailcall */
    return (AnimSound_LoadParameters(), 0);
}
