#include "gi_platform.h"
#include "00530850-Particle_RenderTrails_2.h"
int32_t* Particle_RenderTrails_2(int32_t* a1, int32_t a2, int32_t* a3)

{
    int32_t* result = a3;
    int32_t i = 1 << ((result - 1) & 0x1f);

    if (i)
    {
        result = a1;
        int32_t ctxB;
        int32_t v_4_1 = ctxB;

        do
        {
            if (a2 & i)
                result[2] |= result[1];

            int32_t objC3 = result[1] >> 1;
            result[1] = objC3;

            if (!objC3)
            {
                **result = result[2];
                int32_t objC6 = *result + 1;
                result[2] = 0;
                *result = objC6;
                result[1] = 0x80;
            }

            i u>>= 1;
        } while (i);
    }

    return result;
}
