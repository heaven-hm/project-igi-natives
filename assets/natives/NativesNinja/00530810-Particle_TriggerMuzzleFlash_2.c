#include "00530810-Particle_TriggerMuzzleFlash_2.h"
/* 0x00530810 Particle_TriggerMuzzleFlash_2 full linked: callers=3 callees=0 */
int32_t* sub_530810(int32_t* a1, int32_t a2)

{
    if (a2)
        a1[2] |= a1[1];

    int32_t ecx_3 = a1[1] >> 1;
    a1[1] = ecx_3;

    if (!ecx_3)
    {
        **a1 = a1[2];
        int32_t ecx_6 = *a1 + 1;
        a1[2] = 0;
        *a1 = ecx_6;
        a1[1] = 0x80;
    }

    return a1;
}
