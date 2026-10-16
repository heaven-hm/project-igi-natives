#include "00508940-Physics_EvaluateAreaCriteria_7.h"
/* 0x00508940 Physics_EvaluateAreaCriteria_7 full linked: callers=1 callees=5 */
float* sub_508940(double* a1, float* a2, double* a3, float* a4, int32_t a5)

{
    float* result = sub_4f1030(a5);

    if (result)
    {
        int32_t ecx_1 = 0;
        ecx_1 = result[7];

        if (*((ecx_1 << 2) + &g_a994e0))
        {
            int32_t edx_2 = 0;
            int32_t var_10_1 = 0;
            edx_2 = result[7];
            double var_60;
            (*((edx_2 << 2) + &g_a994e0))(result, &var_60);
            *a1 = *a1 - *a3;
            a1[1] = a1[1] - a3[1];
            long double x87_r7_6 = a1[2] - a3[2];
            a1[2] = x87_r7_6;
            double var_b0 = *a4 * *a1 + a4[6] * x87_r7_6 + a4[3] * a1[1];
            double var_a8_1 = a4[7] * x87_r7_6 + a4[1] * *a1 + a4[4] * a1[1];
            double var_a0_1 = a4[8] * x87_r7_6 + a4[2] * *a1 + a4[5] * a1[1];
            memcpy(a1, &var_b0, 0x18);
            float var_3c;
            float var_38;
            float var_34;
            var_b0 = var_38 * a1[1] + var_3c * *a1 + var_34 * a1[2];
            float var_30;
            float var_2c;
            float var_28;
            double var_a8_2 = var_2c * a1[1] + var_30 * *a1 + var_28 * a1[2];
            float var_24;
            float var_20;
            float var_1c;
            double var_a0_2 = var_20 * a1[1] + var_24 * *a1 + var_1c * a1[2];
            long double x87_r7_20 = var_60;
            memcpy(a1, &var_b0, 0x18);
            *a1 = x87_r7_20 + *a1;
            double var_58;
            a1[1] = var_58 + a1[1];
            double var_50;
            a1[2] = var_50 + a1[2];
            long double x87_r7_26 = *a4;
            long double x87_r6_25 = a4[3];
            long double x87_r5_13 = a4[6];
            *(&var_a8_2 + 4) = a4[1];
            *(&var_a0_2 + 4) = a4[7];
            float eax_4 = a4[5];
            result = a2;
            var_a0_2 = a4[4];
            float ecx_4 = a4[2];
            float ecx_5 = a4[8];
            int32_t edx_4 = a4[9];
            float var_88 = x87_r5_13 * result[6] + x87_r6_25 * result[3] + x87_r7_26 * *result;
            float var_84_1 = x87_r7_26 * result[1] + x87_r5_13 * result[7] + x87_r6_25 * result[4];
            float var_80_1 = x87_r5_13 * result[8] + x87_r6_25 * result[5] + x87_r7_26 * result[2];
            float var_7c_1 =
                *(&var_a0_2 + 4) * result[6] + var_a0_2 * result[3] + *(&var_a8_2 + 4) * *result;
            float var_78_1 =
                *(&var_a8_2 + 4) * result[1] + *(&var_a0_2 + 4) * result[7] + var_a0_2 * result[4];
            int32_t var_64_1 = result[9] + edx_4 + 1;
            float var_74_1 =
                *(&var_a0_2 + 4) * result[8] + var_a0_2 * result[5] + *(&var_a8_2 + 4) * result[2];
            float var_70_1 = ecx_5 * result[6] + eax_4 * result[3] + ecx_4 * *result;
            float var_6c_1 = ecx_4 * result[1] + ecx_5 * result[7] + eax_4 * result[4];
            float var_68_1 = ecx_5 * result[8] + eax_4 * result[5] + ecx_4 * result[2];
            memcpy(result, &var_88, 0x28);
            var_88 = var_34 * result[6] + var_38 * result[3] + var_3c * *result;
            float var_84_2 = var_3c * result[1] + var_34 * result[7] + var_38 * result[4];
            float var_80_2 = var_34 * result[8] + var_38 * result[5] + var_3c * result[2];
            float var_7c_2 = var_28 * result[6] + var_2c * result[3] + var_30 * *result;
            int32_t var_18;
            int32_t var_64_2 = result[9] + var_18 + 1;
            float var_78_2 = var_30 * result[1] + var_28 * result[7] + var_2c * result[4];
            float var_74_2 = var_28 * result[8] + var_2c * result[5] + var_30 * result[2];
            float var_70_2 = var_1c * result[6] + var_20 * result[3] + var_24 * *result;
            float var_6c_2 = var_24 * result[1] + var_1c * result[7] + var_20 * result[4];
            float var_68_2 = var_1c * result[8] + var_20 * result[5] + var_24 * result[2];
            memcpy(result, &var_88, 0x28);
        }
    }

    return result;
}
