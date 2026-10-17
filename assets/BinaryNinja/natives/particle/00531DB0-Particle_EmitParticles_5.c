// IGI native provenance: Particle_EmitParticles_5 - 0x00531DB0 - CFG score 70.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00531DB0-Particle_EmitParticles_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_EmitParticles_5.h"
int32_t Particle_EmitParticles_5()

{
    Particle_Render3DSprites_5();
    DynObj_RemoveSymbol_6();
    /* tailcall */
    return SoundSys_Update3DPosition_3();
}
