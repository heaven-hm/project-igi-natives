#include "00532392-Particle_EmitParticles_6.h"
/* 0x00532392 Particle_EmitParticles_6 full linked: callers=4 callees=0 */
char* sub_532392(char* a1, char* a2, int32_t a3)

{
    char* result = a1;
    char* ecx = a2;

    if (result != ecx && a3)
    {
        int32_t ebx;
        int32_t var_8_1 = ebx;
        int32_t i_1 = a3;
        int32_t i;

        do
        {
            char edx_3 = *result;
            *result = *ecx;
            result = &result[1];
            *ecx = edx_3;
            ecx = &ecx[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
