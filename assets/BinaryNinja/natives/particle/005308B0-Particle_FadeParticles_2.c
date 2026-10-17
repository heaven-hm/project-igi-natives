// Original IGI.EXE function: Particle_FadeParticles_2 (VA 0x005308B0; static CFG gate PASS, CFG score 1.000).
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
