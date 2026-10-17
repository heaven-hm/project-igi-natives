// Original IGI.EXE function: SoundSys_SetMasterVolume_16 (VA 0x004EC2C0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_16.h"
float SoundSys_SetMasterVolume_16(void* context, int32_t param_2, float param_3, void* param_4, float* param_5, float param_6) {
    float* data_val = param_6;
    float item_20 = param_5[7] * data_val[2] + param_5[1] * *data_val + param_5[4] * data_val[1];
    long double fpu_val_7_10 = param_5[8] * data_val[2] + param_5[2] * *data_val;
    long double fpu_val_6_11 = param_5[5] * data_val[1];
    float item_3c = param_5[6] * data_val[2] + param_5[3] * data_val[1] + *param_5 * *data_val;
    float result_1 = fpu_val_7_10 + fpu_val_6_11;
    float result;
    long double fp0;
    fp0 = Sys_DispatchOpcode_10(&item_3c);
    param_6 = fp0 * fp0 * param_3;
    long double fpu_val_7_14 = param_6;
    long double f0 = 0.0f;
    fpu_val_7_14 - f0;
    result = (fpu_val_7_14 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_14 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double fpu_val_7_15 = item_3c;
        long double f1_1 = 0.0f;
        fpu_val_7_15 - f1_1;
        result = result_1;
        float result_2 = result;
        float item_24_1 = item_3c;
        float item_20_1 = item_20;
        result = (fpu_val_7_15 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_15, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_15 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
        label_4ec3a9:
            long double fpu_val_7_18 = result_1;
            long double fpu_val_6_15 = item_20;
            long double fpu_val_5_1 = item_3c;
            long double fpu_val_7_20 =
                1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_15 * fpu_val_6_15 + fpu_val_7_18 * fpu_val_7_18);
            item_24_1 = item_3c * fpu_val_7_20;
            item_20_1 = item_20_1 * fpu_val_7_20;
            result_2 = result_2 * fpu_val_7_20;
        }
        else
        {
            long double fpu_val_7_16 = item_20;
            long double f2_1 = 0.0f;
            fpu_val_7_16 - f2_1;
            result = (fpu_val_7_16 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f2_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_4ec3a9;

            long double fpu_val_7_17 = result_1;
            long double f3_1 = 0.0f;
            fpu_val_7_17 - f3_1;
            result = (fpu_val_7_17 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_17, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_4ec3a9;
        }

        int32_t i_1 = param_2;

        if (i_1 > 0)
        {
            int32_t* source_1 = context + 0xc;
            int32_t i;

            do
            {
                long double fpu_val_7_22 = source_1[-3];
                long double f4_1 = 0.0f;
                fpu_val_7_22 - f4_1;
                result = (fpu_val_7_22 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_22, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_22 == f4_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    int32_t item_c_1 = source_1[1];
                    int32_t item_8_1 = source_1[2];
                    int32_t item_4_1 = source_1[3];
                    float temp_4 = *source_1;
                    long double fpu_val_7_28 = (item_20_1 * source_1[-1] + result_2 * *source_1
                        + item_24_1 * source_1[-2]) * source_1[-3] * param_6;
                    long double fpu_val_6_30 = source_1[-1] * fpu_val_7_28;
                    float item_18 = source_1[-2] * fpu_val_7_28;
                    float item_14_1 = fpu_val_6_30;
                    float item_10_1 = temp_4 * fpu_val_7_28;
                    result = ForceAccumulator_Add(param_4, &item_18);
                }

                source_1 = &source_1[7];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}
