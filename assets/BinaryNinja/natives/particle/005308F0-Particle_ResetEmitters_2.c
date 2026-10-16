#include "Particle_ResetEmitters_2.h"
int32_t Particle_ResetEmitters_2(int32_t* a1, char a2)

{
    int32_t result = 0;
    int32_t i = 1 << ((a2 - 1) & 0x1f);

    if (!i)
        return 0;

    do
    {
        int32_t tmpD1 = a1[1];

        if (tmpD1 == 0x80)
        {
            char* dstD1 = *a1;
            int32_t ctxB1 = 0;
            ctxB1 = *dstD1;
            a1[2] = ctxB1;
            *a1 = &dstD1[1];
        }

        if (a1[2] & tmpD1)
            result |= i;

        i u>>= 1;
        int32_t tmpD2 = tmpD1 >> 1;
        a1[1] = tmpD2;

        if (!tmpD2)
            a1[1] = 0x80;
    } while (i);

    return result;
}
