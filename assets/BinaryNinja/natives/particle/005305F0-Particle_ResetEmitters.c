#include "Particle_ResetEmitters.h"
int32_t Particle_ResetEmitters(int32_t a1, int16_t a2)

{
    int16_t objC = *(a1 + a2 * 6 + 2);
    int32_t valA2 = objC * 3;
    valA2 = *(a1 + (valA2 << 1) + 4);

    while (valA2)
    {
        objC = valA2;
        valA2 = objC * 3;
        valA2 = *(a1 + (valA2 << 1) + 4);
    }

    return objC;
}
