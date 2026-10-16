#include "005305F0-Particle_ResetEmitters.h"
/* 0x005305f0 Particle_ResetEmitters full linked: callers=1 callees=0 */
int32_t sub_5305f0(int32_t a1, int16_t a2)

{
    int16_t ecx = *(a1 + a2 * 6 + 2);
    int32_t eax_2 = ecx * 3;
    eax_2 = *(a1 + (eax_2 << 1) + 4);

    while (eax_2)
    {
        ecx = eax_2;
        eax_2 = ecx * 3;
        eax_2 = *(a1 + (eax_2 << 1) + 4);
    }

    return ecx;
}
