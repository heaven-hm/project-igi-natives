#include "00530740-Particle_UpdateParticlePhysics_2.h"
/* 0x00530740 Particle_UpdateParticlePhysics_2 full linked: callers=0 callees=6 */
int32_t sub_530740(int32_t* a1 @ 0x8, int32_t* a2)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    char* edi = *a2;
    char* eax_1 = Mem_Alloc(0x800, 4);
    char* esi = 1;

    while (true)
    {
        if (!sub_5308b0(a1))
        {
            int32_t ebp_2 = sub_5308f0(a1, 0xb);
            int32_t var_4 = ebp_2;

            if (!ebp_2)
                break;

            int32_t eax_5 = sub_5308f0(a1, 7);
            int32_t edx_1 = 0;

            if (eax_5 + 2 >= 0)
            {
                while (true)
                {
                    edi = &edi[1];
                    char ecx_3 = eax_1[(ebp_2 + edx_1) & 0x7ff];
                    edi[0xffffffff] = ecx_3;
                    *(&esi[1] + eax_1 - 1) = ecx_3;
                    esi = &esi[1] & 0x7ff;
                    edx_1 += 1;

                    if (edx_1 > eax_5 + 2)
                        break;

                    ebp_2 = var_4;
                }
            }
        }
        else
        {
            char eax_3 = sub_5308f0(a1, 8);
            *edi = eax_3;
            edi = &edi[1];
            *(esi + eax_1) = eax_3;
            esi = &esi[1] & 0x7ff;
        }
    }

    *a2 = edi;
    return sub_4b0d10(eax_1);
}
