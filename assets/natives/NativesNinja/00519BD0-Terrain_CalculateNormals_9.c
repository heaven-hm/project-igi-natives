#include "00519BD0-Terrain_CalculateNormals_9.h"
/* 0x00519bd0 Terrain_CalculateNormals_9 full linked: callers=1 callees=1 */
float sub_519bd0(float a1) __location("eax")

{
    float esi = a1;

    if (sub_4b3320(esi + 0x78))
    {
        *(esi + 0x38) = 0x3f800000;
        *(esi + 0x3c) = 0;
        *(esi + 0x40) = 0;
        *(esi + 0x44) = 0;
        *(esi + 0x48) = 0x3f800000;
        *(esi + 0x4c) = 0;
        *(esi + 0x50) = 0;
        *(esi + 0x54) = 0;
        *(esi + 0x58) = 0x3f800000;
        *(esi + 0x5c) = 0;
        return 0;
    }

    long double x87_r7 = *(esi + 0x78);
    long double x87_r5 = *(esi + 0x80);
    float edx = *(esi + 0x58);
    float ecx = *(esi + 0x4c);
    float var_38 = x87_r5;
    long double x87_r4 = *(esi + 0x88);
    float var_34 = x87_r4;
    float eax_1 = *(esi + 0x40);
    float var_18 = x87_r5 * edx - x87_r4 * ecx;
    float var_24 = var_18;
    float var_14 = -((x87_r7 * edx - x87_r4 * eax_1));
    float var_20 = var_14;
    float var_10 = x87_r7 * ecx - x87_r5 * eax_1;
    long double x87_r3_10 = var_18;
    long double temp1 = 0f;
    x87_r3_10 - temp1;
    float var_1c = var_10;
    float var_30_1;
    float var_2c_1;
    float result;

    if (!(*(&((x87_r3_10 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_10, temp1) ? 1 : 0) << 0xa
        | (x87_r3_10 == temp1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
    {
    label_519ec1:
        var_30_1 = var_14 * x87_r4 - var_10 * x87_r5;
        var_2c_1 = -((var_18 * x87_r4 - var_10 * x87_r7));
        result = var_18 * x87_r5 - var_14 * x87_r7;
    }
    else
    {
        long double x87_r3_11 = var_14;
        long double temp2_1 = 0f;
        x87_r3_11 - temp2_1;

        if (!(*(&((x87_r3_11 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_11, temp2_1) ? 1 : 0) << 0xa
                | (x87_r3_11 == temp2_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
            goto label_519ec1;

        long double x87_r3_12 = var_10;
        long double temp4_1 = 0f;
        x87_r3_12 - temp4_1;

        if (!(*(&((x87_r3_12 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_12, temp4_1) ? 1 : 0) << 0xa
                | (x87_r3_12 == temp4_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
            goto label_519ec1;

        long double x87_r5_2 = var_38;
        long double x87_r4_2 = var_34;
        long double x87_r3_13 = 0f;
        long double x87_r2_6 = 0f;
        long double x87_r1_3 = x87_r2_6 + x87_r3_13 + x87_r7;
        long double temp6_1 = 0f;
        x87_r1_3 - temp6_1;

        a1 = !(*(&((x87_r1_3 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_3, temp6_1) ? 1 : 0) << 0xa
            | (x87_r1_3 == temp6_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1) ? x87_r1_3 : -(x87_r1_3);

        long double temp10_1 = 0f;
        x87_r1_3 - temp10_1;
        float var_3c_1;

        var_3c_1 = !(*(&((x87_r1_3 < temp10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r1_3, temp10_1) ? 1 : 0) << 0xa | (x87_r1_3 == temp10_1 ? 1 : 0) << 0xe
            | 0x800) + 1) & 1) ? x87_r1_3 : -(x87_r1_3);

        long double temp14_1 = 0f;
        x87_r1_3 - temp14_1;

        if (*(&((x87_r1_3 < temp14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_3, temp14_1) ? 1 : 0) << 0xa
                | (x87_r1_3 == temp14_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_3 = -(x87_r1_3);

        long double x87_r0_5 = a1;
        long double temp16_1 = var_3c_1;
        x87_r0_5 - temp16_1;
        float result_1;

        if (!(*(&((x87_r0_5 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_5, temp16_1) ? 1 : 0) << 0xa
            | (x87_r0_5 == temp16_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
        {
            long double x87_r0_7 = var_3c_1;
            x87_r0_7 - x87_r1_3;
            long double x87_r2_20 = x87_r3_13 - x87_r2_6;
            bool c1_2 = /* bool c1_2 = unknown  {fsub st0, st1} */;

            if (!(*(&((x87_r0_7 < x87_r1_3 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                | (FCMP_UO(x87_r0_7, x87_r1_3) ? 1 : 0) << 0xa
                | (x87_r0_7 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000) + 1) & 1))
            {
                long double x87_r3_26 = 0f;
                var_30_1 = x87_r2_20;
                var_2c_1 = -((x87_r4_2 - x87_r3_26));
                result_1 = x87_r5_2 - x87_r3_26;
            }
            else
            {
                long double x87_r3_23 = 0f;
                var_30_1 = x87_r2_20;
                var_2c_1 = -((x87_r4_2 - x87_r3_23));
                result_1 = x87_r5_2 - x87_r3_23;
            }
        }
        else
        {
            long double x87_r0_6 = a1;
            x87_r0_6 - x87_r1_3;
            long double x87_r2_8 = x87_r3_13 - x87_r2_6;
            bool c1_1 = /* bool c1_1 = unknown  {fsub st0, st1} */;

            if (!(*(&((x87_r0_6 < x87_r1_3 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                | (FCMP_UO(x87_r0_6, x87_r1_3) ? 1 : 0) << 0xa
                | (x87_r0_6 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000) + 1) & 1))
            {
                long double x87_r3_19 = 0f;
                var_30_1 = x87_r2_8;
                var_2c_1 = -((x87_r4_2 - x87_r3_19));
                result_1 = x87_r5_2 - x87_r3_19;
            }
            else
            {
                long double x87_r3_16 = 0f;
                var_30_1 = x87_r2_8;
                var_2c_1 = -((x87_r4_2 - x87_r3_16));
                result_1 = x87_r5_2 - x87_r3_16;
            }
        }

        result = result_1;
        var_24 = x87_r5_2 * result - x87_r4_2 * var_2c_1;
        var_20 = -((x87_r7 * result - x87_r4_2 * var_30_1));
        var_1c = x87_r7 * var_2c_1 - x87_r5_2 * var_30_1;
    }

    long double x87_r6_7 = var_30_1;
    long double temp3 = 0f;
    x87_r6_7 - temp3;

    if (!(*(&((x87_r6_7 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp3) ? 1 : 0) << 0xa
        | (x87_r6_7 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_519f28:
        long double x87_r6_10 = result;
        long double x87_r5_8 = var_2c_1;
        long double x87_r4_10 = var_30_1;
        long double x87_r6_12 =
            1.0 / sqrtl(x87_r4_10 * x87_r4_10 + x87_r5_8 * x87_r5_8 + x87_r6_10 * x87_r6_10);
        var_30_1 = var_30_1 * x87_r6_12;
        var_2c_1 = var_2c_1 * x87_r6_12;
        result = result * x87_r6_12;
    }
    else
    {
        long double x87_r6_8 = var_2c_1;
        long double temp5_1 = 0f;
        x87_r6_8 - temp5_1;

        if (!(*(&((x87_r6_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519f28;

        long double x87_r6_9 = result;
        long double temp8_1 = 0f;
        x87_r6_9 - temp8_1;

        if (!(*(&((x87_r6_9 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, temp8_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519f28;
    }

    long double x87_r6_14 = var_24;
    long double temp7 = 0f;
    x87_r6_14 - temp7;

    if (!(*(&((x87_r6_14 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, temp7) ? 1 : 0) << 0xa
        | (x87_r6_14 == temp7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_519fa5:
        long double x87_r6_17 = var_1c;
        long double x87_r5_16 = var_20;
        long double x87_r4_12 = var_24;
        long double x87_r6_19 =
            1.0 / sqrtl(x87_r4_12 * x87_r4_12 + x87_r5_16 * x87_r5_16 + x87_r6_17 * x87_r6_17);
        var_24 = var_24 * x87_r6_19;
        var_20 = var_20 * x87_r6_19;
        var_1c = var_1c * x87_r6_19;
    }
    else
    {
        long double x87_r6_15 = var_20;
        long double temp9_1 = 0f;
        x87_r6_15 - temp9_1;

        if (!(*(&((x87_r6_15 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_15, temp9_1) ? 1 : 0) << 0xa
                | (x87_r6_15 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519fa5;

        long double x87_r6_16 = var_1c;
        long double temp12_1 = 0f;
        x87_r6_16 - temp12_1;

        if (!(*(&((x87_r6_16 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_16, temp12_1) ? 1 : 0) << 0xa
                | (x87_r6_16 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519fa5;
    }

    long double temp11 = 0f;
    x87_r7 - temp11;
    float var_14_6 = var_38;
    float var_10_6 = var_34;

    if (!(*(&((x87_r7 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp11) ? 1 : 0) << 0xa
        | (x87_r7 == temp11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a02e:
        long double x87_r6_23 = var_10_6;
        long double x87_r5_24 = var_14_6;
        long double x87_r6_25 =
            1.0 / sqrtl(x87_r7 * x87_r7 + x87_r5_24 * x87_r5_24 + x87_r6_23 * x87_r6_23);
        x87_r7 = x87_r7 * x87_r6_25;
        var_14_6 = var_14_6 * x87_r6_25;
        var_10_6 = var_10_6 * x87_r6_25;
    }
    else
    {
        long double x87_r6_21 = var_14_6;
        long double temp13_1 = 0f;
        x87_r6_21 - temp13_1;

        if (!(*(&((x87_r6_21 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_21, temp13_1) ? 1 : 0) << 0xa
                | (x87_r6_21 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a02e;

        long double x87_r6_22 = var_10_6;
        long double temp15_1 = 0f;
        x87_r6_22 - temp15_1;

        if (!(*(&((x87_r6_22 < temp15_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_22, temp15_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == temp15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a02e;
    }

    *(esi + 0x38) = var_24;
    *(esi + 0x44) = var_20;
    *(esi + 0x50) = var_1c;
    *(esi + 0x48) = var_14_6;
    *(esi + 0x54) = var_10_6;
    *(esi + 0x40) = var_30_1;
    *(esi + 0x3c) = x87_r7;
    *(esi + 0x4c) = var_2c_1;
    *(esi + 0x58) = result;
    return result;
}
