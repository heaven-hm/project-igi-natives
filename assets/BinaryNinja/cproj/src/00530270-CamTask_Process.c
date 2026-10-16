#include "gi_platform.h"
#include "00530270-CamTask_Process.h"
int32_t CamTask_Process()

{
    Particle_TriggerMuzzleFlash_3();
    Particle_UpdateParticlePhysics_3();
    SoundSys_AttachLipsync_15();
    SoundSys_Defineanimtrigger();
    Particle_Render3DSprites_2();
    /* tailcall */
    return SoundSys_SetFrequency_17();
}
