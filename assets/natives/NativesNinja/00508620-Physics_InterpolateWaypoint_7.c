#include "00508620-Physics_InterpolateWaypoint_7.h"
/* 0x00508620 Physics_InterpolateWaypoint_7 full linked: callers=1 callees=1 */
float* sub_508620(double* a1, float* a2, int32_t a3)

{
    float* result = sub_4f1030(a3);

    if (result)
    {
        int32_t ecx_1 = 0;
        ecx_1 = result[7];

        if (*((ecx_1 << 2) + &g_a994e0))
        {
            int32_t edx_2 = 0;
            int32_t var_8_1 = 0;
            edx_2 = result[7];
            double var_58;
            (*((edx_2 << 2) + &g_a994e0))(result, &var_58);
            long double x87_r7_2 = var_58 - *a1;
            double var_50;
            double var_68_1 = var_50 - a1[1];
            float var_90_1 = var_68_1;
            double var_48;
            float var_8c_1 = var_48 - a1[2];
            long double temp1_1 = 0f;
            x87_r7_2 - temp1_1;

            if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
            label_5086ff:
                long double x87_r6_11 = var_8c_1;
                long double x87_r5_1 = var_90_1;
                long double x87_r6_13 =
                    1.0 / sqrtl(x87_r7_2 * x87_r7_2 + x87_r5_1 * x87_r5_1 + x87_r6_11 * x87_r6_11);
                x87_r7_2 = x87_r7_2 * x87_r6_13;
                var_90_1 = var_90_1 * x87_r6_13;
                var_8c_1 = var_8c_1 * x87_r6_13;
            }
            else
            {
                long double x87_r6_7 = var_90_1;
                long double temp2_1 = 0f;
                x87_r6_7 - temp2_1;
                long double x87_r6_8;
                long double temp5_1;

                if (*(&((x87_r6_7 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                {
                    x87_r6_8 = var_8c_1;
                    temp5_1 = 0f;
                    x87_r6_8 - temp5_1;
                }

                if (!(*(&((x87_r6_7 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                    (x87_r6_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_8 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                    long double x87_r6_9 = var_90_1;
                    long double temp4_1 = 0f;
                    x87_r6_9 - temp4_1;

                    if (!(*(&((x87_r6_9 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r6_9 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_5086ff;

                    long double x87_r6_10 = var_8c_1;
                    long double temp7_1 = 0f;
                    x87_r6_10 - temp7_1;

                    if (!(*(&((x87_r6_10 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_10, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r6_10 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_5086ff;
                }
                else
                    x87_r7_2 = 1f;
            }

            long double x87_r6_18 = 0f;
            var_68_1 = 0;
            float var_a0_1 = var_90_1 - x87_r6_18;
            float var_70_1 = var_a0_1;
            float var_9c_1 = -((x87_r7_2 - x87_r6_18));
            float var_6c_1 = var_9c_1;
            float var_7c_1 = var_9c_1 * var_8c_1 - 0f * var_90_1;
            float var_88_1 = var_7c_1;
            float var_78_1 = -((var_a0_1 * var_8c_1 - 0f * x87_r7_2));
            float var_84_1 = var_78_1;
            float var_74_1 = var_a0_1 * var_90_1 - var_9c_1 * x87_r7_2;
            long double x87_r6_30 = var_a0_1;
            long double temp3_1 = 0f;
            x87_r6_30 - temp3_1;

            if (!(*(&((x87_r6_30 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_30, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_30 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
            label_50880a:
                long double x87_r6_33 = var_a0_1;
                long double x87_r5_18 = 0f;
                long double x87_r4_3 = var_9c_1;
                long double x87_r6_35 = 1.0
                    / sqrtl(x87_r4_3 * x87_r4_3 + x87_r5_18 * x87_r5_18 + x87_r6_33 * x87_r6_33);
                var_70_1 = var_a0_1 * x87_r6_35;
                var_6c_1 = var_6c_1 * x87_r6_35;
                var_68_1 = 0f * x87_r6_35;
            }
            else
            {
                long double x87_r6_31 = var_9c_1;
                long double temp6_1 = 0f;
                x87_r6_31 - temp6_1;

                if (!(*(&((x87_r6_31 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_31, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r6_31 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_50880a;

                long double x87_r6_32 = 0f;
                long double temp9_1 = 0f;
                x87_r6_32 - temp9_1;

                if (!(*(&((x87_r6_32 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_32, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r6_32 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_50880a;
            }

            long double x87_r6_37 = var_7c_1;
            long double temp8_1 = 0f;
            x87_r6_37 - temp8_1;
            long double x87_r6_43;

            if (!(*(&((x87_r6_37 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_37, temp8_1) ? 1 : 0) << 0xa
                | (x87_r6_37 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
            label_508887:
                long double x87_r6_40 = var_74_1;
                long double x87_r5_26 = var_78_1;
                long double x87_r4_5 = var_7c_1;
                long double x87_r6_42 = 1.0
                    / sqrtl(x87_r4_5 * x87_r4_5 + x87_r5_26 * x87_r5_26 + x87_r6_40 * x87_r6_40);
                var_88_1 = var_7c_1 * x87_r6_42;
                var_84_1 = var_84_1 * x87_r6_42;
                x87_r6_43 = x87_r6_42 * var_74_1;
            }
            else
            {
                long double x87_r6_38 = var_78_1;
                long double temp10_1 = 0f;
                x87_r6_38 - temp10_1;

                if (!(*(&((x87_r6_38 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_38, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r6_38 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_508887;

                long double x87_r6_39 = var_74_1;
                long double temp11_1 = 0f;
                x87_r6_39 - temp11_1;

                if (!(*(&((x87_r6_39 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_39, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r6_39 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_508887;

                x87_r6_43 = var_74_1;
            }

            result = a2;
            result[5] = var_90_1;
            result[8] = var_8c_1;
            *result = var_70_1;
            result[3] = var_6c_1;
            result[6] = var_68_1;
            result[1] = var_88_1 * -1f;
            result[4] = var_84_1 * -1f;
            result[2] = x87_r7_2;
            result[7] = x87_r6_43 * -1f;
        }
    }

    return result;
}
