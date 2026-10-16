#include "00530580-Particle_FadeParticles.h"
/* 0x00530580 Particle_FadeParticles full linked: callers=2 callees=0 */
int32_t sub_530580(int32_t a1, int16_t a2, int16_t a3)

{
    int32_t ecx = a2 * 3;
    int16_t* esi = a1 + (ecx << 1);
    int32_t ecx_2 = *(a1 + (ecx << 1)) * 3;
    void* ecx_3 = a1 + (ecx_2 << 1);

    if (*(a1 + (ecx_2 << 1) + 2) != a2)
        *(ecx_3 + 4) = a3;
    else
        *(ecx_3 + 2) = a3;

    int32_t* edi = esi;
    int32_t* ecx_6 = a1 + a3 * 6;
    *ecx_6 = *edi;
    ecx_6[1] = edi[1];
    *(a1 + *(ecx_6 + 2) * 6) = a3;
    *(a1 + ecx_6[1] * 6) = a3;
    *esi = 0;
    return a1;
}
