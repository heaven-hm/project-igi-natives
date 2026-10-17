// Original IGI.EXE function: Script_ExecuteLevelScript_19 (VA 0x004F6D70; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_19.h"
int32_t Script_ExecuteLevelScript_19(long double context , float param_2)

{
    float source_val = param_2;
    long double fpu_val_7_1 = *(source_val + 0x2ca4) * 30.0f;
    long double f1 = 1.0f;
    fpu_val_7_1 - f1;

    param_2 = *(&((fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 1.0f : fpu_val_7_1;

    long double fpu_val_7_3 = *(source_val + 0x2c5c);
    long double fpu6 = *(source_val + 0x2c58);
    long double fpu5 = *(source_val + 0x2c54);
    long double fpu_val_7_6 =
        (16384.0f - sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + fpu_val_7_3 * fpu_val_7_3)) * 0.000244140625f;
    long double f2 = 0.0f;
    fpu_val_7_6 - f2;

    if (*(&((fpu_val_7_6 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        fpu_val_7_6 = 0.0f;

    int32_t data_1 = Script_CallNativeHandler_19(source_val);
    int32_t data_2 = -(data_1);
    *(source_val + 0x2cac) = data_2 - data_2 + 1;
    int32_t result = Script_SpawnNewTask_7(source_val + 0x2cb8, source_val);
    long double f4 = 0.0;
    context - f4;
    result = (context < f4 ? 1 : 0) << 8 | (FCMP_UO(context, f4) ? 1 : 0) << 0xa
        | (context == f4 ? 1 : 0) << 0xe | 0x800;
    long double fpu_val_0_2;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(source_val + 0x2cac);

        if (!result)
            goto label_4f6e4f;

        long double fpu0 = *(source_val + 0x2d08);
        long double f6_1 = param_2;
        fpu0 - f6_1;
        result = (fpu0 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f6_1) ? 1 : 0) << 0xa
            | (fpu0 == f6_1 ? 1 : 0) << 0xe | 0x800;

        if (!(*(&result + 1) & 1))
            goto label_4f6e78;

        fpu_val_0_2 = *(source_val + 0x2d08) + 1.0f;
        goto label_4f6e72;
    }

label_4f6e4f:
    long double fpu_val_0_3 = *(source_val + 0x2d08);
    long double f5_1 = 0.0f;
    fpu_val_0_3 - f5_1;
    result = (fpu_val_0_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_3, f5_1) ? 1 : 0) << 0xa
        | (fpu_val_0_3 == f5_1 ? 1 : 0) << 0xe | 0x800;

    if (!(*(&result + 1) & 0x41))
    {
        fpu_val_0_2 = *(source_val + 0x2d08) - 1.0f;
    label_4f6e72:
        *(source_val + 0x2d08) = fpu_val_0_2;
    label_4f6e78:
        float entity_1 = *(source_val + 0x2c70);
        long double fpu_val_0_5 = *(source_val + 0x2c6c);
        long double fpu_val_7_10 = entity_1;
        long double fpu_val_7_12 = 1.0 / sqrtl(fpu_val_0_5 * fpu_val_0_5 + fpu_val_7_10 * fpu_val_7_10 + 1.0);
        float item_18 = fpu_val_0_5 * fpu_val_7_12;
        float item_14_2 = entity_1 * fpu_val_7_12;
        float item_10_1 = fpu_val_7_12 * -1.0;
        long double fpu_val_0_12 =
            *(source_val + 0x2d08) / param_2 * *(source_val + 0x2c9c) * *(source_val + 0x2c88) + *(source_val + 0x2c84);
        *(source_val + 0x2c84) = fpu_val_0_12;
        long double f7_1 = 1.0f;
        fpu_val_0_12 - f7_1;
        result = (fpu_val_0_12 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_12, f7_1) ? 1 : 0) << 0xa
            | (fpu_val_0_12 == f7_1 ? 1 : 0) << 0xe | 0x800;

        while (!(*(&result + 1) & 1))
        {
            param_2 = 0.5f - Sys_AllocateMemory_14(0xa76c90);
            long double fpu_val_0_16 = 0.5f - Sys_AllocateMemory_14(0xa76c90);
            int32_t temp_1 = *(source_val + 0x2c94);
            float data_6 = *(source_val + 0x2c90);
            float entity_2 = *(source_val + 0x2c8c);
            float item_c = param_2 * *(source_val + 0x2c7c);
            float item_8_1 = fpu_val_0_16 * *(source_val + 0x2c7c);
            float item_4_1 = *(source_val + 0x2c7c) * 0.5f;
            result = Script_ParseEnumReal32_19(source_val, &item_c, &item_18, entity_2, data_6, temp_1);
            long double fpu_val_0_21 = *(source_val + 0x2c84) - 1.0f;
            *(source_val + 0x2c84) = fpu_val_0_21;
            long double f8_1 = 1.0f;
            fpu_val_0_21 - f8_1;
            result = (fpu_val_0_21 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_0_21, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_0_21 == f8_1 ? 1 : 0) << 0xe | 0x800;
        }

        float* entity_3 = source_val + 0x80;
        int32_t i_1 = 7;
        int32_t i;

        do
        {
            int32_t j_1 = 7;
            int32_t j;

            do
            {
                int32_t k_1 = 7;
                int32_t k;

                do
                {
                    long double fpu_val_0_22 = *entity_3;
                    long double f9_1 = *(source_val + 0x2ca0);
                    fpu_val_0_22 - f9_1;
                    result = (fpu_val_0_22 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_0_22, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_0_22 == f9_1 ? 1 : 0) << 0xe | 0x800;

                    if (*(&result + 1) & 1)
                        *entity_3 = *(source_val + 0x2ca0) / (fpu_val_7_6 + fpu_val_7_6 + 1.0f) + *entity_3;

                    entity_3 = &entity_3[8];
                    k = k_1;
                    k_1 -= 1;
                } while (k != 1);
                j = j_1;
                j_1 -= 1;
            } while (j != 1);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
