#include "Particle_FadeParticles_2.h"
int32_t Particle_FadeParticles_2(int32_t* a1)

{
    int32_t objC = a1[1];

    if (objC == 0x80)
    {
        char* srcS1 = *a1;
        int32_t tmpD1 = 0;
        tmpD1 = *srcS1;
        *a1 = &srcS1[1];
        a1[2] = tmpD1;
    }

    int32_t tmpD3 = a1[2] & objC;
    int32_t objC1 = objC >> 1;
    a1[1] = objC1;

    if (!objC1)
        a1[1] = 0x80;

    int32_t result = 0;
    result = tmpD3;
    return result;
}
