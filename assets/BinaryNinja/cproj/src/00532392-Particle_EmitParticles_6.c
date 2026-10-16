#include "gi_platform.h"
#include "00532392-Particle_EmitParticles_6.h"
char* Particle_EmitParticles_6(char* a1, char* a2, int32_t a3)

{
    char* result = a1;
    char* objC = a2;

    if (result != objC && a3)
    {
        int32_t ctxB;
        int32_t v_8_1 = ctxB;
        int32_t i_1 = a3;
        int32_t i;

        do
        {
            char tmpD3 = *result;
            *result = *objC;
            result = &result[1];
            *objC = tmpD3;
            objC = &objC[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
