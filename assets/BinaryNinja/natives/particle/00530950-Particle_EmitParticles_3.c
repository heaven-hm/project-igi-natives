// Original IGI.EXE function: Particle_EmitParticles_3 (VA 0x00530950; static CFG gate PASS, CFG score 1.000).
#include "Particle_EmitParticles_3.h"
int32_t Particle_EmitParticles_3(int32_t context, int32_t param_2)

{
    *((context << 2) + &g_a845d8) = param_2;
    return param_2;
}
