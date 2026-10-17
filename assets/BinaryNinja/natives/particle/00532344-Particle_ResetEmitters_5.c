// Original IGI.EXE function: Particle_ResetEmitters_5 (VA 0x00532344; static CFG gate PASS, CFG score 1.000).
#include "Particle_ResetEmitters_5.h"
char* Particle_ResetEmitters_5(char* a1, char* a2, int32_t a3, int32_t a4)

{
    char* result = a1;
    char* dstD = a2;

    if (dstD > result)
    {
        do
        {
            char* i_1 = a1;

            for (char* i = &result[a3]; i <= dstD; i = &i[a3])
            {
                if (a4(i, i_1) > 0)
                    i_1 = i;
            }

            result = Particle_EmitParticles_6(i_1, dstD, a3);
            dstD -= a3;
        } while (dstD > a1);
    }

    return result;
}
