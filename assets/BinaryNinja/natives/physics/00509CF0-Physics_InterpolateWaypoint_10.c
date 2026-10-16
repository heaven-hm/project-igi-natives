#include "Physics_InterpolateWaypoint_10.h"
void Physics_InterpolateWaypoint_10()

{
    int32_t i_1 = g_a7b638;
    int32_t ctxB = 0;
    int32_t v_4 = 0;

    if (i_1 > 0)
    {
        int32_t* v_8_1 = &g_a7b4e0;
        bool cond_1_1;

        do
        {
            int32_t* valA2 = *v_8_1;

            if (valA2)
            {
                memcpy(ctxB + 0xa7b4f8, ctxB + &g_a7b2f0, 0x50);
                (*(*valA2 + 0x64))(valA2);
                int32_t* valA3 = *v_8_1;
                int32_t valA4 = (*(*valA3 + 0x24))(valA3, 0x50, ctxB + &g_a7b2f0);

                if (valA4 < 0)
                {
                    if (valA4 == 0x8007001e)
                        Physics_CalculateSplineLength_10(v_4);

                    __builtin_memset(ctxB + &g_a7b2f0, 0, 0x50);
                }
            }

            i_1 = g_a7b638;
            ctxB += 0x50;
            cond_1_1 = v_4 + 1 < i_1;
            v_4 += 1;
            v_8_1 = &v_8_1[1];
        } while (cond_1_1);
    }

    if (i_1 <= 0)
        return;

    int32_t* dstD3 = &g_a7b2f0;
    int32_t* tmpD3 = &g_bcaa20;
    int32_t i;

    do
    {
        int32_t j = 0;
        tmpD3[1] = *tmpD3;
        *tmpD3 = 0;
        int32_t ctxB1 = *tmpD3;

        do
        {
            int32_t valA7 = 0;
            valA7 = (*(dstD3 + j + 0x30) & 0x80) == 0x80;
            ctxB1 |= valA7 << ((j + 4) & 0x1f);
            j += 1;
        } while (j < 0x20);

        *tmpD3 = ctxB1;
        int16_t valA9;
        valA9 = tmpD3[-7];

        if (valA9)
        {
            int32_t valA10 = *dstD3;
            int32_t valA11;

            if (valA10 < 0)
            {
                valA11 = ctxB1;
                valA11 |= 1;
                *tmpD3 = valA11;
            }
            else if (valA10 > 0)
            {
                valA11 = *tmpD3;
                valA11 |= 2;
                *tmpD3 = valA11;
            }
            int32_t valA12 = dstD3[1];
            int32_t valA13;

            if (valA12 < 0)
            {
                valA13 = *tmpD3;
                valA13 |= 4;
                *tmpD3 = valA13;
            }
            else if (valA12 > 0)
            {
                valA13 = *tmpD3;
                valA13 |= 8;
                *tmpD3 = valA13;
            }
        }

        valA9 = *(tmpD3 - 0x1b);

        if (valA9)
        {
            if (!*tmpD3)
                *(tmpD3 - 0x1b) = 0;

            *tmpD3 = 0;
        }

        int32_t objC = dstD3[5];
        tmpD3[-6] = *dstD3 * 0.0078125;
        tmpD3[-5] = dstD3[1] * 0.0078125;
        long double x87_r7_5 = objC;
        long double f1_1 = 0f;
        x87_r7_5 - f1_1;
        valA9 = (x87_r7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe;

        if (*(&valA9 + 1) & 0x41)
        {
            tmpD3[-2] = -((objC * 0.0078125));
            tmpD3[-1] = 0;
        }
        else
        {
            tmpD3[-2] = 0;
            tmpD3[-1] = objC * 0.0078125;
        }

        long double x87_r7_11 = dstD3[6];
        dstD3 = &dstD3[0x14];
        tmpD3 = &tmpD3[0xa];
        i = i_1;
        i_1 -= 1;
        tmpD3[-0xe] = x87_r7_11;
        tmpD3[-0xd] = dstD3[-0xd];
    } while (i != 1);
}
