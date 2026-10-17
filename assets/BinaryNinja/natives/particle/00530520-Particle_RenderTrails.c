// Original IGI.EXE function: Particle_RenderTrails (VA 0x00530520; static CFG gate PASS, CFG score 1.000).
#include "Particle_RenderTrails.h"
int16_t* Particle_RenderTrails(int32_t a1, int16_t a2, int16_t a3)

{
    int32_t valA1 = a2 * 3;
    int16_t* result = a1 + (valA1 << 1);
    *(a1 + a3 * 6) = *(a1 + (valA1 << 1));
    int32_t tmpD3 = *result * 3;
    void* objC1 = a1 + (tmpD3 << 1);

    if (*(a1 + (tmpD3 << 1) + 4) != a2)
    {
        *(objC1 + 2) = a3;
        *result = 0;
        return result;
    }

    *(objC1 + 4) = a3;
    *result = 0;
    return result;
}
