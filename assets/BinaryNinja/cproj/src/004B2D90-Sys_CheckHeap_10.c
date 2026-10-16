#include "gi_platform.h"
#include "004B2D90-Sys_CheckHeap_10.h"
float* Sys_CheckHeap_10(float* a1, float* a2, float* a3, float* a4, float* a5, int32_t* a6)

{
    char ctxB = 1;
    float v_c = *a6;
    long double fpu7 = v_c;
    long double f1 = 0.0f;
    fpu7 - f1;
    float v_8 = a6[1];

    if (1 & *(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1))
        v_c = -(v_c);

    long double x87_r7_3 = v_8;
    long double f2 = 0.0f;
    x87_r7_3 - f2;

    if (*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
            | (x87_r7_3 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        v_8 = -(v_8);

    long double x87_r7_6 = a6[2];
    long double f3 = 0.0f;
    x87_r7_6 - f3;

    if (*(&((x87_r7_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f3) ? 1 : 0) << 0xa
            | (x87_r7_6 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_6 = -(x87_r7_6);

    long double fpu6 = v_8;
    long double f4 = v_c;
    fpu6 - f4;
    long double x87_r6_1;

    if (!(*(&((fpu6 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f4) ? 1 : 0) << 0xa
        | (fpu6 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        x87_r6_1 = v_8;
        x87_r6_1 - x87_r7_6;
    }

    long double x87_r6_14;
    long double x87_r7_11;

    if (!(*(&((fpu6 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f4) ? 1 : 0) << 0xa
        | (fpu6 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41) && !(*(&(
        (x87_r6_1 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        long double x87_r7_10 = a5[2] * *a4 - *a5 * a4[2];
        long double f8_1 = 0.0f;
        x87_r7_10 - f8_1;

        if (*(&((x87_r7_10 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            ctxB = 0;

        long double x87_r6_6 = *a4 * a3[2] - *a3 * a4[2];
        x87_r7_11 = x87_r6_6 / x87_r6_6;
        long double f11_1 = -9.99999975e-06.0f;
        x87_r7_11 - f11_1;
        long double f14_1;

        if (!(*(&((x87_r7_11 < f11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_11, f11_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            f14_1 = 1.00001001.0f;
            x87_r7_11 - f14_1;
        }

        if (*(&((x87_r7_11 < f11_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&(
                (x87_r7_11 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f14_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            ctxB = 0;

        long double x87_r6_7 = *a4;
        long double f17_1 = 0.0f;
        x87_r6_7 - f17_1;
        long double x87_r6_8 = *a4;

        if (*(&((x87_r6_7 < f17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, f17_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == f17_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_8 = -(x87_r6_8);

        long double x87_r5_2 = a4[2];
        long double f20_1 = 0.0f;
        x87_r5_2 - f20_1;
        long double x87_r5_3 = a4[2];

        if (*(&((x87_r5_2 < f20_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_2, f20_1) ? 1 : 0) << 0xa
                | (x87_r5_2 == f20_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_3 = -(x87_r5_3);

        x87_r6_8 - x87_r5_3;

        if (*(&((x87_r6_8 < x87_r5_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r5_3) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_15 = a4[2];
            long double f23_1 = 0.0f;
            x87_r6_15 - f23_1;

            if (*(&((x87_r6_15 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, f23_1) ? 1 : 0) << 0xa
                    | (x87_r6_15 == f23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                ctxB = 0;

            x87_r6_14 = (a3[2] - x87_r7_11 * a5[2]) / a4[2];
        }
        else
            x87_r6_14 = (*a3 - x87_r7_11 * *a5) / *a4;

        goto label_4b2f8e;
    }

    long double f5_1 = v_c;
    x87_r7_6 - f5_1;

    if (*(&((x87_r7_6 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f5_1) ? 1 : 0) << 0xa
        | (x87_r7_6 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_17 = a5[2] * a4[1] - a4[2] * a5[1];
        long double f6_1 = 0.0f;
        x87_r7_17 - f6_1;

        if (*(&((x87_r7_17 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            ctxB = 0;

        long double x87_r6_39 = a3[2] * a4[1] - a3[1] * a4[2];
        x87_r7_11 = x87_r6_39 / x87_r6_39;
        long double f9_1 = -9.99999975e-06.0f;
        x87_r7_11 - f9_1;
        long double f12_1;

        if (!(*(&((x87_r7_11 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f9_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            f12_1 = 1.00001001.0f;
            x87_r7_11 - f12_1;
        }

        if (*(&((x87_r7_11 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&(
                (x87_r7_11 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f12_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            ctxB = 0;

        long double x87_r6_40 = a4[1];
        long double f15_1 = 0.0f;
        x87_r6_40 - f15_1;
        long double x87_r6_41 = a4[1];

        if (*(&((x87_r6_40 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_40, f15_1) ? 1 : 0) << 0xa
                | (x87_r6_40 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_41 = -(x87_r6_41);

        long double x87_r5_14 = a4[2];
        long double f18_1 = 0.0f;
        x87_r5_14 - f18_1;
        long double x87_r5_15 = a4[2];

        if (*(&((x87_r5_14 < f18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_14, f18_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == f18_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_15 = -(x87_r5_15);

        x87_r6_41 - x87_r5_15;

        if (*(&((x87_r6_41 < x87_r5_15 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_41, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r6_41 == x87_r5_15 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_47 = a4[2];
            long double f21_1 = 0.0f;
            x87_r6_47 - f21_1;

            if (*(&((x87_r6_47 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_47, f21_1) ? 1 : 0) << 0xa
                    | (x87_r6_47 == f21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                ctxB = 0;

            x87_r6_14 = (a3[2] - x87_r7_11 * a5[2]) / a4[2];
        }
        else
            x87_r6_14 = (a3[1] - x87_r7_11 * a5[1]) / a4[1];

        long double f24_1 = -9.99999975e-06.0f;
        x87_r6_14 - f24_1;

        if (*(&((x87_r6_14 < f24_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, f24_1) ? 1 : 0) << 0xa
                | (x87_r6_14 == f24_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            ctxB = 0;
        else
        {
            long double x87_r5_18 = x87_r6_14 + x87_r7_11;
            long double f26_1 = 1.00001001.0f;
            x87_r5_18 - f26_1;

            if (!(*(&((x87_r5_18 < f26_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_18, f26_1) ? 1 : 0) << 0xa
                    | (x87_r5_18 == f26_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                ctxB = 0;
        }
    }
    else
    {
        long double x87_r7_14 = *a4 * a5[1] - *a5 * a4[1];
        long double f7_1 = 0.0f;
        x87_r7_14 - f7_1;

        if (*(&((x87_r7_14 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            ctxB = 0;

        long double x87_r6_23 = *a4 * a3[1] - *a3 * a4[1];
        x87_r7_11 = x87_r6_23 / x87_r6_23;
        long double f10_1 = -9.99999975e-06.0f;
        x87_r7_11 - f10_1;
        long double f13_1;

        if (!(*(&((x87_r7_11 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_11, f10_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            f13_1 = 1.00001001.0f;
            x87_r7_11 - f13_1;
        }

        if (*(&((x87_r7_11 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&(
                (x87_r7_11 < f13_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f13_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            ctxB = 0;

        long double x87_r6_24 = *a4;
        long double f16_1 = 0.0f;
        x87_r6_24 - f16_1;
        long double x87_r6_25 = *a4;

        if (*(&((x87_r6_24 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_24, f16_1) ? 1 : 0) << 0xa
                | (x87_r6_24 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_25 = -(x87_r6_25);

        long double x87_r5_7 = a4[1];
        long double f19_1 = 0.0f;
        x87_r5_7 - f19_1;
        long double x87_r5_8 = a4[1];

        if (*(&((x87_r5_7 < f19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_7, f19_1) ? 1 : 0) << 0xa
                | (x87_r5_7 == f19_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_8 = -(x87_r5_8);

        x87_r6_25 - x87_r5_8;

        if (*(&((x87_r6_25 < x87_r5_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, x87_r5_8) ? 1 : 0) << 0xa
            | (x87_r6_25 == x87_r5_8 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_31 = a4[1];
            long double f22_1 = 0.0f;
            x87_r6_31 - f22_1;

            if (*(&((x87_r6_31 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_31, f22_1) ? 1 : 0) << 0xa
                    | (x87_r6_31 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                ctxB = 0;

            x87_r6_14 = (a3[1] - x87_r7_11 * a5[1]) / a4[1];
        }
        else
            x87_r6_14 = (*a3 - x87_r7_11 * *a5) / *a4;
    label_4b2f8e: ;
        long double f25_1 = -9.99999975e-06.0f;
        x87_r6_14 - f25_1;

        if (*(&((x87_r6_14 < f25_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, f25_1) ? 1 : 0) << 0xa
                | (x87_r6_14 == f25_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            ctxB = 0;
        else
        {
            long double x87_r5_11 = x87_r6_14 + x87_r7_11;
            long double f27_1 = 1.00001001.0f;
            x87_r5_11 - f27_1;

            if (!(*(&((x87_r5_11 < f27_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_11, f27_1) ? 1 : 0) << 0xa
                    | (x87_r5_11 == f27_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                ctxB = 0;
        }
    }

    if (a1)
        *a1 = x87_r6_14;

    float* result = a2;

    if (!result)
    {
        result = ctxB;
        return result;
    }

    *result = x87_r7_11;
    result = ctxB;
    return result;
}
