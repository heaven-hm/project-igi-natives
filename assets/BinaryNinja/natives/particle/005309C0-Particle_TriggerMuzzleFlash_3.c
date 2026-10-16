#include "Particle_TriggerMuzzleFlash_3.h"
int32_t Particle_TriggerMuzzleFlash_3()

{
    SpriteParticleSystemDynCubeObj_OnEvent();
    SoundSysController_Init();
    SoundSysMicrophone_Init();
    SoundDefGroup_Init();
    SoundDefSound_Init();
    SoundDefGraph_Init();
    SoundDefTriggerOnce_Init();
    Screen_Init();
    ViewportQTask_Init();
    TerraDrawTask_Init();
    CameraControlTask_Init();
    FreeCamera_Init();
    DebugText_Init();
    FadeOutEnd_Init();
    GlowTask_Init();
    ParticleSystemDynCubeObj_Init();
    SpriteParticleSystemDynCubeObj_Init();
    FlashTask_Init();
    /* tailcall */
    return BandFilter_Init();
}
