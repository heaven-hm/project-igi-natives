#include "Particle_UpdateParticlePhysics_6.h"
int32_t Particle_UpdateParticlePhysics_6()

{
    Particle_TriggerMuzzleFlash_6();
    QTask_Init();
    /* tailcall */
    return AnimSound_LoadParameters();
}
