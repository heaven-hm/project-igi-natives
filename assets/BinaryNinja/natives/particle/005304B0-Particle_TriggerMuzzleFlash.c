#include "Particle_TriggerMuzzleFlash.h"
int16_t* Particle_TriggerMuzzleFlash(int32_t a1, int16_t a2)

{
    int32_t valA1 = a2 * 3;
    void* result = a1 + (valA1 << 1);

    if (!*(a1 + (valA1 << 1)))
        return result;

    int16_t objC = *(result + 4);

    if (!objC)
        return Particle_RenderTrails(a1, a2, *(result + 2));

    if (!*(result + 2))
        return Particle_RenderTrails(a1, a2, objC);

    int16_t valA4 = Particle_ResetEmitters(a1, a2);
    Particle_TriggerMuzzleFlash(a1, valA4);
    return Particle_FadeParticles(a1, a2, valA4);
}
