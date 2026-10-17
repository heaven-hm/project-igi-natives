// IGI native provenance: Particle_TriggerMuzzleFlash_3 - 0x005309C0 - CFG score 59.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005309C0-Particle_TriggerMuzzleFlash_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
