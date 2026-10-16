#include "Particle_TriggerMuzzleFlash_2.h"
int32_t* Particle_TriggerMuzzleFlash_2(int32_t* a1, int32_t a2)

{
    if (a2)
        a1[2] |= a1[1];

    int32_t objC3 = a1[1] >> 1;
    a1[1] = objC3;

    if (!objC3)
    {
        **a1 = a1[2];
        int32_t objC6 = *a1 + 1;
        a1[2] = 0;
        *a1 = objC6;
        a1[1] = 0x80;
    }

    return a1;
}
