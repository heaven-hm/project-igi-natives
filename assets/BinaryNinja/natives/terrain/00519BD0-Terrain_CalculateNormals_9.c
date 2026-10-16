#include "Terrain_CalculateNormals_9.h"
float Terrain_CalculateNormals_9(float a1) __location("valA")

{
    float srcS = a1;

    if (Sys_PopStack_11(srcS + 0x78))
    {
        *(srcS + 0x38) = 0x3f800000;
        *(srcS + 0x3c) = 0;
        *(srcS + 0x40) = 0;
        *(srcS + 0x44) = 0;
        *(srcS + 0x48) = 0x3f800000;
        *(srcS + 0x4c) = 0;
        *(srcS + 0x50) = 0;
        *(srcS + 0x54) = 0;
        *(srcS + 0x58) = 0x3f800000;
        *(srcS + 0x5c) = 0;
        return 0;
    }

    long double fpu7 = *(srcS + 0x78);
    long double fpu5 = *(srcS + 0x80);
    float tmpD = *(srcS + 0x58);
    float objC = *(srcS + 0x4c);
    float v_38 = fpu5;
    long double fpu4 = *(srcS + 0x88);
    float v_34 = fpu4;
    float valA1 = *(srcS + 0x40);
    float v_18 = fpu5 * tmpD - fpu4 * objC;
    float v_24 = v_18;
    float v_14 = -((fpu7 * tmpD - fpu4 * valA1));
    float v_20 = v_14;
    float v_10 = fpu7 * objC - fpu5 * valA1;
    long double x87_r3_10 = v_18;
    long double f1 = 0f;
    x87_r3_10 - f1;
    float v_1c = v_10;
    float v_30_1;
    float v_2c_1;
    float result;

    if (!(*(&((x87_r3_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_10, f1) ? 1 : 0) << 0xa
        | (x87_r3_10 == f1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
    {
    label_519ec1:
        v_30_1 = v_14 * fpu4 - v_10 * fpu5;
        v_2c_1 = -((v_18 * fpu4 - v_10 * fpu7));
        result = v_18 * fpu5 - v_14 * fpu7;
    }
    else
    {
        long double x87_r3_11 = v_14;
        long double f2_1 = 0f;
        x87_r3_11 - f2_1;

        if (!(*(&((x87_r3_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_11, f2_1) ? 1 : 0) << 0xa
                | (x87_r3_11 == f2_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
            goto label_519ec1;

        long double x87_r3_12 = v_10;
        long double f4_1 = 0f;
        x87_r3_12 - f4_1;

        if (!(*(&((x87_r3_12 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_12, f4_1) ? 1 : 0) << 0xa
                | (x87_r3_12 == f4_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
            goto label_519ec1;

        long double x87_r5_2 = v_38;
        long double x87_r4_2 = v_34;
        long double x87_r3_13 = 0f;
        long double x87_r2_6 = 0f;
        long double x87_r1_3 = x87_r2_6 + x87_r3_13 + fpu7;
        long double f6_1 = 0f;
        x87_r1_3 - f6_1;

        a1 = !(*(&((x87_r1_3 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_3, f6_1) ? 1 : 0) << 0xa
            | (x87_r1_3 == f6_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1) ? x87_r1_3 : -(x87_r1_3);

        long double f10_1 = 0f;
        x87_r1_3 - f10_1;
        float v_3c_1;

        v_3c_1 = !(*(&((x87_r1_3 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r1_3, f10_1) ? 1 : 0) << 0xa | (x87_r1_3 == f10_1 ? 1 : 0) << 0xe
            | 0x800) + 1) & 1) ? x87_r1_3 : -(x87_r1_3);

        long double f14_1 = 0f;
        x87_r1_3 - f14_1;

        if (*(&((x87_r1_3 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_3, f14_1) ? 1 : 0) << 0xa
                | (x87_r1_3 == f14_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_3 = -(x87_r1_3);

        long double x87_r0_5 = a1;
        long double f16_1 = v_3c_1;
        x87_r0_5 - f16_1;
        float result_1;

        if (!(*(&((x87_r0_5 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_5, f16_1) ? 1 : 0) << 0xa
            | (x87_r0_5 == f16_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
        {
            long double x87_r0_7 = v_3c_1;
            x87_r0_7 - x87_r1_3;
            long double x87_r2_20 = x87_r3_13 - x87_r2_6;
            bool c1_2 = /* bool c1_2 = unknown  {fsub fp0, fp1} */;

            if (!(*(&((x87_r0_7 < x87_r1_3 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                | (FCMP_UO(x87_r0_7, x87_r1_3) ? 1 : 0) << 0xa
                | (x87_r0_7 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000) + 1) & 1))
            {
                long double x87_r3_26 = 0f;
                v_30_1 = x87_r2_20;
                v_2c_1 = -((x87_r4_2 - x87_r3_26));
                result_1 = x87_r5_2 - x87_r3_26;
            }
            else
            {
                long double x87_r3_23 = 0f;
                v_30_1 = x87_r2_20;
                v_2c_1 = -((x87_r4_2 - x87_r3_23));
                result_1 = x87_r5_2 - x87_r3_23;
            }
        }
        else
        {
            long double x87_r0_6 = a1;
            x87_r0_6 - x87_r1_3;
            long double x87_r2_8 = x87_r3_13 - x87_r2_6;
            bool c1_1 = /* bool c1_1 = unknown  {fsub fp0, fp1} */;

            if (!(*(&((x87_r0_6 < x87_r1_3 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                | (FCMP_UO(x87_r0_6, x87_r1_3) ? 1 : 0) << 0xa
                | (x87_r0_6 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000) + 1) & 1))
            {
                long double x87_r3_19 = 0f;
                v_30_1 = x87_r2_8;
                v_2c_1 = -((x87_r4_2 - x87_r3_19));
                result_1 = x87_r5_2 - x87_r3_19;
            }
            else
            {
                long double x87_r3_16 = 0f;
                v_30_1 = x87_r2_8;
                v_2c_1 = -((x87_r4_2 - x87_r3_16));
                result_1 = x87_r5_2 - x87_r3_16;
            }
        }

        result = result_1;
        v_24 = x87_r5_2 * result - x87_r4_2 * v_2c_1;
        v_20 = -((fpu7 * result - x87_r4_2 * v_30_1));
        v_1c = fpu7 * v_2c_1 - x87_r5_2 * v_30_1;
    }

    long double x87_r6_7 = v_30_1;
    long double f3 = 0f;
    x87_r6_7 - f3;

    if (!(*(&((x87_r6_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, f3) ? 1 : 0) << 0xa
        | (x87_r6_7 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_519f28:
        long double x87_r6_10 = result;
        long double x87_r5_8 = v_2c_1;
        long double x87_r4_10 = v_30_1;
        long double x87_r6_12 =
            1.0 / sqrtl(x87_r4_10 * x87_r4_10 + x87_r5_8 * x87_r5_8 + x87_r6_10 * x87_r6_10);
        v_30_1 = v_30_1 * x87_r6_12;
        v_2c_1 = v_2c_1 * x87_r6_12;
        result = result * x87_r6_12;
    }
    else
    {
        long double x87_r6_8 = v_2c_1;
        long double f5_1 = 0f;
        x87_r6_8 - f5_1;

        if (!(*(&((x87_r6_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519f28;

        long double x87_r6_9 = result;
        long double f8_1 = 0f;
        x87_r6_9 - f8_1;

        if (!(*(&((x87_r6_9 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519f28;
    }

    long double x87_r6_14 = v_24;
    long double f7 = 0f;
    x87_r6_14 - f7;

    if (!(*(&((x87_r6_14 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, f7) ? 1 : 0) << 0xa
        | (x87_r6_14 == f7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_519fa5:
        long double x87_r6_17 = v_1c;
        long double x87_r5_16 = v_20;
        long double x87_r4_12 = v_24;
        long double x87_r6_19 =
            1.0 / sqrtl(x87_r4_12 * x87_r4_12 + x87_r5_16 * x87_r5_16 + x87_r6_17 * x87_r6_17);
        v_24 = v_24 * x87_r6_19;
        v_20 = v_20 * x87_r6_19;
        v_1c = v_1c * x87_r6_19;
    }
    else
    {
        long double x87_r6_15 = v_20;
        long double f9_1 = 0f;
        x87_r6_15 - f9_1;

        if (!(*(&((x87_r6_15 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_15, f9_1) ? 1 : 0) << 0xa
                | (x87_r6_15 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519fa5;

        long double x87_r6_16 = v_1c;
        long double f12_1 = 0f;
        x87_r6_16 - f12_1;

        if (!(*(&((x87_r6_16 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_16, f12_1) ? 1 : 0) << 0xa
                | (x87_r6_16 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519fa5;
    }

    long double f11 = 0f;
    fpu7 - f11;
    float v_14_6 = v_38;
    float v_10_6 = v_34;

    if (!(*(&((fpu7 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f11) ? 1 : 0) << 0xa
        | (fpu7 == f11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a02e:
        long double x87_r6_23 = v_10_6;
        long double x87_r5_24 = v_14_6;
        long double x87_r6_25 =
            1.0 / sqrtl(fpu7 * fpu7 + x87_r5_24 * x87_r5_24 + x87_r6_23 * x87_r6_23);
        fpu7 = fpu7 * x87_r6_25;
        v_14_6 = v_14_6 * x87_r6_25;
        v_10_6 = v_10_6 * x87_r6_25;
    }
    else
    {
        long double x87_r6_21 = v_14_6;
        long double f13_1 = 0f;
        x87_r6_21 - f13_1;

        if (!(*(&((x87_r6_21 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_21, f13_1) ? 1 : 0) << 0xa
                | (x87_r6_21 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a02e;

        long double x87_r6_22 = v_10_6;
        long double f15_1 = 0f;
        x87_r6_22 - f15_1;

        if (!(*(&((x87_r6_22 < f15_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_22, f15_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a02e;
    }

    *(srcS + 0x38) = v_24;
    *(srcS + 0x44) = v_20;
    *(srcS + 0x50) = v_1c;
    *(srcS + 0x48) = v_14_6;
    *(srcS + 0x54) = v_10_6;
    *(srcS + 0x40) = v_30_1;
    *(srcS + 0x3c) = fpu7;
    *(srcS + 0x4c) = v_2c_1;
    *(srcS + 0x58) = result;
    return result;
}
