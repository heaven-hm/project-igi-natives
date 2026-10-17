// Original IGI.EXE function: DynObj_CreateMagicObject_16 (VA 0x004CFCB0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_CreateMagicObject_16.h"
int32_t DynObj_CreateMagicObject_16(float a1)

{
    int32_t* ctxB = *(a1 + 0x6c);

    if (!ctxB)
        return 0;

    void* tmpD = *ctxB;
    void* objC = *(*(tmpD + 0xc) + 0xc);
    long double x87_r4_2 = g_bcab00 * (*(a1 + 0x30) - g_bcab18 + *(objC + 0x38))
        + g_bcaafc * (*(a1 + 0x28) - g_bcab10 + *(objC + 0x34));
    long double x87_r4_3 = x87_r4_2 + g_bcaaf8 * (*(a1 + 0x20) - g_bcab08 + *(objC + 0x30));
    long double x87_r6_7 = *(a1 + 0x98);
    long double x87_r5_3 = *(a1 + 0x9c);
    x87_r5_3 - x87_r6_7;
    long double x87_r6_8;

    if (!(*(&((x87_r5_3 < x87_r6_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, x87_r6_7) ? 1 : 0) << 0xa
            | (x87_r5_3 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        x87_r6_8 = *(a1 + 0x9c);
    else
        x87_r6_8 = *(a1 + 0x98);

    long double x87_r5_4 = *(a1 + 0xa0);
    x87_r6_8 - x87_r5_4;
    long double x87_r6_11;

    if (*(&((x87_r6_8 < x87_r5_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r5_4) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r5_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r6_11 = *(a1 + 0xa0);
    else
    {
        long double x87_r6_10 = *(a1 + 0x98);
        long double x87_r5_6 = *(a1 + 0x9c);
        x87_r5_6 - x87_r6_10;

        if (!(*(&((x87_r5_6 < x87_r6_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_6, x87_r6_10) ? 1 : 0) << 0xa
                | (x87_r5_6 == x87_r6_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r6_11 = *(a1 + 0x9c);
        else
            x87_r6_11 = *(a1 + 0x98);
    }

    int32_t valA16 = ctxB[9];
    int32_t flagP = ctxB[0xf];
    long double x87_r6_12 = x87_r6_11 * *(objC + 0x3c);

    if (valA16)
    {
        int32_t i = 0;
        a1 = g_bcab20 * (x87_r4_3 - x87_r6_12) * g_548370;
        long double x87_r7_23 = a1;
        long double f1 = ctxB[0xe];
        x87_r7_23 - f1;
        valA16 = (x87_r7_23 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f1) ? 1 : 0) << 0xa
            | (x87_r7_23 == f1 ? 1 : 0) << 0xe;

        if (!(*(&valA16 + 1) & 0x41))
            return valA16 | 0xffffffff;

        long double x87_r7_24 = ctxB[0xa];
        long double f3 = 0f;
        x87_r7_24 - f3;

        if (*(&((x87_r7_24 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, f3) ? 1 : 0) << 0xa
            | (x87_r7_24 == f3 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            i = flagP - 1;

            if (i > 1)
                i = 1;
        }

        long double x87_r7_25 = a1;
        long double f4 = ctxB[i + 0xa];
        x87_r7_25 - f4;
        void* tmpD2 = &ctxB[i + 0xa];

        if (!(*(&((x87_r7_25 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_25, f4) ? 1 : 0) << 0xa
            | (x87_r7_25 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < flagP - 1)
            {
                long double x87_r7_26 = a1;
                long double f6_1 = *(tmpD2 + 4);
                x87_r7_26 - f6_1;
                tmpD2 += 4;
                i += 1;

                if (*(&((x87_r7_26 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_26, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    break;
            }
        }

        return i;
    }

    int32_t i_1 = 0;
    float v_28 = (g_a4ee98 - x87_r6_12) * (1f - g_54835c) + x87_r6_12;
    long double x87_r7_5 = (x87_r4_3 - v_28) * g_548370;
    a1 = x87_r7_5;
    long double f2 = 0f;
    x87_r7_5 - f2;

    if (!(*(&((x87_r7_5 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f2) ? 1 : 0) << 0xa
        | (x87_r7_5 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        int32_t dstD1 = 1;
        float v_20_1 = 1f / a1;
        float v_24_1 = 1f / (g_a4ee80 * v_28);
        float valA4 = v_24_1;
        float v_14 = valA4;

        if (flagP > 1)
        {
            int32_t* srcS1 = &ctxB[1];

            do
            {
                if (*(*(*(*srcS1 + 0xc) + 0xc) + 0x60) > *(objC + 0x60))
                {
                    int32_t v_3c_1 = *(tmpD + 8);
                    int32_t v_40_1 = dstD1;
                    Warning_Show("Detail level %d is more complex than level 0 for model %s.");
                }

                tmpD = *ctxB;
                dstD1 += 1;
                srcS1 = &srcS1[1];
                objC = *(*(tmpD + 0xc) + 0xc);
                valA4 = &v_14 - ctxB;
                long double x87_r7_12 = *(*(*(srcS1[-1] + 0xc) + 0xc) + 0x60) / *(objC + 0x60);
                *(valA4 + srcS1 - 4) = x87_r7_12 * x87_r7_12 * v_24_1;
            } while (dstD1 < flagP);

            i_1 = 0;
        }

        long double x87_r7_15 = g_bcab20 * v_14;
        long double f5_1 = v_20_1;
        x87_r7_15 - f5_1;
        valA4 = (x87_r7_15 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&valA4 + 1) & 0x41))
        {
            float* objC2 = &v_14;

            while (i_1 < flagP - 1)
            {
                long double x87_r7_17 = g_bcab20 * objC2[1];
                objC2 = &objC2[1];
                i_1 += 1;
                long double f7_1 = v_20_1;
                x87_r7_17 - f7_1;
                valA4 = (x87_r7_17 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == f7_1 ? 1 : 0) << 0xe;

                if (*(&valA4 + 1) & 0x41)
                    break;
            }
        }

        if (i_1 == flagP - 1)
        {
            long double x87_r7_19 = g_bcab20 * a1;
            long double x87_r6_18 = g_a4ee8c * v_28;
            x87_r6_18 - x87_r7_19;
            valA4 = (x87_r6_18 < x87_r7_19 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_18, x87_r7_19) ? 1 : 0) << 0xa
                | (x87_r6_18 == x87_r7_19 ? 1 : 0) << 0xe;

            if (*(&valA4 + 1) & 1)
                return valA4 | 0xffffffff;
        }
    }

    return i_1;
}
