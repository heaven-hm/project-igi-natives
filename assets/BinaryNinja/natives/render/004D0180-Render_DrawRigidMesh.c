#include "Render_DrawRigidMesh.h"
int32_t Render_DrawRigidMesh(float a1)

{
    int32_t* tmpD = *(a1 + 0x6c);

    if (!tmpD)
        return 0;

    float* objC = *(a1 + 0x5a0);
    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    long double x87_r6_1 = *(a1 + 0x28) - g_bcab10;
    float v_10;
    long double x87_r6_7;
    long double x87_r7_3;

    if (!objC)
    {
        x87_r7_3 = g_bcab00 * (*(a1 + 0x30) - g_bcab18) + g_bcaafc * x87_r6_1
            + g_bcaaf8 * x87_r7_1;
        x87_r6_7 = *(a1 + 0x44);
    }
    else
    {
        v_10 = x87_r6_1;
        x87_r7_3 = g_bcab00 * (*(a1 + 0x30) - g_bcab18 + objC[2])
            + g_bcaafc * (v_10 + objC[1]) + g_bcaaf8 * (x87_r7_1 + *objC);
        x87_r6_7 = objC[3];
    }

    int32_t valA1 = tmpD[9];
    int32_t srcS = tmpD[0xf];

    if (valA1)
    {
        int32_t i = 0;
        a1 = g_bcab20 * (x87_r7_3 - x87_r6_7);
        long double x87_r7_21 = a1;
        long double f1 = tmpD[0xe];
        x87_r7_21 - f1;
        valA1 = (x87_r7_21 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f1) ? 1 : 0) << 0xa
            | (x87_r7_21 == f1 ? 1 : 0) << 0xe;

        if (!(*(&valA1 + 1) & 0x41))
            return valA1 | 0xffffffff;

        long double x87_r7_22 = tmpD[0xa];
        long double f3 = 0f;
        x87_r7_22 - f3;

        if (*(&((x87_r7_22 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f3) ? 1 : 0) << 0xa
            | (x87_r7_22 == f3 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            i = srcS - 1;

            if (i > 1)
                i = 1;
        }

        long double x87_r7_23 = a1;
        long double f4 = tmpD[i + 0xa];
        x87_r7_23 - f4;
        void* tmpD2 = &tmpD[i + 0xa];

        if (!(*(&((x87_r7_23 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f4) ? 1 : 0) << 0xa
            | (x87_r7_23 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < srcS - 1)
            {
                long double x87_r7_24 = a1;
                long double f7_1 = *(tmpD2 + 4);
                x87_r7_24 - f7_1;
                tmpD2 += 4;
                i += 1;

                if (*(&((x87_r7_24 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_24, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_24 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    break;
            }
        }

        return i;
    }

    int32_t i_2 = 0;
    float v_20 = (g_a4ee98 - x87_r6_7) * (1f - g_54835c) + x87_r6_7;
    long double x87_r7_4 = x87_r7_3 - v_20;
    a1 = x87_r7_4;
    long double f2 = 0f;
    x87_r7_4 - f2;

    if (!(*(&((x87_r7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2) ? 1 : 0) << 0xa
        | (x87_r7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        float v_18_1 = 1f / a1;
        float v_1c_1 = 1f / (g_a4ee88 * v_20);
        float valA3 = v_1c_1;
        float v_14 = valA3;

        if (srcS > 1)
        {
            valA3 = &tmpD[1];
            int32_t i_3 = srcS - 1;
            long double x87_r7_10 = *(*(*(*tmpD + 0xc) + 0xc) + 0x60);
            float* objC3 = &v_10;
            int32_t i_1;

            do
            {
                void* ctxB1 = *valA3;
                valA3 += 4;
                objC3 = &objC3[1];
                i_1 = i_3;
                i_3 -= 1;
                long double x87_r6_11 = *(*(*(ctxB1 + 0xc) + 0xc) + 0x60) / x87_r7_10;
                objC3[-1] = x87_r6_11 * x87_r6_11 * v_1c_1;
            } while (i_1 != 1);
        }

        long double x87_r7_13 = g_bcab20 * v_14;
        long double f5_1 = v_18_1;
        x87_r7_13 - f5_1;
        valA3 = (x87_r7_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&valA3 + 1) & 0x41))
        {
            float* objC4 = &v_14;

            while (i_2 < srcS - 1)
            {
                long double x87_r7_15 = g_bcab20 * objC4[1];
                objC4 = &objC4[1];
                i_2 += 1;
                long double f8_1 = v_18_1;
                x87_r7_15 - f8_1;
                valA3 = (x87_r7_15 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f8_1 ? 1 : 0) << 0xe;

                if (*(&valA3 + 1) & 0x41)
                    break;
            }
        }

        if (i_2 == srcS - 1)
        {
            long double x87_r7_17 = g_bcab20 * a1;
            long double x87_r6_14 = g_a4ee94 * v_20;
            x87_r6_14 - x87_r7_17;
            valA3 = (x87_r6_14 < x87_r7_17 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_17 ? 1 : 0) << 0xe;

            if (*(&valA3 + 1) & 1)
                return valA3 | 0xffffffff;
        }
    }

    return i_2;
}
