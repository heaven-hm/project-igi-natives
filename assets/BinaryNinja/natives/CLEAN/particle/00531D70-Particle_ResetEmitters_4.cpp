// IGI native provenance: Particle_ResetEmitters_4 - 0x00531D70 - CFG score 57.5% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00531D70-Particle_ResetEmitters_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
