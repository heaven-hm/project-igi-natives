#include "005321F0-Particle_FadeParticles_5.h"
/* 0x005321f0 Particle_FadeParticles_5 full linked: callers=1 callees=4 */
void sub_5321f0(void** a1, int32_t* a2, void* a3, int32_t a4)

{
    if (a2 < 2 || !a3)
        return;

    int32_t var_8_1 = 0;
    char* ebx_1 = a1;
    void var_84;
    a1 = &var_84;
    char* esi_3 = (a2 - 1) * a3 + ebx_1;
    void var_fc;
    a2 = &var_fc;

    while (true)
    {
        if (COMBINE(0, esi_3 - ebx_1) / a3 + 1 > 8)
        {
            sub_532392(((COMBINE(0, esi_3 - ebx_1) / a3 + 1) >> 1) * a3 + ebx_1, ebx_1, a3);
            char* var_c_1 = ebx_1;
            char* edi_2 = a3 + esi_3;

            while (true)
            {
                char* eax_11 = var_c_1 + a3;
                var_c_1 = eax_11;

                if (eax_11 <= esi_3 && a4(eax_11, ebx_1) <= 0)
                    continue;

                bool cond:2_1;

                do
                {
                    edi_2 -= a3;

                    if (edi_2 <= ebx_1)
                        break;

                    cond:2_1 = a4(edi_2, ebx_1) >= 0;
                } while (cond:2_1);

                if (edi_2 < var_c_1)
                    break;

                sub_532392(var_c_1, edi_2, a3);
            }

            sub_532392(ebx_1, edi_2, a3);

            if (edi_2 - ebx_1 - 1 < esi_3 - var_c_1)
            {
                if (var_c_1 < esi_3)
                {
                    int32_t* ecx_8 = a2;
                    var_8_1 += 1;
                    a2 = &a2[1];
                    *ecx_8 = var_c_1;
                    void** eax_14 = a1;
                    a1 = &a1[1];
                    *eax_14 = esi_3;
                }

                if (a3 + ebx_1 < edi_2)
                {
                    esi_3 = edi_2 - a3;
                    continue;
                }
            }
            else
            {
                if (ebx_1 + a3 < edi_2)
                {
                    int32_t* edx_6 = a2;
                    a2 = &a2[1];
                    void** ecx_7 = a1;
                    var_8_1 += 1;
                    a1 = &a1[1];
                    *edx_6 = ebx_1;
                    *ecx_7 = edi_2 - a3;
                }

                if (var_c_1 < esi_3)
                {
                    ebx_1 = var_c_1;
                    continue;
                }
            }
        }
        else
            sub_532344(ebx_1, esi_3, a3, a4);

        var_8_1 -= 1;
        a2 -= 4;
        a1 -= 4;

        if (var_8_1 < 0)
            break;

        ebx_1 = *a2;
        esi_3 = *a1;
    }
}
