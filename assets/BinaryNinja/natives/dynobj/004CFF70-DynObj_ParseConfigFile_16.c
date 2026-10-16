#include "DynObj_ParseConfigFile_16.h"
int32_t DynObj_ParseConfigFile_16(float a1)

{
    int32_t* objC = *(a1 + 0x74);

    if (!objC)
        return 0;

    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    void* tmpD = *objC;
    float v_10 = *(a1 + 0x28) - g_bcab10;
    void* tmpD2 = *(*(tmpD + 0xc) + 0xc);
    int32_t srcS = objC[0xf];
    long double x87_r4_2 = g_bcab00 * (*(a1 + 0x30) - g_bcab18 + *(tmpD2 + 0x38))
        + g_bcaafc * (v_10 + *(tmpD2 + 0x34));
    long double x87_r4_3 = x87_r4_2 + g_bcaaf8 * (x87_r7_1 + *(tmpD2 + 0x30));
    long double x87_r6_7 = *(a1 + 0xa0);
    int32_t valA1 = objC[9];

    if (valA1)
    {
        int32_t i = 0;
        a1 = g_bcab20 * (x87_r4_3 - x87_r6_7);
        long double x87_r7_21 = a1;
        long double f1 = objC[0xe];
        x87_r7_21 - f1;
        valA1 = (x87_r7_21 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f1) ? 1 : 0) << 0xa
            | (x87_r7_21 == f1 ? 1 : 0) << 0xe;

        if (!(*(&valA1 + 1) & 0x41))
            return valA1 | 0xffffffff;

        long double x87_r7_22 = objC[0xa];
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
        long double f4 = objC[i + 0xa];
        x87_r7_23 - f4;
        void* objC2 = &objC[i + 0xa];

        if (!(*(&((x87_r7_23 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f4) ? 1 : 0) << 0xa
            | (x87_r7_23 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < srcS - 1)
            {
                long double x87_r7_24 = a1;
                long double f7_1 = *(objC2 + 4);
                x87_r7_24 - f7_1;
                objC2 += 4;
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
    long double x87_r7_4 = x87_r4_3 - v_20;
    a1 = x87_r7_4;
    long double f2 = 0f;
    x87_r7_4 - f2;

    if (!(*(&((x87_r7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2) ? 1 : 0) << 0xa
        | (x87_r7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        float v_18_1 = 1f / a1;
        float v_1c_1 = 1f / (g_a4ee84 * v_20);
        int32_t* valA3 = v_1c_1;
        int32_t* v_14 = valA3;

        if (srcS > 1)
        {
            long double x87_r7_10 = *(tmpD2 + 0x60);
            valA3 = &objC[1];
            float* tmpD3 = &v_10;
            int32_t i_3 = srcS - 1;
            int32_t i_1;

            do
            {
                void* ctxB1 = *valA3;
                valA3 = &valA3[1];
                tmpD3 = &tmpD3[1];
                i_1 = i_3;
                i_3 -= 1;
                long double x87_r6_10 = *(*(*(ctxB1 + 0xc) + 0xc) + 0x60) / x87_r7_10;
                tmpD3[-1] = x87_r6_10 * x87_r6_10 * v_1c_1;
            } while (i_1 != 1);
        }

        long double x87_r7_13 = g_bcab20 * v_14;
        long double f5_1 = v_18_1;
        x87_r7_13 - f5_1;
        valA3 = (x87_r7_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&valA3 + 1) & 0x41))
        {
            void** objC1 = &v_14;

            while (i_2 < srcS - 1)
            {
                long double x87_r7_15 = g_bcab20 * objC1[1];
                objC1 = &objC1[1];
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
            long double x87_r6_13 = g_a4ee90 * v_20;
            x87_r6_13 - x87_r7_17;
            valA3 = (x87_r6_13 < x87_r7_17 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_13, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r6_13 == x87_r7_17 ? 1 : 0) << 0xe;

            if (*(&valA3 + 1) & 1)
                return valA3 | 0xffffffff;
        }
    }

    return i_2;
}
