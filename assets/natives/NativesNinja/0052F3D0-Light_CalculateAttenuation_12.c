#include "0052F3D0-Light_CalculateAttenuation_12.h"
/* 0x0052f3d0 Light_CalculateAttenuation_12 full linked: callers=2 callees=8 */
float* sub_52f3d0(float* a1, float* a2, double* a3, int32_t* a4)

{
    float* result = a1;

    if (result[0x12b0])
    {
        double var_90 = *a3 - *(result + 0x4870);
        double var_88_1 = a3[1] - *(result + 0x4878);
        double var_80_1 = a3[2] - *(result + 0x4880) + 819200.0;
        sub_4b3100(&var_90);
        float var_9c = var_90;
        float var_98_1 = var_88_1;
        float var_94_1 = var_80_1;
        float var_50[0xa];
        sub_4b4010(&var_50, a4);
        float var_28[0xa];
        sub_4b4010(&var_28, &var_9c);
        float var_cc;
        float var_c8;
        float var_c4;
        sub_4b3c50(&var_50, &var_cc, &var_c4, &var_c8);
        float var_ac;
        float var_a8;
        float var_a0;
        sub_4b3c50(&var_28, &var_ac, &var_a8, &var_a0);
        var_cc = var_cc - var_ac;
        float edx_1 = var_cc;
        var_c4 = var_c4 - var_a8;
        float ecx_2 = var_c4;
        var_c8 = var_c8 - var_a0;
        float var_78;
        sub_4b38e0(&var_78, edx_1, ecx_2, var_c8);
        float var_6c;
        float var_60;
        float var_d8_1 = var_78 * *a4 + var_60 * a4[2] + var_6c * a4[1];
        float var_c0_1 = var_d8_1;
        float var_74;
        float var_68;
        float var_5c;
        float var_d4_1 = var_74 * *a4 + var_5c * a4[2] + var_68 * a4[1];
        float var_70;
        float var_64;
        float var_58;
        float var_d0_1 = var_70 * *a4 + var_58 * a4[2] + var_64 * a4[1];
        long double x87_r7_29 = var_d8_1;
        long double temp0_1 = 0f;
        x87_r7_29 - temp0_1;
        float var_b8_1 = var_d0_1;
        long double x87_r7_35;

        if (!(*(&((x87_r7_29 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_29, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_29 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_52f58c:
            long double x87_r7_32 = var_d0_1;
            long double x87_r6_13 = var_d4_1;
            long double x87_r5_1 = var_d8_1;
            long double x87_r7_34 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_13 * x87_r6_13 + x87_r7_32 * x87_r7_32);
            var_c0_1 = var_d8_1 * x87_r7_34;
            x87_r7_35 = x87_r7_34 * var_d4_1;
        }
        else
        {
            long double x87_r7_30 = var_d4_1;
            long double temp1_1 = 0f;
            x87_r7_30 - temp1_1;

            if (!(*(&((x87_r7_30 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_30, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_30 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52f58c;

            long double x87_r7_31 = var_d0_1;
            long double temp2_1 = 0f;
            x87_r7_31 - temp2_1;

            if (!(*(&((x87_r7_31 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52f58c;

            x87_r7_35 = var_d4_1;
        }

        float var_b0_1 = x87_r7_35;
        float var_b4 = var_c0_1;
        float var_a4_1 = sqrtl(x87_r7_35 * x87_r7_35 + var_c0_1 * var_c0_1);
        sub_4b2900(&var_b4);
        result = a2;
        *result = fabs0f(sub_4b2760(var_b4)) * 81.1690216f;
        result[1] = var_a4_1 * 255f;
    }

    return result;
}
