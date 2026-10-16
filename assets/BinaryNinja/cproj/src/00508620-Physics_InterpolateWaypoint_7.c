#include "gi_platform.h"
#include "00508620-Physics_InterpolateWaypoint_7.h"
float* Physics_InterpolateWaypoint_7(double* a1, float* a2, int32_t a3)

{
    float* result = Script_ExecuteLevelScript_4(a3);

    if (result)
    {
        int32_t objC1 = 0;
        objC1 = result[7];

        if (*((objC1 << 2) + &g_a994e0))
        {
            int32_t tmpD2 = 0;
            int32_t v_8_1 = 0;
            tmpD2 = result[7];
            double v_58;
            ((int(*)())(uintptr_t)(*((tmpD2 << 2) + &g_a994e0)))(result, &v_58);
            long double x87_r7_2 = v_58 - *a1;
            double v_50;
            double v_68_1 = v_50 - a1[1];
            float v_90_1 = v_68_1;
            double v_48;
            float v_8c_1 = v_48 - a1[2];
            long double f1_1 = 0.0f;
            x87_r7_2 - f1_1;

            if (!(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
    label_5086ff: ;
                long double x87_r6_11 = v_8c_1;
                long double x87_r5_1 = v_90_1;
                long double x87_r6_13 =
                    1.0 / sqrtl(x87_r7_2 * x87_r7_2 + x87_r5_1 * x87_r5_1 + x87_r6_11 * x87_r6_11);
                x87_r7_2 = x87_r7_2 * x87_r6_13;
                v_90_1 = v_90_1 * x87_r6_13;
                v_8c_1 = v_8c_1 * x87_r6_13;
            }
            else
            {
                long double x87_r6_7 = v_90_1;
                long double f2_1 = 0.0f;
                x87_r6_7 - f2_1;
                long double x87_r6_8;
                long double f5_1;

                if (*(&((x87_r6_7 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, f2_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                {
                    x87_r6_8 = v_8c_1;
                    f5_1 = 0.0f;
                    x87_r6_8 - f5_1;
                }

                if (!(*(&((x87_r6_7 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, f2_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                    (x87_r6_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_8 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                    long double x87_r6_9 = v_90_1;
                    long double f4_1 = 0.0f;
                    x87_r6_9 - f4_1;

                    if (!(*(&((x87_r6_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, f4_1) ? 1 : 0) << 0xa
                            | (x87_r6_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_5086ff;

                    long double x87_r6_10 = v_8c_1;
                    long double f7_1 = 0.0f;
                    x87_r6_10 - f7_1;

                    if (!(*(&((x87_r6_10 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_10, f7_1) ? 1 : 0) << 0xa
                            | (x87_r6_10 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_5086ff;
                }
                else
                    x87_r7_2 = 1.0f;
            }

            long double x87_r6_18 = 0.0f;
            v_68_1 = 0;
            float v_a0_1 = v_90_1 - x87_r6_18;
            float v_70_1 = v_a0_1;
            float v_9c_1 = -((x87_r7_2 - x87_r6_18));
            float v_6c_1 = v_9c_1;
            float v_7c_1 = v_9c_1 * v_8c_1 - 0.0f * v_90_1;
            float v_88_1 = v_7c_1;
            float v_78_1 = -((v_a0_1 * v_8c_1 - 0.0f * x87_r7_2));
            float v_84_1 = v_78_1;
            float v_74_1 = v_a0_1 * v_90_1 - v_9c_1 * x87_r7_2;
            long double x87_r6_30 = v_a0_1;
            long double f3_1 = 0.0f;
            x87_r6_30 - f3_1;

            if (!(*(&((x87_r6_30 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_30, f3_1) ? 1 : 0) << 0xa
                | (x87_r6_30 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
    label_50880a: ;
                long double x87_r6_33 = v_a0_1;
                long double x87_r5_18 = 0.0f;
                long double x87_r4_3 = v_9c_1;
                long double x87_r6_35 = 1.0
                    / sqrtl(x87_r4_3 * x87_r4_3 + x87_r5_18 * x87_r5_18 + x87_r6_33 * x87_r6_33);
                v_70_1 = v_a0_1 * x87_r6_35;
                v_6c_1 = v_6c_1 * x87_r6_35;
                v_68_1 = 0.0f * x87_r6_35;
            }
            else
            {
                long double x87_r6_31 = v_9c_1;
                long double f6_1 = 0.0f;
                x87_r6_31 - f6_1;

                if (!(*(&((x87_r6_31 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_31, f6_1) ? 1 : 0) << 0xa
                        | (x87_r6_31 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_50880a;

                long double x87_r6_32 = 0.0f;
                long double f9_1 = 0.0f;
                x87_r6_32 - f9_1;

                if (!(*(&((x87_r6_32 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_32, f9_1) ? 1 : 0) << 0xa
                        | (x87_r6_32 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_50880a;
            }

            long double x87_r6_37 = v_7c_1;
            long double f8_1 = 0.0f;
            x87_r6_37 - f8_1;
            long double x87_r6_43;

            if (!(*(&((x87_r6_37 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_37, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_37 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
    label_508887: ;
                long double x87_r6_40 = v_74_1;
                long double x87_r5_26 = v_78_1;
                long double x87_r4_5 = v_7c_1;
                long double x87_r6_42 = 1.0
                    / sqrtl(x87_r4_5 * x87_r4_5 + x87_r5_26 * x87_r5_26 + x87_r6_40 * x87_r6_40);
                v_88_1 = v_7c_1 * x87_r6_42;
                v_84_1 = v_84_1 * x87_r6_42;
                x87_r6_43 = x87_r6_42 * v_74_1;
            }
            else
            {
                long double x87_r6_38 = v_78_1;
                long double f10_1 = 0.0f;
                x87_r6_38 - f10_1;

                if (!(*(&((x87_r6_38 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_38, f10_1) ? 1 : 0) << 0xa
                        | (x87_r6_38 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_508887;

                long double x87_r6_39 = v_74_1;
                long double f11_1 = 0.0f;
                x87_r6_39 - f11_1;

                if (!(*(&((x87_r6_39 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_39, f11_1) ? 1 : 0) << 0xa
                        | (x87_r6_39 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_508887;

                x87_r6_43 = v_74_1;
            }

            result = a2;
            result[5] = v_90_1;
            result[8] = v_8c_1;
            *result = v_70_1;
            result[3] = v_6c_1;
            result[6] = v_68_1;
            result[1] = v_88_1 * -1.0f;
            result[4] = v_84_1 * -1.0f;
            result[2] = x87_r7_2;
            result[7] = x87_r6_43 * -1.0f;
        }
    }

    return result;
}
