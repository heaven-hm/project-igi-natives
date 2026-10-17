// Original IGI.EXE function: Physics_EvaluateAreaCriteria_7 (VA 0x00508940; static CFG gate FAIL, CFG score 0.800).
#include "Physics_EvaluateAreaCriteria_7.h"
float* Physics_EvaluateAreaCriteria_7(double* context, float* param_2, double* param_3, float* param_4, int32_t param_5)

{
    float* result = Script_ExecuteLevelScript_4(param_5);

    if (result)
    {
        int32_t entity_1 = 0;
        entity_1 = result[7];

        if (*((entity_1 << 2) + &g_a994e0))
        {
            int32_t temp_2 = 0;
            int32_t item_10_1 = 0;
            temp_2 = result[7];
            double item_60;
            (*((temp_2 << 2) + &g_a994e0))(result, &item_60);
            *context = *context - *param_3;
            context[1] = context[1] - param_3[1];
            long double fpu_val_7_6 = context[2] - param_3[2];
            context[2] = fpu_val_7_6;
            double item_b0 = *param_4 * *context + param_4[6] * fpu_val_7_6 + param_4[3] * context[1];
            double item_a8_1 = param_4[7] * fpu_val_7_6 + param_4[1] * *context + param_4[4] * context[1];
            double item_a0_1 = param_4[8] * fpu_val_7_6 + param_4[2] * *context + param_4[5] * context[1];
            memcpy(context, &item_b0, 0x18);
            float item_3c;
            float item_38;
            float item_34;
            item_b0 = item_38 * context[1] + item_3c * *context + item_34 * context[2];
            float item_30;
            float item_2c;
            float item_28;
            double item_a8_2 = item_2c * context[1] + item_30 * *context + item_28 * context[2];
            float item_24;
            float item_20;
            float item_1c;
            double item_a0_2 = item_20 * context[1] + item_24 * *context + item_1c * context[2];
            long double fpu_val_7_20 = item_60;
            memcpy(context, &item_b0, 0x18);
            *context = fpu_val_7_20 + *context;
            double item_58;
            context[1] = item_58 + context[1];
            double item_50;
            context[2] = item_50 + context[2];
            long double fpu_val_7_26 = *param_4;
            long double fpu_val_6_25 = param_4[3];
            long double fpu_val_5_13 = param_4[6];
            *(&item_a8_2 + 4) = param_4[1];
            *(&item_a0_2 + 4) = param_4[7];
            float data_4 = param_4[5];
            result = param_2;
            item_a0_2 = param_4[4];
            float entity_4 = param_4[2];
            float entity_5 = param_4[8];
            int32_t temp_4 = param_4[9];
            float item_88 = fpu_val_5_13 * result[6] + fpu_val_6_25 * result[3] + fpu_val_7_26 * *result;
            float item_84_1 = fpu_val_7_26 * result[1] + fpu_val_5_13 * result[7] + fpu_val_6_25 * result[4];
            float item_80_1 = fpu_val_5_13 * result[8] + fpu_val_6_25 * result[5] + fpu_val_7_26 * result[2];
            float item_7c_1 =
                *(&item_a0_2 + 4) * result[6] + item_a0_2 * result[3] + *(&item_a8_2 + 4) * *result;
            float item_78_1 =
                *(&item_a8_2 + 4) * result[1] + *(&item_a0_2 + 4) * result[7] + item_a0_2 * result[4];
            int32_t item_64_1 = result[9] + temp_4 + 1;
            float item_74_1 =
                *(&item_a0_2 + 4) * result[8] + item_a0_2 * result[5] + *(&item_a8_2 + 4) * result[2];
            float item_70_1 = entity_5 * result[6] + data_4 * result[3] + entity_4 * *result;
            float item_6c_1 = entity_4 * result[1] + entity_5 * result[7] + data_4 * result[4];
            float item_68_1 = entity_5 * result[8] + data_4 * result[5] + entity_4 * result[2];
            memcpy(result, &item_88, 0x28);
            item_88 = item_34 * result[6] + item_38 * result[3] + item_3c * *result;
            float item_84_2 = item_3c * result[1] + item_34 * result[7] + item_38 * result[4];
            float item_80_2 = item_34 * result[8] + item_38 * result[5] + item_3c * result[2];
            float item_7c_2 = item_28 * result[6] + item_2c * result[3] + item_30 * *result;
            int32_t item_18;
            int32_t item_64_2 = result[9] + item_18 + 1;
            float item_78_2 = item_30 * result[1] + item_28 * result[7] + item_2c * result[4];
            float item_74_2 = item_28 * result[8] + item_2c * result[5] + item_30 * result[2];
            float item_70_2 = item_1c * result[6] + item_20 * result[3] + item_24 * *result;
            float item_6c_2 = item_24 * result[1] + item_1c * result[7] + item_20 * result[4];
            float item_68_2 = item_1c * result[8] + item_20 * result[5] + item_24 * result[2];
            memcpy(result, &item_88, 0x28);
        }
    }

    return result;
}
