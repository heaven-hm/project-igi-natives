#include "gi_platform.h"
#include "00531DB0-Particle_EmitParticles_5.h"
int32_t Particle_EmitParticles_5()

{
    Particle_Render3DSprites_5();
    DynObj_RemoveSymbol_6();
    /* tailcall */
    return SoundSys_Update3DPosition_3();
}
