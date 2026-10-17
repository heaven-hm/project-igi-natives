// IGI native provenance: Physics_InterpolateWaypoint_7 - 0x00508620 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00508620-Physics_InterpolateWaypoint_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_InterpolateWaypoint_7.h"
float* Physics_InterpolateWaypoint_7(double* context, float* param_2, int32_t param_3)

{
    float* result = Script_ExecuteLevelScript_4(param_3);

    if (result)
    {
        int32_t entity_1 = 0;
        entity_1 = result[7];

        if (*((entity_1 << 2) + &g_a994e0))
        {
            int32_t temp_2 = 0;
            int32_t item_8_1 = 0;
            temp_2 = result[7];
            double item_58;
            (*((temp_2 << 2) + &g_a994e0))(result, &item_58);
            long double fpu_val_7_2 = item_58 - *context;
            double item_50;
            double item_68_1 = item_50 - context[1];
            float item_90_1 = item_68_1;
            double item_48;
            float item_8c_1 = item_48 - context[2];
            long double f1_1 = 0.0f;
            fpu_val_7_2 - f1_1;

            if (!(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
            label_5086ff:
                long double fpu_val_6_11 = item_8c_1;
                long double fpu_val_5_1 = item_90_1;
                long double fpu_val_6_13 =
                    1.0 / sqrtl(fpu_val_7_2 * fpu_val_7_2 + fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_11 * fpu_val_6_11);
                fpu_val_7_2 = fpu_val_7_2 * fpu_val_6_13;
                item_90_1 = item_90_1 * fpu_val_6_13;
                item_8c_1 = item_8c_1 * fpu_val_6_13;
            }
            else
            {
                long double fpu_val_6_7 = item_90_1;
                long double f2_1 = 0.0f;
                fpu_val_6_7 - f2_1;
                long double fpu_val_6_8;
                long double f5_1;

                if (*(&((fpu_val_6_7 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_7, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_7 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                {
                    fpu_val_6_8 = item_8c_1;
                    f5_1 = 0.0f;
                    fpu_val_6_8 - f5_1;
                }

                if (!(*(&((fpu_val_6_7 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_7, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_7 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                    (fpu_val_6_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_8 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                    long double fpu_val_6_9 = item_90_1;
                    long double f4_1 = 0.0f;
                    fpu_val_6_9 - f4_1;

                    if (!(*(&((fpu_val_6_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_9, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_5086ff;

                    long double fpu_val_6_10 = item_8c_1;
                    long double f7_1 = 0.0f;
                    fpu_val_6_10 - f7_1;

                    if (!(*(&((fpu_val_6_10 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_10, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_10 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_5086ff;
                }
                else
                    fpu_val_7_2 = 1.0f;
            }

            long double fpu_val_6_18 = 0.0f;
            item_68_1 = 0;
            float item_a0_1 = item_90_1 - fpu_val_6_18;
            float item_70_1 = item_a0_1;
            float item_9c_1 = -((fpu_val_7_2 - fpu_val_6_18));
            float item_6c_1 = item_9c_1;
            float item_7c_1 = item_9c_1 * item_8c_1 - 0.0f * item_90_1;
            float item_88_1 = item_7c_1;
            float item_78_1 = -((item_a0_1 * item_8c_1 - 0.0f * fpu_val_7_2));
            float item_84_1 = item_78_1;
            float item_74_1 = item_a0_1 * item_90_1 - item_9c_1 * fpu_val_7_2;
            long double fpu_val_6_30 = item_a0_1;
            long double f3_1 = 0.0f;
            fpu_val_6_30 - f3_1;

            if (!(*(&((fpu_val_6_30 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_30, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_6_30 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
            label_50880a:
                long double fpu_val_6_33 = item_a0_1;
                long double fpu_val_5_18 = 0.0f;
                long double fpu_val_4_3 = item_9c_1;
                long double fpu_val_6_35 = 1.0
                    / sqrtl(fpu_val_4_3 * fpu_val_4_3 + fpu_val_5_18 * fpu_val_5_18 + fpu_val_6_33 * fpu_val_6_33);
                item_70_1 = item_a0_1 * fpu_val_6_35;
                item_6c_1 = item_6c_1 * fpu_val_6_35;
                item_68_1 = 0.0f * fpu_val_6_35;
            }
            else
            {
                long double fpu_val_6_31 = item_9c_1;
                long double f6_1 = 0.0f;
                fpu_val_6_31 - f6_1;

                if (!(*(&((fpu_val_6_31 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_31, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_31 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_50880a;

                long double fpu_val_6_32 = 0.0f;
                long double f9_1 = 0.0f;
                fpu_val_6_32 - f9_1;

                if (!(*(&((fpu_val_6_32 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_32, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_32 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_50880a;
            }

            long double fpu_val_6_37 = item_7c_1;
            long double f8_1 = 0.0f;
            fpu_val_6_37 - f8_1;
            long double fpu_val_6_43;

            if (!(*(&((fpu_val_6_37 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_37, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_6_37 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
            label_508887:
                long double fpu_val_6_40 = item_74_1;
                long double fpu_val_5_26 = item_78_1;
                long double fpu_val_4_5 = item_7c_1;
                long double fpu_val_6_42 = 1.0
                    / sqrtl(fpu_val_4_5 * fpu_val_4_5 + fpu_val_5_26 * fpu_val_5_26 + fpu_val_6_40 * fpu_val_6_40);
                item_88_1 = item_7c_1 * fpu_val_6_42;
                item_84_1 = item_84_1 * fpu_val_6_42;
                fpu_val_6_43 = fpu_val_6_42 * item_74_1;
            }
            else
            {
                long double fpu_val_6_38 = item_78_1;
                long double f10_1 = 0.0f;
                fpu_val_6_38 - f10_1;

                if (!(*(&((fpu_val_6_38 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_38, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_38 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_508887;

                long double fpu_val_6_39 = item_74_1;
                long double f11_1 = 0.0f;
                fpu_val_6_39 - f11_1;

                if (!(*(&((fpu_val_6_39 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_39, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_39 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_508887;

                fpu_val_6_43 = item_74_1;
            }

            result = param_2;
            result[5] = item_90_1;
            result[8] = item_8c_1;
            *result = item_70_1;
            result[3] = item_6c_1;
            result[6] = item_68_1;
            result[1] = item_88_1 * -1.0f;
            result[4] = item_84_1 * -1.0f;
            result[2] = fpu_val_7_2;
            result[7] = fpu_val_6_43 * -1.0f;
        }
    }

    return result;
}
