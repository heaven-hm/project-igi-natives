// Original IGI.EXE function: Physics_EvaluateAreaCriteria_7 (VA 0x00508940; static CFG gate FAIL, CFG score 0.800).
#include "Physics_EvaluateAreaCriteria_7.h"
float* Physics_EvaluateAreaCriteria_7(double* a1, float* a2, double* a3, float* a4, int32_t a5)

{
    float* result = Script_ExecuteLevelScript_4(a5);

    if (result)
    {
        int32_t objC1 = 0;
        objC1 = result[7];

        if (*((objC1 << 2) + &g_a994e0))
        {
            int32_t tmpD2 = 0;
            int32_t v_10_1 = 0;
            tmpD2 = result[7];
            double v_60;
            (*((tmpD2 << 2) + &g_a994e0))(result, &v_60);
            *a1 = *a1 - *a3;
            a1[1] = a1[1] - a3[1];
            long double x87_r7_6 = a1[2] - a3[2];
            a1[2] = x87_r7_6;
            double v_b0 = *a4 * *a1 + a4[6] * x87_r7_6 + a4[3] * a1[1];
            double v_a8_1 = a4[7] * x87_r7_6 + a4[1] * *a1 + a4[4] * a1[1];
            double v_a0_1 = a4[8] * x87_r7_6 + a4[2] * *a1 + a4[5] * a1[1];
            memcpy(a1, &v_b0, 0x18);
            float v_3c;
            float v_38;
            float v_34;
            v_b0 = v_38 * a1[1] + v_3c * *a1 + v_34 * a1[2];
            float v_30;
            float v_2c;
            float v_28;
            double v_a8_2 = v_2c * a1[1] + v_30 * *a1 + v_28 * a1[2];
            float v_24;
            float v_20;
            float v_1c;
            double v_a0_2 = v_20 * a1[1] + v_24 * *a1 + v_1c * a1[2];
            long double x87_r7_20 = v_60;
            memcpy(a1, &v_b0, 0x18);
            *a1 = x87_r7_20 + *a1;
            double v_58;
            a1[1] = v_58 + a1[1];
            double v_50;
            a1[2] = v_50 + a1[2];
            long double x87_r7_26 = *a4;
            long double x87_r6_25 = a4[3];
            long double x87_r5_13 = a4[6];
            *(&v_a8_2 + 4) = a4[1];
            *(&v_a0_2 + 4) = a4[7];
            float valA4 = a4[5];
            result = a2;
            v_a0_2 = a4[4];
            float objC4 = a4[2];
            float objC5 = a4[8];
            int32_t tmpD4 = a4[9];
            float v_88 = x87_r5_13 * result[6] + x87_r6_25 * result[3] + x87_r7_26 * *result;
            float v_84_1 = x87_r7_26 * result[1] + x87_r5_13 * result[7] + x87_r6_25 * result[4];
            float v_80_1 = x87_r5_13 * result[8] + x87_r6_25 * result[5] + x87_r7_26 * result[2];
            float v_7c_1 =
                *(&v_a0_2 + 4) * result[6] + v_a0_2 * result[3] + *(&v_a8_2 + 4) * *result;
            float v_78_1 =
                *(&v_a8_2 + 4) * result[1] + *(&v_a0_2 + 4) * result[7] + v_a0_2 * result[4];
            int32_t v_64_1 = result[9] + tmpD4 + 1;
            float v_74_1 =
                *(&v_a0_2 + 4) * result[8] + v_a0_2 * result[5] + *(&v_a8_2 + 4) * result[2];
            float v_70_1 = objC5 * result[6] + valA4 * result[3] + objC4 * *result;
            float v_6c_1 = objC4 * result[1] + objC5 * result[7] + valA4 * result[4];
            float v_68_1 = objC5 * result[8] + valA4 * result[5] + objC4 * result[2];
            memcpy(result, &v_88, 0x28);
            v_88 = v_34 * result[6] + v_38 * result[3] + v_3c * *result;
            float v_84_2 = v_3c * result[1] + v_34 * result[7] + v_38 * result[4];
            float v_80_2 = v_34 * result[8] + v_38 * result[5] + v_3c * result[2];
            float v_7c_2 = v_28 * result[6] + v_2c * result[3] + v_30 * *result;
            int32_t v_18;
            int32_t v_64_2 = result[9] + v_18 + 1;
            float v_78_2 = v_30 * result[1] + v_28 * result[7] + v_2c * result[4];
            float v_74_2 = v_28 * result[8] + v_2c * result[5] + v_30 * result[2];
            float v_70_2 = v_1c * result[6] + v_20 * result[3] + v_24 * *result;
            float v_6c_2 = v_24 * result[1] + v_1c * result[7] + v_20 * result[4];
            float v_68_2 = v_1c * result[8] + v_20 * result[5] + v_24 * result[2];
            memcpy(result, &v_88, 0x28);
        }
    }

    return result;
}
