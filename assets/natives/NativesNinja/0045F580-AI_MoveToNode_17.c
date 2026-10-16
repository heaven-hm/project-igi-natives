#include "0045F580-AI_MoveToNode_17.h"
/* 0x0045f580 AI_MoveToNode_17 full linked: callers=2 callees=0 */
int32_t sub_45f580(void* a1, double* a2, double* a3, int32_t a4)

{
    int32_t edi = 0;

    if (a4 > 0)
    {
        double* edx_1 = a3;
        double* ecx_1 = a2;
        float eax_1 = *(a1 + 0xa0);

        do
        {
            float var_50_1 = *ecx_1 - *(a1 + 0x20);
            float var_4c_1 = ecx_1[1] - *(a1 + 0x28);
            float var_48_1 = ecx_1[2] - *(a1 + 0x30);
            float var_44_1 = *edx_1 - *(a1 + 0x20);
            float var_40_1 = edx_1[1] - *(a1 + 0x28);
            float var_3c_1 = edx_1[2] - *(a1 + 0x30);
            long double x87_r7_13 = var_50_1;
            long double temp1_1 = var_44_1;
            x87_r7_13 - temp1_1;
            long double x87_r7_14;

            x87_r7_14 = !(*(&((x87_r7_13 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? var_44_1 : var_50_1;

            long double x87_r6_1 = var_4c_1;
            long double temp2_1 = var_40_1;
            x87_r6_1 - temp2_1;
            float eax_4 = var_4c_1;

            if (!(*(&((x87_r6_1 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                eax_4 = var_40_1;

            long double x87_r6_2 = var_48_1;
            long double temp3_1 = var_3c_1;
            x87_r6_2 - temp3_1;
            float eax_6 = var_48_1;

            if (!(*(&((x87_r6_2 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                eax_6 = var_3c_1;

            long double x87_r6_3 = var_50_1;
            long double temp4_1 = var_44_1;
            x87_r6_3 - temp4_1;
            float eax_8 = var_50_1;

            if (*(&((x87_r6_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                eax_8 = var_44_1;

            long double x87_r6_4 = var_4c_1;
            long double temp5_1 = var_40_1;
            x87_r6_4 - temp5_1;
            float eax_10 = var_4c_1;

            if (*(&((x87_r6_4 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                eax_10 = var_40_1;

            long double x87_r6_5 = var_48_1;
            long double temp6_1 = var_3c_1;
            x87_r6_5 - temp6_1;
            float eax_12 = var_48_1;

            if (*(&((x87_r6_5 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                eax_12 = var_3c_1;

            float var_2c_1 = *edx_1 - *ecx_1;
            float var_28_1 = edx_1[1] - ecx_1[1];
            float var_24_1 = edx_1[2] - ecx_1[2];
            float var_38_1 = var_50_1;
            float var_38_2 = -(var_50_1);
            float var_34_2 = -(var_4c_1);
            long double x87_r6_17 = -(var_48_1);
            long double x87_r5_1 = var_34_2;
            long double x87_r4_1 = var_38_2;
            double var_58_1 = var_24_1;
            double var_60_1 = var_28_1;
            double var_68_1 = var_2c_1;
            float var_6c_1 = x87_r6_17 * var_24_1 + var_34_2 * var_28_1 + var_38_2 * var_2c_1;
            long double x87_r6_21 = x87_r4_1 * x87_r4_1 + x87_r5_1 * x87_r5_1
                + x87_r6_17 * x87_r6_17 - 1f
                / (var_68_1 * var_68_1 + var_60_1 * var_60_1 + var_58_1 * var_58_1) * var_6c_1
                * var_6c_1;
            long double x87_r5_12 = eax_1 * eax_1;
            x87_r5_12 - x87_r6_21;

            if (!(*(&((x87_r5_12 < x87_r6_21 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_12, x87_r6_21) ? 1 : 0) << 0xa
                | (x87_r5_12 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double temp7_1 = eax_1;
                x87_r7_14 - temp7_1;

                if (*(&((x87_r7_14 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_15 = eax_4;
                    long double temp8_1 = eax_1;
                    x87_r7_15 - temp8_1;

                    if (*(&((x87_r7_15 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_16 = eax_6;
                        long double temp9_1 = eax_1;
                        x87_r7_16 - temp9_1;

                        if (*(&((x87_r7_16 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_16, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_16 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            float var_6c_2 = -(eax_1);
                            long double x87_r7_19 = eax_8;
                            long double temp10_1 = var_6c_2;
                            x87_r7_19 - temp10_1;

                            if (!(*(&((x87_r7_19 < temp10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_19, temp10_1) ? 1 : 0) << 0xa
                                | (x87_r7_19 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_20 = eax_10;
                                long double temp11_1 = var_6c_2;
                                x87_r7_20 - temp11_1;

                                if (!(*(&((x87_r7_20 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_20, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_20 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_21 = eax_12;
                                    long double temp12_1 = var_6c_2;
                                    x87_r7_21 - temp12_1;

                                    if (!(*(&((x87_r7_21 < temp12_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_21, temp12_1) ? 1 : 0) << 0xa
                                            | (x87_r7_21 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        return 1;
                                }
                            }
                        }
                    }
                }
            }

            ecx_1 = &ecx_1[3];
            edx_1 = &edx_1[3];
            edi += 1;
        } while (edi < a4);
    }

    return 0;
}
