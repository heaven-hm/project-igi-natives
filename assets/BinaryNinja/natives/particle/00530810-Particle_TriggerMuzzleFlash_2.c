// Original IGI.EXE function: Particle_TriggerMuzzleFlash_2 (VA 0x00530810; static CFG gate PASS, CFG score 1.000).
#include "Particle_TriggerMuzzleFlash_2.h"
int32_t* Particle_TriggerMuzzleFlash_2(int32_t* context, int32_t param_2)

{
    if (param_2)
        context[2] |= context[1];

    int32_t entity_3 = context[1] >> 1;
    context[1] = entity_3;

    if (!entity_3)
    {
        **context = context[2];
        int32_t entity_6 = *context + 1;
        context[2] = 0;
        *context = entity_6;
        context[1] = 0x80;
    }

    return context;
}
