#include "005308B0-Particle_FadeParticles_2.h"
/* 0x005308b0 Particle_FadeParticles_2 full linked: callers=1 callees=0 */
int32_t sub_5308b0(int32_t* a1)

{
    int32_t ecx = a1[1];

    if (ecx == 0x80)
    {
        char* esi_1 = *a1;
        int32_t edx_1 = 0;
        edx_1 = *esi_1;
        *a1 = &esi_1[1];
        a1[2] = edx_1;
    }

    int32_t edx_3 = a1[2] & ecx;
    int32_t ecx_1 = ecx >> 1;
    a1[1] = ecx_1;

    if (!ecx_1)
        a1[1] = 0x80;

    int32_t result = 0;
    result = edx_3;
    return result;
}
