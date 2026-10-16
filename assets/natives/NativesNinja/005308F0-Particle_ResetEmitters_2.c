#include "005308F0-Particle_ResetEmitters_2.h"
/* 0x005308f0 Particle_ResetEmitters_2 full linked: callers=3 callees=0 */
int32_t sub_5308f0(int32_t* a1, char a2)

{
    int32_t result = 0;
    int32_t i = 1 << ((a2 - 1) & 0x1f);

    if (!i)
        return 0;

    do
    {
        int32_t edx_1 = a1[1];

        if (edx_1 == 0x80)
        {
            char* edi_1 = *a1;
            int32_t ebx_1 = 0;
            ebx_1 = *edi_1;
            a1[2] = ebx_1;
            *a1 = &edi_1[1];
        }

        if (a1[2] & edx_1)
            result |= i;

        i u>>= 1;
        int32_t edx_2 = edx_1 >> 1;
        a1[1] = edx_2;

        if (!edx_2)
            a1[1] = 0x80;
    } while (i);

    return result;
}
