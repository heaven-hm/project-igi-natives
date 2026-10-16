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
