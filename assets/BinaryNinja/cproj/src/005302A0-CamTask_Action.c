#include "gi_platform.h"
#include "005302A0-CamTask_Action.h"
int32_t CamTask_Action()

{
    SoundSys_SetMasterVolume_15();
    SoundSys_InitSoundSys_16();
    Particle_Render3DSprites_3();
    /* tailcall */
    return Particle_RenderTrails_3();
}
