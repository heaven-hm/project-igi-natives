// Original IGI.EXE function: Particle_ResetEmitters_4 (VA 0x00531D70; static CFG gate FAIL, CFG score 0.575).
#include "Particle_ResetEmitters_4.h"
int32_t Particle_ResetEmitters_4()

{
    Particle_RenderTrails_5();
    Hazinglayers_Update();
    Particle_UpdateParticlePhysics();
    j_AnimSound_LoadParameters();
    Render_BindTexture_3();
    SoundSys_Update3DPosition_4();
    /* tailcall */
    return Particle_UpdateParticlePhysics_5();
}
