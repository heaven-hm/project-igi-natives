#include "00530520-Particle_RenderTrails.h"
/* 0x00530520 Particle_RenderTrails full linked: callers=2 callees=0 */
int16_t* sub_530520(int32_t a1, int16_t a2, int16_t a3)

{
    int32_t eax_1 = a2 * 3;
    int16_t* result = a1 + (eax_1 << 1);
    *(a1 + a3 * 6) = *(a1 + (eax_1 << 1));
    int32_t edx_3 = *result * 3;
    void* ecx_1 = a1 + (edx_3 << 1);

    if (*(a1 + (edx_3 << 1) + 4) != a2)
    {
        *(ecx_1 + 2) = a3;
        *result = 0;
        return result;
    }

    *(ecx_1 + 4) = a3;
    *result = 0;
    return result;
}
