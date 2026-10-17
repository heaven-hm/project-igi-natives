// Original IGI.EXE function: Particle_FadeParticles (VA 0x00530580; static CFG gate PASS, CFG score 1.000).
#include "Particle_FadeParticles.h"
int32_t Particle_FadeParticles(int32_t a1, int16_t a2, int16_t a3)

{
    int32_t objC = a2 * 3;
    int16_t* srcS = a1 + (objC << 1);
    int32_t objC2 = *(a1 + (objC << 1)) * 3;
    void* objC3 = a1 + (objC2 << 1);

    if (*(a1 + (objC2 << 1) + 2) != a2)
        *(objC3 + 4) = a3;
    else
        *(objC3 + 2) = a3;

    int32_t* dstD = srcS;
    int32_t* objC6 = a1 + a3 * 6;
    *objC6 = *dstD;
    objC6[1] = dstD[1];
    *(a1 + *(objC6 + 2) * 6) = a3;
    *(a1 + objC6[1] * 6) = a3;
    *srcS = 0;
    return a1;
}
