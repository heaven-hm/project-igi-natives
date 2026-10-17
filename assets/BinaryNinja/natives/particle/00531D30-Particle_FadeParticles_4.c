// IGI native provenance: Particle_FadeParticles_4 - 0x00531D30 - CFG score 69.6% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00531D30-Particle_FadeParticles_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_FadeParticles_4.h"
int32_t Particle_FadeParticles_4()

{
    Particle_EmitParticles_5();
    SoundSys_PlaySoundSample_4();
    Render_TransformVertices_3();
    Physics_CheckHullCollision_14();
    Light_Watermesh();
    Hazinglayers_Init();
    /* tailcall */
    return TransparencyList_Init();
}
