#include "Particle_EmitParticles_2.h"
int32_t Particle_EmitParticles_2(int32_t a1, int32_t a2, int16_t a3, int16_t* a4)

{
    if (!a3)
        return 0;

    int32_t valA1 = a1;
    int32_t objC = a3;
    valA1 = *(valA1 + 0x3004);
    int32_t i_2 = 0;
    int16_t v_c = valA1;
    int16_t* objC4;
    int16_t tmpD2;
    int32_t i_1;
    int32_t srcS1;

    while (true)
    {
        int32_t tmpD1 = objC;
        int32_t i = 0;
        int32_t objC1 = valA1;
        int32_t ctxB1;

        do
        {
            ctxB1 = 0;
            ctxB1 = (objC1 & 0x7ff)[a2];
            valA1 = nullptr;
            valA1 = (tmpD1 & 0x7ff)[a2];

            if (valA1 != ctxB1)
                break;

            i += 1;
            objC1 += 1;
            tmpD1 += 1;
        } while (i < 0x82);

        i_1 = i_2;

        if (i < i_1)
            tmpD2 = v_c;
        else
        {
            tmpD2 = v_c;
            i_1 = i;
            i_2 = i_1;
            *a4 = tmpD2;

            if (i >= 0x82)
            {
                Particle_FadeParticles(a1, tmpD2, a3);
                return i;
            }
        }

        int32_t objC3 = tmpD2;

        if (valA1 - ctxB1 < 0)
        {
            srcS1 = a1;
            objC4 = srcS1 + objC3 * 6 + 2;
        }
        else
        {
            srcS1 = a1;
            valA1 = objC3 * 3;
            objC4 = srcS1 + (valA1 << 1) + 4;
        }

        valA1 = *objC4;

        if (!valA1)
            break;

        v_c = valA1;
    }

    *objC4 = a3;
    int16_t* objC8 = srcS1 + objC * 6;
    *objC8 = tmpD2;
    objC8[2] = 0;
    objC8[1] = 0;
    return i_1;
}
