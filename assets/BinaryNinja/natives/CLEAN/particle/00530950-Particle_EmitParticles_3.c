// IGI native provenance: Particle_EmitParticles_3 - 0x00530950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00530950-Particle_EmitParticles_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_EmitParticles_3.h"
int32_t Particle_EmitParticles_3(int32_t context, int32_t param_2)

{
    *((context << 2) + &g_a845d8) = param_2;
    return param_2;
}
