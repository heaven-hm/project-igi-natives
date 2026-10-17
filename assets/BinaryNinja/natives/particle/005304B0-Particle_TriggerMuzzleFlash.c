// Original IGI.EXE function: Particle_TriggerMuzzleFlash (VA 0x005304B0; static CFG gate PASS, CFG score 1.000).
#include "Particle_TriggerMuzzleFlash.h"
int16_t* Particle_TriggerMuzzleFlash(int32_t context, int16_t param_2)

{
    int32_t data_1 = param_2 * 3;
    void* result = context + (data_1 << 1);

    if (!*(context + (data_1 << 1)))
        return result;

    int16_t entity_val = *(result + 4);

    if (!entity_val)
        return Particle_RenderTrails(context, param_2, *(result + 2));

    if (!*(result + 2))
        return Particle_RenderTrails(context, param_2, entity_val);

    int16_t data_4 = Particle_ResetEmitters(context, param_2);
    Particle_TriggerMuzzleFlash(context, data_4);
    return Particle_FadeParticles(context, param_2, data_4);
}
