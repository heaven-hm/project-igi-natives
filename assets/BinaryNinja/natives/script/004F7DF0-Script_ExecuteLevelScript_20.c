// Original IGI.EXE function: Script_ExecuteLevelScript_20 (VA 0x004F7DF0; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_20.h"
int32_t Script_ExecuteLevelScript_20(void* context, float param_2)

{
    double* source_val = param_2;
    float item_c = *source_val - *(context + 0x2c08);
    float item_8 = source_val[1] - *(context + 0x2c10);
    long double fpu_val_7_5 = source_val[2] - *(context + 0x2c18);
    float item_4 = fpu_val_7_5;
    long double fpu6 = item_8;
    long double fpu5 = item_c;
    param_2 = sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + fpu_val_7_5 * fpu_val_7_5);
    long double fpu_val_7_7 = param_2;
    long double f0 = *(context + 0x2c7c);
    fpu_val_7_7 - f0;

    if (!(*(&((fpu_val_7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_8 = item_c;
        long double f1_1 = 0.0f;
        fpu_val_7_8 - f1_1;

        if (!(*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4f7e92:
            long double fpu_val_7_12 = 1.0 / param_2;
            item_c = item_c * fpu_val_7_12;
            float item_8_1 = item_8 * fpu_val_7_12;
            float item_4_1 = item_4 * fpu_val_7_12;
        }
        else
        {
            long double fpu_val_7_9 = item_8;
            long double f2_1 = 0.0f;
            fpu_val_7_9 - f2_1;

            if (!(*(&((fpu_val_7_9 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_9, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4f7e92;

            long double fpu_val_7_10 = item_4;
            long double f4_1 = 0.0f;
            fpu_val_7_10 - f4_1;

            if (!(*(&((fpu_val_7_10 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_10, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4f7e92;
        }

        long double fpu_val_7_15 = fabs0f(Sys_PushStack_10(&item_c, context + 0x2c48));
        long double f3_1 = 1.0995574f;
        fpu_val_7_15 - f3_1;
        int16_t data_1 = (fpu_val_7_15 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_15, f3_1) ? 1 : 0) << 0xa | (fpu_val_7_15 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&data_1 + 1) & 0x41))
        {
            *(source_val + 0x1c) = 0;
            return data_1;
        }
    }

    int32_t data_3 = g_a76c88 + 1;
    g_a76c88 = data_3;
    *(source_val + 0x1c) = 1;
    return data_3;
}
