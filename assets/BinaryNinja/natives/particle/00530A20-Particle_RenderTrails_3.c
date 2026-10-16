#include "Particle_RenderTrails_3.h"
int32_t Particle_RenderTrails_3()

{
    Camera_UpdateTransform_3();
    FlashTask_OnEvent();
    SpriteParticleSystemDynCubeObj_Update();
    Particle_ResetEmitters_3();
    GlowTask_Update();
    FadeOutEnd_Update();
    SoundSys_LocalDebugFnt();
    FreeCamera_OnEvent();
    CameraControlTask_OnEvent();
    TerraDrawTask_Update();
    SoundSys_LoadSoundDef_11();
    Screen_Update();
    SoundSys_PlaySoundSample_14();
    SoundSys_StopSoundSample_14();
    SoundSys_Update3DPosition_13();
    SoundSys_AttachLipsync_14();
    SoundSysMicrophone_OnEvent();
    SoundSys_Definegroup();
    /* tailcall */
    return SpriteParticleSystemDynCubeObj_Process();
}
