// Original IGI.EXE function: Particle_EmitParticles_5 (VA 0x00531DB0; static CFG gate FAIL, CFG score 0.700).
#include "Particle_EmitParticles_5.h"
int32_t Particle_EmitParticles_5()

{
    Particle_Render3DSprites_5();
    DynObj_RemoveSymbol_6();
    /* tailcall */
    return SoundSys_Update3DPosition_3();
}
