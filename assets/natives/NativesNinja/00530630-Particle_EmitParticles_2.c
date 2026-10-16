#include "00530630-Particle_EmitParticles_2.h"
/* 0x00530630 Particle_EmitParticles_2 full linked: callers=1 callees=1 */
int32_t sub_530630(int32_t a1, int32_t a2, int16_t a3, int16_t* a4)

{
    if (!a3)
        return 0;

    int32_t eax_1 = a1;
    int32_t ecx = a3;
    eax_1 = *(eax_1 + 0x3004);
    int32_t i_2 = 0;
    int16_t var_c = eax_1;
    int16_t* ecx_4;
    int16_t edx_2;
    int32_t i_1;
    int32_t esi_1;

    while (true)
    {
        int32_t edx_1 = ecx;
        int32_t i = 0;
        int32_t ecx_1 = eax_1;
        int32_t ebx_1;

        do
        {
            ebx_1 = 0;
            ebx_1 = (ecx_1 & 0x7ff)[a2];
            eax_1 = nullptr;
            eax_1 = (edx_1 & 0x7ff)[a2];

            if (eax_1 != ebx_1)
                break;

            i += 1;
            ecx_1 += 1;
            edx_1 += 1;
        } while (i < 0x82);

        i_1 = i_2;

        if (i < i_1)
            edx_2 = var_c;
        else
        {
            edx_2 = var_c;
            i_1 = i;
            i_2 = i_1;
            *a4 = edx_2;

            if (i >= 0x82)
            {
                sub_530580(a1, edx_2, a3);
                return i;
            }
        }

        int32_t ecx_3 = edx_2;

        if (eax_1 - ebx_1 < 0)
        {
            esi_1 = a1;
            ecx_4 = esi_1 + ecx_3 * 6 + 2;
        }
        else
        {
            esi_1 = a1;
            eax_1 = ecx_3 * 3;
            ecx_4 = esi_1 + (eax_1 << 1) + 4;
        }

        eax_1 = *ecx_4;

        if (!eax_1)
            break;

        var_c = eax_1;
    }

    *ecx_4 = a3;
    int16_t* ecx_8 = esi_1 + ecx * 6;
    *ecx_8 = edx_2;
    ecx_8[2] = 0;
    ecx_8[1] = 0;
    return i_1;
}
