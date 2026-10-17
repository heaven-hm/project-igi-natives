// IGI native provenance: Particle_FadeParticles_2 - 0x005308B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005308B0-Particle_FadeParticles_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_FadeParticles_2.h"
int32_t Particle_FadeParticles_2(int32_t* context)

{
    int32_t entity_val = context[1];

    if (entity_val == 0x80)
    {
        char* source_1 = *context;
        int32_t temp_1 = 0;
        temp_1 = *source_1;
        *context = &source_1[1];
        context[2] = temp_1;
    }

    int32_t temp_3 = context[2] & entity_val;
    int32_t entity_1 = entity_val >> 1;
    context[1] = entity_1;

    if (!entity_1)
        context[1] = 0x80;

    int32_t result = 0;
    result = temp_3;
    return result;
}
