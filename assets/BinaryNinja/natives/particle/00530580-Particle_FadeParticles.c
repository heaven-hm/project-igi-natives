// Original IGI.EXE function: Particle_FadeParticles (VA 0x00530580; static CFG gate PASS, CFG score 1.000).
#include "Particle_FadeParticles.h"
int32_t Particle_FadeParticles(int32_t context, int16_t param_2, int16_t param_3)

{
    int32_t entity_val = param_2 * 3;
    int16_t* source_val = context + (entity_val << 1);
    int32_t entity_2 = *(context + (entity_val << 1)) * 3;
    void* entity_3 = context + (entity_2 << 1);

    if (*(context + (entity_2 << 1) + 2) != param_2)
        *(entity_3 + 4) = param_3;
    else
        *(entity_3 + 2) = param_3;

    int32_t* dest_val = source_val;
    int32_t* entity_6 = context + param_3 * 6;
    *entity_6 = *dest_val;
    entity_6[1] = dest_val[1];
    *(context + *(entity_6 + 2) * 6) = param_3;
    *(context + entity_6[1] * 6) = param_3;
    *source_val = 0;
    return context;
}
