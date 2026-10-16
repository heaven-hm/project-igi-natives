#include "gi_platform.h"
#include "0049FEB0-Display_RestoreDevice_20.h"
int32_t* Display_RestoreDevice_20(float a1)

{
    int32_t* flagP = a1;
    char v_19 = 1;
    float valA = flagP[1];
    float* srcS = *flagP;
    float v_14 = -(valA);
    long double x87_r7_2 = srcS[2];
    long double f0 = v_14;
    x87_r7_2 - f0;

    if (!(*(&((x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        v_19 = 0;

    float objC = g_bcaddc;
    float tmpD = g_bcadcc;
    long double x87_r7_4 = valA + srcS[2];
    long double f1 = objC;
    x87_r7_4 - f1;

    if (!(*(&((x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
        | (x87_r7_4 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = srcS[2] - valA;
        long double f2_1 = tmpD;
        x87_r7_6 - f2_1;

        if (*(&((x87_r7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            char v_1d = 1;
            long double x87_r7_10 = (*srcS - g_b46ce4 * srcS[2]) * g_b817a4;
            long double x87_r6_3 = (*srcS - g_b46d1c * srcS[2]) * g_b46d20;
            a1 = x87_r6_3;
            float v_10 = (srcS[1] - g_b816fc * srcS[2]) * g_b46d18;
            float v_c = (srcS[1] - g_b8179c * srcS[2]) * g_b46ce8;
            long double f3 = v_14;
            x87_r7_10 - f3;

            if (!(*(&((x87_r7_10 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f3) ? 1 : 0) << 0xa
                    | (x87_r7_10 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                v_1d = 0;

            long double f4 = valA;
            x87_r6_3 - f4;
            char v_1c = 1;

            if (*(&((x87_r6_3 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f4) ? 1 : 0) << 0xa
                    | (x87_r6_3 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                v_1c = 0;

            long double x87_r6_4 = v_10;
            long double f5 = v_14;
            x87_r6_4 - f5;
            char v_1b = 1;

            if (!(*(&((x87_r6_4 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f5) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                v_1b = 0;

            long double x87_r6_5 = v_c;
            long double f6 = valA;
            x87_r6_5 - f6;
            char v_1a = 1;
            int16_t valA1 = (x87_r6_5 < f6 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_5, f6) ? 1 : 0) << 0xa | (x87_r6_5 == f6 ? 1 : 0) << 0xe
                | 0x3800;

            if (*(&valA1 + 1) & 0x41)
                v_1a = 0;

            int32_t* dstD = flagP[2];

            if (dstD)
            {
                long double f7_1 = valA;
                x87_r7_10 - f7_1;
                char ctxB1;

                ctxB1 = *(&((x87_r7_10 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_11 = a1;
                long double f8_1 = v_14;
                x87_r7_11 - f8_1;
                a1 = 1;

                if (!(*(&((x87_r7_11 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 1))
                    a1 = 0;

                long double x87_r7_12 = v_10;
                long double f9_1 = valA;
                x87_r7_12 - f9_1;
                char tmpD1;

                tmpD1 = *(&((x87_r7_12 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_13 = v_c;
                long double f10_1 = v_14;
                x87_r7_13 - f10_1;
                char objC1;

                objC1 = !(*(&((x87_r7_13 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, f10_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == f10_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_15 = valA + 409.600006.0f;
                long double f11_1 = srcS[2];
                x87_r7_15 - f11_1;
                valA1 = (x87_r7_15 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f11_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f11_1 ? 1 : 0) << 0xe;

                if (!(*(&valA1 + 1) & 1))
                    valA1 = 0;
                else
                    valA1 = 1;

                int32_t valA2;

                valA2 = !ctxB1 || !a1 || !tmpD1 || !objC1 || !valA1 ? 0 : 1;

                *dstD = valA2;
                long double x87_r7_17 = srcS[2] - valA;
                long double f12_1 = objC;
                x87_r7_17 - f12_1;
                long double x87_r7_19;
                long double f13_1;

                if (!(*(&((x87_r7_17 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, f12_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    x87_r7_19 = valA + srcS[2];
                    f13_1 = tmpD;
                    x87_r7_19 - f13_1;
                }

                if (*(&((x87_r7_17 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, f12_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41 || !(*(&(
                        (x87_r7_19 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_19, f13_1) ? 1 : 0) << 0xa
                        | (x87_r7_19 == f13_1 ? 1 : 0) << 0xe) + 1) & 1))
                    *flagP[2] = 0;
                else
                {
                    int32_t* valA4 = flagP[2];
                    *valA4 &= 1;
                }
            }

            valA1 = v_1d;

            if (!valA1)
            {
                valA1 = v_1c;

                if (!valA1)
                {
                    valA1 = v_1b;

                    if (!valA1)
                    {
                        valA1 = v_1a;

                        if (!valA1)
                        {
                            valA1 = v_19;

                            if (!valA1)
                            {
                                flagP[3] = 0;
                                return 0;
                            }
                        }
                    }
                }
            }

            flagP[3] = 1;
            return 1;
        }
    }

    int32_t* result = flagP[2];

    if (result)
        *result = 0;

    flagP[3] = 1;
    return result;
}
