// Original IGI.EXE function: CamTask_Process (VA 0x00530270; static CFG gate FAIL, CFG score 0.786).
#include "CamTask_Process.h"
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
