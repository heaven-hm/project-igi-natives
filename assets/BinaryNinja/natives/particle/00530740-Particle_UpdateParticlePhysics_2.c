// Original IGI.EXE function: Particle_UpdateParticlePhysics_2 (VA 0x00530740; static CFG gate PASS, CFG score 1.000).
#include "Particle_UpdateParticlePhysics_2.h"
int32_t Particle_UpdateParticlePhysics_2(int32_t* a1 @ 0x8, int32_t* a2)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    char* dstD = *a2;
    char* valA1 = Mem_Alloc(0x800, 4);
    char* srcS = 1;

    while (true)
    {
        if (!Particle_FadeParticles_2(a1))
        {
            int32_t flagP2 = Particle_ResetEmitters_2(a1, 0xb);
            int32_t v_4 = flagP2;

            if (!flagP2)
                break;

            int32_t valA5 = Particle_ResetEmitters_2(a1, 7);
            int32_t tmpD1 = 0;

            if (valA5 + 2 >= 0)
            {
                while (true)
                {
                    dstD = &dstD[1];
                    char objC3 = valA1[(flagP2 + tmpD1) & 0x7ff];
                    dstD[0xffffffff] = objC3;
                    *(&srcS[1] + valA1 - 1) = objC3;
                    srcS = &srcS[1] & 0x7ff;
                    tmpD1 += 1;

                    if (tmpD1 > valA5 + 2)
                        break;

                    flagP2 = v_4;
                }
            }
        }
        else
        {
            char valA3 = Particle_ResetEmitters_2(a1, 8);
            *dstD = valA3;
            dstD = &dstD[1];
            *(srcS + valA1) = valA3;
            srcS = &srcS[1] & 0x7ff;
        }
    }

    *a2 = dstD;
    return Sys_ExecuteBytecode_2(valA1);
}
