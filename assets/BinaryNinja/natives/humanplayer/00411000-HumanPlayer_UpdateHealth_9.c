#include "HumanPlayer_UpdateHealth_9.h"
int32_t* HumanPlayer_UpdateHealth_9(int32_t* a1)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t* srcS = a1;
    int32_t ctxB = 0xffffffff;
    long double fpu7 = srcS[0x83];
    long double f0 = 0f;
    fpu7 - f0;
    int32_t* valA;
    valA = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_1 = srcS[0x5b];
        long double f2_1 = 0f;
        x87_r7_1 - f2_1;
        valA = (x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 0;
    }

    long double x87_r7_2 = srcS[0x84];
    long double f1 = 0f;
    x87_r7_2 - f1;
    valA = (x87_r7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1) ? 1 : 0) << 0xa
        | (x87_r7_2 == f1 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_3 = srcS[0x5c];
        long double f4_1 = 0f;
        x87_r7_3 - f4_1;
        valA = (x87_r7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 1;
    }

    long double x87_r7_4 = srcS[0x85];
    long double f3 = 0f;
    x87_r7_4 - f3;
    valA = (x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_5 = srcS[0x5d];
        long double f6_1 = 0f;
        x87_r7_5 - f6_1;
        valA = (x87_r7_5 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f6_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 2;
    }

    long double x87_r7_6 = srcS[0x86];
    long double f5 = 0f;
    x87_r7_6 - f5;
    valA = (x87_r7_6 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f5) ? 1 : 0) << 0xa
        | (x87_r7_6 == f5 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_7 = srcS[0x5e];
        long double f8_1 = 0f;
        x87_r7_7 - f8_1;
        valA = (x87_r7_7 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f8_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f8_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 3;
    }

    long double x87_r7_8 = srcS[0x87];
    long double f7 = 0f;
    x87_r7_8 - f7;
    valA = (x87_r7_8 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f7) ? 1 : 0) << 0xa
        | (x87_r7_8 == f7 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_9 = srcS[0x5f];
        long double f10_1 = 0f;
        x87_r7_9 - f10_1;
        valA = (x87_r7_9 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f10_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == f10_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 4;
    }

    long double x87_r7_10 = srcS[0x88];
    long double f9 = 0f;
    x87_r7_10 - f9;
    valA = (x87_r7_10 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f9) ? 1 : 0) << 0xa
        | (x87_r7_10 == f9 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_11 = srcS[0x60];
        long double f12_1 = 0f;
        x87_r7_11 - f12_1;
        valA = (x87_r7_11 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f12_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f12_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 5;
    }

    long double x87_r7_12 = srcS[0x89];
    long double f11 = 0f;
    x87_r7_12 - f11;
    valA = (x87_r7_12 < f11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f11) ? 1 : 0) << 0xa
        | (x87_r7_12 == f11 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_13 = srcS[0x61];
        long double f14_1 = 0f;
        x87_r7_13 - f14_1;
        valA = (x87_r7_13 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f14_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == f14_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 6;
    }

    long double x87_r7_14 = srcS[0x8a];
    long double f13 = 0f;
    x87_r7_14 - f13;
    valA = (x87_r7_14 < f13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f13) ? 1 : 0) << 0xa
        | (x87_r7_14 == f13 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        long double x87_r7_15 = srcS[0x62];
        long double f16_1 = 0f;
        x87_r7_15 - f16_1;
        valA = (x87_r7_15 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f16_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == f16_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x40)
            ctxB = 7;
    }

    long double x87_r7_16 = srcS[0x8b];
    long double f15 = 0f;
    x87_r7_16 - f15;
    valA = (x87_r7_16 < f15 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f15) ? 1 : 0) << 0xa
        | (x87_r7_16 == f15 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 0x40)
    {
    label_41118c:

        if (ctxB != 0xffffffff)
            goto label_41119b;
    }
    else
    {
        long double x87_r7_17 = srcS[0x63];
        long double f17_1 = 0f;
        x87_r7_17 - f17_1;
        valA = (x87_r7_17 < f17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f17_1) ? 1 : 0) << 0xa
            | (x87_r7_17 == f17_1 ? 1 : 0) << 0xe;

        if (!(*(&valA + 1) & 0x40))
            goto label_41118c;

        ctxB = 8;
    label_41119b:

        if (ctxB != srcS[0x354])
            srcS[0x355] = 0;

        int32_t dstD1 = ctxB * 9;
        a1 = nullptr;
        valA = *((dstD1 << 2) + &g_56e0a0);

        if (valA > 0)
        {
            while (true)
            {
                int32_t valA1 = srcS[0x355];
                int32_t objC2 = *(((valA1 + ctxB * 9) << 2) + &g_56e0a4);
                srcS[0x355] = valA1 + 1;

                if (valA1 + 1 >= *((dstD1 << 2) + &g_56e0a0))
                    srcS[0x355] = 0;

                valA = HumanPlayer_UpdateMotion_11(srcS, objC2);

                if (valA)
                {
                    srcS[0x79] = objC2;
                    break;
                }

                int32_t* valA4 = a1 + 1;
                a1 = valA4;

                if (valA4 >= *((dstD1 << 2) + &g_56e0a0))
                {
                    srcS[0x354] = ctxB;
                    return valA4;
                }
            }
        }

        srcS[0x354] = ctxB;
    }

    return valA;
}
