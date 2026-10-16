#include "005304B0-Particle_TriggerMuzzleFlash.h"
/* 0x005304b0 Particle_TriggerMuzzleFlash full linked: callers=2 callees=5 */
int16_t* sub_5304b0(int32_t a1, int16_t a2)

{
    int32_t eax_1 = a2 * 3;
    void* result = a1 + (eax_1 << 1);

    if (!*(a1 + (eax_1 << 1)))
        return result;

    int16_t ecx = *(result + 4);

    if (!ecx)
        return sub_530520(a1, a2, *(result + 2));

    if (!*(result + 2))
        return sub_530520(a1, a2, ecx);

    int16_t eax_4 = sub_5305f0(a1, a2);
    sub_5304b0(a1, eax_4);
    return sub_530580(a1, a2, eax_4);
}
