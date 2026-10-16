#include "00530850-Particle_RenderTrails_2.h"
/* 0x00530850 Particle_RenderTrails_2 full linked: callers=4 callees=0 */
int32_t* sub_530850(int32_t* a1, int32_t a2, int32_t* a3)

{
    int32_t* result = a3;
    int32_t i = 1 << ((result - 1) & 0x1f);

    if (i)
    {
        result = a1;
        int32_t ebx;
        int32_t var_4_1 = ebx;

        do
        {
            if (a2 & i)
                result[2] |= result[1];

            int32_t ecx_3 = result[1] >> 1;
            result[1] = ecx_3;

            if (!ecx_3)
            {
                **result = result[2];
                int32_t ecx_6 = *result + 1;
                result[2] = 0;
                *result = ecx_6;
                result[1] = 0x80;
            }

            i u>>= 1;
        } while (i);
    }

    return result;
}
