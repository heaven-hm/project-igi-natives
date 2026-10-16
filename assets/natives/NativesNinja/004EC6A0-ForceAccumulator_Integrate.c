#include "004EC6A0-ForceAccumulator_Integrate.h"
/* 0x004ec6a0 ForceAccumulator_Integrate full linked: callers=1 callees=2 */
int32_t sub_4ec6a0(void* a1, float* a2)

{
    int32_t ecx = 0;
    int32_t result = 0;
    int32_t result_1 = 0;
    long double x87_r7_2 = a2[4] + *a2 + a2[8];
    long double temp1 = 0f;
    x87_r7_2 - temp1;
    float var_88;
    float var_84;
    float var_80;
    float var_7c;
    float var_6c;

    if (*(&((x87_r7_2 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_8 = a2[4];
        long double temp2_1 = *a2;
        x87_r7_8 - temp2_1;
        var_6c = 1.40129846e-45f;
        int32_t var_68_1 = 2;
        int32_t var_64_1 = 0;

        if (!(*(&((x87_r7_8 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            ecx = 1;

        long double x87_r7_9 = a2[8];
        long double temp3_1 = a2[ecx * 4];
        x87_r7_9 - temp3_1;

        if (!(*(&((x87_r7_9 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            ecx = 2;

        int32_t edx_1 = (&var_6c)[ecx];
        int32_t edi_1 = (&var_6c)[edx_1];
        long double x87_r7_14 =
            sqrtl(a2[ecx * 4] - *((edx_1 << 4) + a2) - *((edi_1 << 4) + a2) + 1f);
        (&var_88)[ecx] = x87_r7_14 * 0.5f;
        long double temp4_1 = 0f;
        x87_r7_14 - temp4_1;

        if (!(*(&((x87_r7_14 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            x87_r7_14 = 0.5f / x87_r7_14;

        int32_t eax_9 = ecx * 3;
        int32_t ebx_5 = edi_1 * 3;
        result = result_1;
        (&var_88)[edx_1] = (a2[edx_1 * 3 + ecx] + a2[eax_9 + edx_1]) * x87_r7_14;
        (&var_88)[edi_1] = (a2[ecx + ebx_5] + a2[eax_9 + edi_1]) * x87_r7_14;
        var_7c = -(((a2[edx_1 * 3 + edi_1] - a2[ebx_5 + edx_1]) * x87_r7_14));
    }
    else
    {
        long double x87_r7_4 = sqrtl(x87_r7_2 + 1f);
        var_7c = x87_r7_4 * 0.5f;
        long double x87_r7_5 = 0.5f / x87_r7_4;
        var_88 = -(((a2[5] - a2[7]) * x87_r7_5));
        var_84 = -(((a2[6] - a2[2]) * x87_r7_5));
        var_80 = -(((a2[1] - a2[3]) * x87_r7_5));
    }

    float i_2 = *(a1 + 0x5c);
    *(a1 + 0x60) = i_2;

    if (i_2 > 0)
    {
        long double x87_r7_16 = 0f;
        long double x87_r6_26 = 0f;
        float* edx_2 = *(a1 + 0x54);
        float var_68_2 = x87_r6_26;
        long double x87_r5_1 = 0f;
        float var_50_1 = 0f;
        float var_64_2 = x87_r5_1;
        long double x87_r4_1 = 0f;
        long double x87_r3_1 = 0f;
        float* ecx_2 = &edx_2[4];
        float i_1 = i_2;
        float i;

        do
        {
            x87_r4_1 = x87_r4_1 + *edx_2;
            x87_r3_1 = x87_r3_1 + ecx_2[-3];
            var_50_1 = var_50_1 + ecx_2[-2];
            long double x87_r2_3 = ecx_2[-1];
            long double temp7_1 = 0f;
            x87_r2_3 - temp7_1;

            if (!(*(&((x87_r2_3 < temp7_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r2_3, temp7_1) ? 1 : 0) << 0xa
                | (x87_r2_3 == temp7_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
            {
            label_4ec87d:
                long double x87_r2_6 = *edx_2;
                long double temp9_1 = 0f;
                x87_r2_6 - temp9_1;

                if (!(*(&((x87_r2_6 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r2_6, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r2_6 == temp9_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                {
                label_4ec8dc:
                    x87_r7_16 = x87_r7_16 + ecx_2[-2] * *ecx_2 - ecx_2[1] * ecx_2[-3];
                    x87_r6_26 = x87_r6_26 + -((ecx_2[-2] * ecx_2[-1] - *edx_2 * ecx_2[1]));
                    x87_r5_1 = x87_r5_1 + ecx_2[-3] * ecx_2[-1] - *edx_2 * *ecx_2;
                }
                else
                {
                    long double x87_r2_7 = ecx_2[-3];
                    long double temp11_1 = 0f;
                    x87_r2_7 - temp11_1;

                    if (!(*(&((x87_r2_7 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r2_7, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r2_7 == temp11_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                        goto label_4ec8dc;

                    long double x87_r2_8 = ecx_2[-2];
                    long double temp14_1 = 0f;
                    x87_r2_8 - temp14_1;

                    if (!(*(&((x87_r2_8 < temp14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r2_8, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r2_8 == temp14_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                        goto label_4ec8dc;
                }
            }
            else
            {
                long double x87_r2_4 = *ecx_2;
                long double temp10_1 = 0f;
                x87_r2_4 - temp10_1;

                if (!(*(&((x87_r2_4 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r2_4, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r2_4 == temp10_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                    goto label_4ec87d;

                long double x87_r2_5 = ecx_2[1];
                long double temp12_1 = 0f;
                x87_r2_5 - temp12_1;

                if (!(*(&((x87_r2_5 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r2_5, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r2_5 == temp12_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                    goto label_4ec87d;
            }

            edx_2 = &edx_2[6];
            ecx_2 = &ecx_2[6];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        float var_54_1 = x87_r3_1;
        float var_58_1 = x87_r4_1;
        float var_64_3 = x87_r5_1;
        *(a1 + 0x3c) = var_58_1;
        float var_68_3 = x87_r6_26;
        long double x87_r6_27 = *(a1 + 4);
        *(a1 + 0x40) = var_54_1;
        *(a1 + 0x44) = var_50_1;
        float var_38_1 = x87_r6_27 * var_58_1;
        float var_34_2 = x87_r6_27 * var_54_1;
        long double x87_r6_28 = x87_r6_27 * var_50_1;
        float var_58_2 = x87_r6_28 * a2[2] + var_34_2 * a2[1] + var_38_1 * *a2;
        float var_54_2 = x87_r6_28 * a2[5] + var_38_1 * a2[3] + var_34_2 * a2[4];
        long double x87_r5_16 = var_34_2 * a2[7] + var_38_1 * a2[6];
        long double x87_r5_18 = x87_r6_28 * a2[8];
        *(a1 + 0x5c) = 0;
        *(a1 + 0x18) = var_58_2 + *(a1 + 0x18);
        *(a1 + 0x1c) = var_54_2 + *(a1 + 0x1c);
        *(a1 + 0x20) = x87_r5_16 + x87_r5_18 + *(a1 + 0x20);
        *(a1 + 0x30) = x87_r7_16 + *(a1 + 0x30);
        *(a1 + 0x34) = var_68_3 + *(a1 + 0x34);
        *(a1 + 0x38) = var_64_3 + *(a1 + 0x38);
    }

    long double x87_r7_22 = *(a1 + 0x30);
    long double temp5 = 0f;
    x87_r7_22 - temp5;

    if (!(*(&((x87_r7_22 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp5) ? 1 : 0) << 0xa
        | (x87_r7_22 == temp5 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4eca05:
        float var_28;
        sub_4b3c20(&var_28, *(a1 + 0xc), *(a1 + 0x10), *(a1 + 0x14));
        float var_24;
        float var_20;
        var_6c = var_20 * *(a1 + 0x38) + var_24 * *(a1 + 0x34) + var_28 * *(a1 + 0x30);
        float var_14;
        long double x87_r7_30 = var_14 * *(a1 + 0x38);
        float var_18;
        long double x87_r6_37 = var_18 * *(a1 + 0x34);
        *(a1 + 0x48) = var_6c;
        float var_8;
        long double x87_r7_34 = var_8 * *(a1 + 0x38);
        float var_c;
        long double x87_r6_41 = var_c * *(a1 + 0x34);
        float var_1c;
        *(a1 + 0x4c) = x87_r7_30 + x87_r6_37 + var_1c * *(a1 + 0x30);
        float var_10;
        *(a1 + 0x50) = x87_r7_34 + x87_r6_41 + var_10 * *(a1 + 0x30);
        var_6c = *(a1 + 0x4c) * a2[1] + *a2 * *(a1 + 0x48) + *(a1 + 0x50) * a2[2];
        float var_68_5 =
            a2[3] * *(a1 + 0x48) + *(a1 + 0x50) * a2[5] + *(a1 + 0x4c) * a2[4];
        long double x87_r7_47 = a2[7] * *(a1 + 0x4c) + *(a1 + 0x50) * a2[8];
        long double x87_r6_55 = *(a1 + 0x48) * a2[6];
        *(a1 + 0x48) = var_6c;
        *(a1 + 0x4c) = var_68_5;
        *(a1 + 0x50) = x87_r7_47 + x87_r6_55;
        long double x87_r7_50 = *(a1 + 0x48) * 0.5f;
        long double x87_r6_57 = *(a1 + 0x4c) * 0.5f;
        long double x87_r5_24 = *(a1 + 0x50) * 0.5f;
        float var_64_6 = x87_r5_24;
        float var_44_1 = (var_64_6 + x87_r7_50) * (var_84 + var_88);
        float var_48_1 = (var_7c - var_80) * x87_r6_57;
        long double x87_r6_59 = (var_80 + var_7c) * -(x87_r6_57);
        long double x87_r6_61 = x87_r6_59 + var_48_1 + var_44_1;
        float var_74_1 = ((var_64_6 - x87_r7_50) * (var_88 - var_84) + x87_r6_61) * 0.5f;
        float var_68_6 = var_74_1 + (var_80 + var_84) * -(x87_r7_50) - x87_r6_59;
        float var_64_7 = var_74_1 + (var_64_6 + x87_r6_57) * (var_7c - var_88) - var_48_1;
        float var_60_1 = var_74_1 + (x87_r5_24 - x87_r6_57) * (var_84 - var_80) - var_44_1;
        var_88 = (var_88 + var_7c) * x87_r7_50 + var_74_1 - x87_r6_61 + var_88;
        float var_84_1 = var_68_6 + var_84;
        float var_80_1 = var_64_7 + var_80;
        long double x87_r7_61 = var_60_1 + var_7c;
        long double x87_r6_82 = 1.0 / sqrtl(var_80_1 * var_80_1 + var_84_1 * var_84_1
            + var_88 * var_88 + x87_r7_61 * x87_r7_61);
        var_88 = var_88 * x87_r6_82;
        float var_84_2 = var_84_1 * x87_r6_82;
        float var_80_2 = var_80_1 * x87_r6_82;
        long double x87_r6_84 = x87_r7_61 * x87_r6_82;
        long double x87_r6_93 = 1.0 / sqrtl(var_80_2 * var_80_2 + var_84_2 * var_84_2
            + var_88 * var_88 + x87_r6_84 * x87_r6_84);
        var_88 = var_88 * x87_r6_93;
        float var_84_3 = var_84_2 * x87_r6_93;
        float var_80_3 = var_80_2 * x87_r6_93;
        long double x87_r6_95 = x87_r6_84 * x87_r6_93;
        long double x87_r6_99 = var_88 * var_88;
        a2[9] = 0;
        result = 1;
        float var_2c_1 = x87_r6_99 + x87_r6_99;
        long double x87_r6_102 = var_84_3 * var_88;
        float var_44_2 = x87_r6_102 + x87_r6_102;
        long double x87_r6_105 = var_80_3 * var_88;
        float var_4c_2 = x87_r6_105 + x87_r6_105;
        long double x87_r6_108 = var_88 * x87_r6_95;
        float var_3c_2 = x87_r6_108 + x87_r6_108;
        long double x87_r6_111 = var_84_3 * var_84_3;
        float var_70_1 = x87_r6_111 + x87_r6_111;
        long double x87_r6_114 = var_80_3 * var_84_3;
        float var_40_2 = x87_r6_114 + x87_r6_114;
        long double x87_r6_117 = var_84_3 * x87_r6_95;
        float var_74_2 = x87_r6_117 + x87_r6_117;
        long double x87_r6_120 = var_80_3 * var_80_3;
        float var_48_2 = x87_r6_120 + x87_r6_120;
        long double x87_r7_66 = x87_r6_95 * var_80_3;
        long double x87_r7_67 = x87_r7_66 + x87_r7_66;
        *a2 = 1f - var_70_1 - var_48_2;
        a2[1] = var_44_2 - x87_r7_67;
        a2[2] = var_74_2 + var_4c_2;
        a2[3] = x87_r7_67 + var_44_2;
        long double x87_r7_70 = 1f - var_2c_1;
        a2[4] = x87_r7_70 - var_48_2;
        a2[5] = var_40_2 - var_3c_2;
        a2[6] = var_4c_2 - var_74_2;
        a2[7] = var_40_2 + var_3c_2;
        a2[8] = x87_r7_70 - var_70_1;
    }
    else
    {
        long double x87_r7_23 = *(a1 + 0x34);
        long double temp6_1 = 0f;
        x87_r7_23 - temp6_1;

        if (!(*(&((x87_r7_23 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4eca05;

        long double x87_r7_24 = *(a1 + 0x38);
        long double temp8_1 = 0f;
        x87_r7_24 - temp8_1;

        if (!(*(&((x87_r7_24 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_24 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4eca05;
    }

    sub_4ecdb0(a1);
    return result;
}
