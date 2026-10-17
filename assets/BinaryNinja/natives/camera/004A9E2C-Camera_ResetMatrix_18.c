// IGI native provenance: Camera_ResetMatrix_18 - 0x004A9E2C - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9E2C-Camera_ResetMatrix_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_18.h"
int32_t Camera_ResetMatrix_18(double context, int32_t param_2, int32_t param_3, double* param_4)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    long double fpu7 = context;
    long double f0 = 0.0;
    fpu7 - f0;
    long double fpu_val_7_1 = context;
    int32_t result = 0;

    if (TEST_BITB(
            *(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
                | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1),
            0))
        fpu_val_7_1 = -(fpu_val_7_1);

    item_c = fpu_val_7_1;

    if (param_3 == 0x7ff00000)
    {
        if (param_2)
            goto label_4a9eb7;

        long double fpu_val_7_2 = item_c;
        long double f1_1 = 1.0;
        fpu_val_7_2 - f1_1;
        int16_t data_2 = (fpu_val_7_2 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe;

        if (!TEST_BITB(*(&data_2 + 1), 6) && !TEST_BITB(*(&data_2 + 1), 0))
            *param_4 = g_544368;
        else
        {
            long double fpu_val_7_3 = item_c;
            long double f3_1 = 1.0;
            fpu_val_7_3 - f3_1;

            if (TEST_BITB(
                    *(&((fpu_val_7_3 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_3, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_3 == f3_1 ? 1 : 0) << 0xe) + 1),
                    0))
                *param_4 = 0;
            else
            {
                result = 1;
                *param_4 = g_544370;
            }
        }
    }
    else if (param_3 != 0xfff00000 || param_2)
    {
    label_4a9eb7:

        if (*(&context + 4) != 0x7ff00000)
        {
            if (*(&context + 4) == 0xfff00000 && !context)
            {
                int32_t item_14_1 = 0xfff00000;
                int32_t item_18_1 = 0xfff00000;
                item_18_1 = param_2;
                int32_t data_6 = Camera_UpdateTransform_19(0x7ff00000, 0, 0xfff00000, item_18_1);
                long double fpu_val_7_10 = param_2;
                long double f6_1 = 0.0;
                fpu_val_7_10 - f6_1;
                int16_t data_7 = (fpu_val_7_10 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_10, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f6_1 ? 1 : 0) << 0xe;

                if (TEST_BITB(*(&data_7 + 1), 6) || TEST_BITB(*(&data_7 + 1), 0))
                {
                    long double fpu_val_7_13 = param_2;
                    long double f8_1 = 0.0;
                    fpu_val_7_13 - f8_1;

                    if (!TEST_BITB(
                            *(&((fpu_val_7_13 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_13, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_13 == f8_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        *param_4 = 1;
                    else
                    {
                        long double fpu_val_7_14;

                        if (data_6 != 1)
                            fpu_val_7_14 = 0;
                        else
                            fpu_val_7_14 = g_544388;

                        param_2 = fpu_val_7_14;
                        *param_4 = param_2;
                    }
                }
                else
                {
                    long double fpu_val_7_11 = g_544368;

                    if (data_6 == 1)
                        fpu_val_7_11 = -(fpu_val_7_11);

                    param_2 = fpu_val_7_11;
                    *param_4 = param_2;
                }
            }
        }
        else if (!context)
        {
            long double fpu_val_7_7 = param_2;
            long double f4_1 = 0.0;
            fpu_val_7_7 - f4_1;
            int16_t data_5 = (fpu_val_7_7 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_7, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f4_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&data_5 + 1), 6) || TEST_BITB(*(&data_5 + 1), 0))
            {
                long double fpu_val_7_8 = param_2;
                long double f7_1 = 0.0;
                fpu_val_7_8 - f7_1;

                if (!TEST_BITB(
                        *(&((fpu_val_7_8 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_8, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_8 == f7_1 ? 1 : 0) << 0xe) + 1),
                        0))
                    *param_4 = 1;
                else
                    *param_4 = 0;
            }
            else
                *param_4 = g_544368;
        }
    }
    else
    {
        long double fpu_val_7_5 = item_c;
        long double f2_1 = 1.0;
        fpu_val_7_5 - f2_1;
        int16_t data_4 = (fpu_val_7_5 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_5, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_5 == f2_1 ? 1 : 0) << 0xe;

        if (!TEST_BITB(*(&data_4 + 1), 6) && !TEST_BITB(*(&data_4 + 1), 0))
            *param_4 = 0;
        else
        {
            long double fpu_val_7_6 = item_c;
            long double f5_1 = 1.0;
            fpu_val_7_6 - f5_1;

            if (!TEST_BITB(
                *(&((fpu_val_7_6 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f5_1 ? 1 : 0) << 0xe) + 1),
                0))
            {
                result = 1;
                *param_4 = g_544370;
            }
            else
                *param_4 = g_544368;
        }
    }

    return result;
}
