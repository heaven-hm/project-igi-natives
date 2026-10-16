#include "00529010-Light_SampleLightmap_6.h"
/* 0x00529010 Light_SampleLightmap_6 full linked: callers=0 callees=15 */
float sub_529010(void* a1) __location("eax")

{
    void* eax = *(a1 + 0x108);
    char var_161 = 0;
    int32_t var_b8;
    __builtin_memset(&var_b8, 0, 0x30);
    float var_13c;
    __builtin_memset(&var_13c, 0, 0x18);
    void var_60;

    if (eax < 0)
    {
        var_161 = 1;
        memcpy(&var_b8, a1 + 0x148, 0x18);
    }
    else
    {
        eax = sub_4f1030(eax);

        if (eax)
        {
            int32_t ecx_1 = 0;
            int32_t var_10_1 = 0;
            ecx_1 = *(eax + 0x1c);
            int32_t ecx_2 = *((ecx_1 << 2) + &g_a994e0);

            if (ecx_2)
            {
                ecx_2(eax, &var_60);
                memcpy(&var_b8, &var_60, 0x18);
            }
        }
    }

    if (!*(a1 + 0x140) || !*(a1 + 0x19c))
    {
        *(a1 + 0x140) = 1;
        memcpy(a1 + 0x110, &var_b8, 0x18);
    }
    else
        memcpy(&var_b8, a1 + 0x110, 0x18);

    void* eax_2 = *(a1 + 0x10c);

    if (eax_2 >= 0)
    {
        eax_2 = sub_4f1030(eax_2);

        if (eax_2)
        {
            int32_t ecx_3 = 0;
            int32_t var_10_2 = 0;
            ecx_3 = *(eax_2 + 0x1c);
            int32_t ecx_4 = *((ecx_3 << 2) + &g_a994e0);

            if (ecx_4)
            {
                ecx_4(eax_2, &var_60);
                memcpy(&var_13c, &var_60, 0x18);
            }
        }
    }

    int16_t eax_3;
    eax_3 = *(a1 + 0x141);

    if (!eax_3)
    {
        *(a1 + 0x141) = 1;
        memcpy(a1 + 0x128, &var_13c, 0x18);
    }
    else
    {
        eax_3 = *(a1 + 0x19d);

        if (!eax_3)
        {
            *(a1 + 0x141) = 1;
            memcpy(a1 + 0x128, &var_13c, 0x18);
        }
        else
            memcpy(&var_13c, a1 + 0x128, 0x18);
    }

    float var_160 = var_13c - var_b8;
    int32_t var_134;
    int32_t var_b0;
    long double x87_r7_4 = var_134 - var_b0;
    int32_t var_12c;
    int32_t var_a8;
    float var_158 = var_12c - var_a8;
    long double x87_r6_7 = var_160;
    long double temp1 = 0f;
    x87_r6_7 - temp1;

    if (!(*(&((x87_r6_7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp1) ? 1 : 0) << 0xa
        | (x87_r6_7 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_5292c9:
        long double x87_r6_10 = var_158;
        long double x87_r4_1 = var_160;
        long double x87_r6_12 =
            1.0 / sqrtl(x87_r4_1 * x87_r4_1 + x87_r7_4 * x87_r7_4 + x87_r6_10 * x87_r6_10);
        var_160 = var_160 * x87_r6_12;
        x87_r7_4 = x87_r7_4 * x87_r6_12;
        var_158 = var_158 * x87_r6_12;
    }
    else
    {
        long double temp2_1 = 0f;
        x87_r7_4 - temp2_1;
        long double x87_r6_8;
        long double temp5_1;

        if (*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            x87_r6_8 = var_158;
            temp5_1 = 0f;
            x87_r6_8 - temp5_1;
        }

        if (!(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
            (x87_r6_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, temp5_1) ? 1 : 0) << 0xa
            | (x87_r6_8 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double temp4_1 = 0f;
            x87_r7_4 - temp4_1;

            if (!(*(&((x87_r7_4 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5292c9;

            long double x87_r6_9 = var_158;
            long double temp7_1 = 0f;
            x87_r6_9 - temp7_1;

            if (!(*(&((x87_r6_9 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_9, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_9 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5292c9;
        }
        else
            var_160 = 1f;
    }

    long double x87_r6_17 = 0f;
    float var_168 = 0f;
    float var_14c_1 = 0f;
    float var_170 = x87_r7_4 - x87_r6_17;
    float var_154 = var_170;
    float var_16c = -((var_160 - x87_r6_17));
    float var_150_1 = var_16c;
    float var_ec = var_16c * var_158 - var_168 * x87_r7_4;
    var_13c = var_ec;
    float var_e8 = -((var_170 * var_158 - var_168 * var_160));
    float var_138_1 = var_e8;
    float var_e4 = var_170 * x87_r7_4 - var_16c * var_160;
    long double x87_r7_7 = var_170;
    long double temp3 = 0f;
    x87_r7_7 - temp3;
    float var_134_2 = var_e4;

    if (!(*(&((x87_r7_7 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp3) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp3 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_5293e8:
        long double x87_r7_10 = var_170;
        long double x87_r6_29 = var_168;
        long double x87_r5_19 = var_16c;
        long double x87_r7_12 =
            1.0 / sqrtl(x87_r5_19 * x87_r5_19 + x87_r6_29 * x87_r6_29 + x87_r7_10 * x87_r7_10);
        var_154 = var_170 * x87_r7_12;
        var_14c_1 = var_14c_1 * x87_r7_12;
    }
    else
    {
        long double x87_r7_8 = var_16c;
        long double temp6_1 = 0f;
        x87_r7_8 - temp6_1;

        if (!(*(&((x87_r7_8 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_5293e8;

        long double x87_r7_9 = var_168;
        long double temp9_1 = 0f;
        x87_r7_9 - temp9_1;

        if (!(*(&((x87_r7_9 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_5293e8;
    }

    long double x87_r7_14 = var_ec;
    long double temp8 = 0f;
    x87_r7_14 - temp8;

    if (!(*(&((x87_r7_14 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp8) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp8 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_529464:
        long double x87_r7_17 = var_e4;
        long double x87_r6_35 = var_e8;
        long double x87_r5_21 = var_ec;
        long double x87_r7_19 =
            1.0 / sqrtl(x87_r5_21 * x87_r5_21 + x87_r6_35 * x87_r6_35 + x87_r7_17 * x87_r7_17);
        var_13c = var_ec * x87_r7_19;
        var_134_2 = var_134_2 * x87_r7_19;
    }
    else
    {
        long double x87_r7_15 = var_e8;
        long double temp10_1 = 0f;
        x87_r7_15 - temp10_1;

        if (!(*(&((x87_r7_15 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_15, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_529464;

        long double x87_r7_16 = var_e4;
        long double temp12_1 = 0f;
        x87_r7_16 - temp12_1;

        if (!(*(&((x87_r7_16 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_529464;
    }

    float eax_7 = var_154;
    float edx_1 = var_13c;
    float var_e0;
    sub_4b3b60(&var_e0, -1.57079637f);
    long double x87_r7_21 = var_154;
    long double temp11 = 0f;
    x87_r7_21 - temp11;
    float var_114 = eax_7;
    float var_110 = var_160;
    long double x87_r7_27;

    if (!(*(&((x87_r7_21 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp11) ? 1 : 0) << 0xa
        | (x87_r7_21 == temp11 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_52953a:
        long double x87_r7_24 = var_13c;
        long double x87_r6_41 = var_160;
        long double x87_r5_23 = var_154;
        long double x87_r7_26 =
            1.0 / sqrtl(x87_r5_23 * x87_r5_23 + x87_r6_41 * x87_r6_41 + x87_r7_24 * x87_r7_24);
        var_114 = eax_7 * x87_r7_26;
        var_110 = var_110 * x87_r7_26;
        x87_r7_27 = x87_r7_26 * edx_1;
    }
    else
    {
        long double x87_r7_22 = var_160;
        long double temp13_1 = 0f;
        x87_r7_22 - temp13_1;

        if (!(*(&((x87_r7_22 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_52953a;

        long double x87_r7_23 = var_13c;
        long double temp15_1 = 0f;
        x87_r7_23 - temp15_1;

        if (!(*(&((x87_r7_23 < temp15_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, temp15_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_52953a;

        x87_r7_27 = edx_1;
    }

    float var_170_1 = var_13c * var_158 - var_134_2 * var_160;
    float var_108 = var_170_1;
    var_16c = -((var_14c_1 * var_13c - var_154 * var_134_2));
    float var_104 = var_16c;
    float var_168_1 = var_14c_1 * var_160 - var_154 * var_158;
    var_154 = var_168_1 * var_110 - var_16c * x87_r7_27;
    float var_fc = var_154;
    float var_150_2 = -((var_168_1 * var_114 - var_170_1 * x87_r7_27));
    float var_f8 = var_150_2;
    float result_1 = var_16c * var_114 - var_170_1 * var_110;
    long double x87_r6_67 = var_170_1;
    long double temp14 = 0f;
    x87_r6_67 - temp14;
    float result = result_1;
    float result_2 = result;
    result = (x87_r6_67 < temp14 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_67, temp14) ? 1 : 0) << 0xa
        | (x87_r6_67 == temp14 ? 1 : 0) << 0xe | 0x3800;
    long double x87_r6_73;

    if (!(*(&result + 1) & 0x40))
    {
    label_529678:
        long double x87_r6_70 = var_170_1;
        long double x87_r5_37 = var_16c;
        long double x87_r4_18 = var_168_1;
        long double x87_r6_72 =
            1.0 / sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_37 * x87_r5_37 + x87_r6_70 * x87_r6_70);
        var_108 = var_170_1 * x87_r6_72;
        var_104 = var_104 * x87_r6_72;
        x87_r6_73 = x87_r6_72 * var_168_1;
    }
    else
    {
        long double x87_r6_68 = var_16c;
        long double temp16_1 = 0f;
        x87_r6_68 - temp16_1;
        result = (x87_r6_68 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_68, temp16_1) ? 1 : 0) << 0xa
            | (x87_r6_68 == temp16_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x40))
            goto label_529678;

        long double x87_r6_69 = var_168_1;
        long double temp18_1 = 0f;
        x87_r6_69 - temp18_1;
        result = (x87_r6_69 < temp18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_69, temp18_1) ? 1 : 0) << 0xa
            | (x87_r6_69 == temp18_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x40))
            goto label_529678;

        x87_r6_73 = var_168_1;
    }

    long double x87_r5_43 = var_154;
    long double temp17 = 0f;
    x87_r5_43 - temp17;
    result = (x87_r5_43 < temp17 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_43, temp17) ? 1 : 0) << 0xa
        | (x87_r5_43 == temp17 ? 1 : 0) << 0xe | 0x3000;
    long double x87_r5_49;

    if (!(*(&result + 1) & 0x40))
    {
    label_5296f9:
        long double x87_r5_46 = result_1;
        long double x87_r4_20 = var_150_2;
        long double x87_r3_23 = var_154;
        long double x87_r5_48 =
            1.0 / sqrtl(x87_r3_23 * x87_r3_23 + x87_r4_20 * x87_r4_20 + x87_r5_46 * x87_r5_46);
        var_fc = var_154 * x87_r5_48;
        var_f8 = var_f8 * x87_r5_48;
        x87_r5_49 = x87_r5_48 * result_2;
    }
    else
    {
        long double x87_r5_44 = var_150_2;
        long double temp19_1 = 0f;
        x87_r5_44 - temp19_1;
        result = (x87_r5_44 < temp19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, temp19_1) ? 1 : 0) << 0xa
            | (x87_r5_44 == temp19_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x40))
            goto label_5296f9;

        long double x87_r5_45 = result_1;
        long double temp20_1 = 0f;
        x87_r5_45 - temp20_1;
        result = (x87_r5_45 < temp20_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_45, temp20_1) ? 1 : 0) << 0xa
            | (x87_r5_45 == temp20_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x40))
            goto label_5296f9;

        x87_r5_49 = result_2;
    }

    float var_d4;
    float var_c8;
    var_13c = var_c8 * x87_r7_27 + var_d4 * var_110 + var_e0 * var_114;
    float var_130 = var_e0 * var_108 + var_d4 * var_104 + var_c8 * x87_r6_73;
    float var_dc;
    float var_d0;
    float var_c4;
    float var_12c_1 = var_dc * var_108 + var_d0 * var_104 + var_c4 * x87_r6_73;
    float var_d8;
    float var_cc;
    float var_c0;
    float var_128 = var_d8 * var_108 + var_cc * var_104 + var_c0 * x87_r6_73;
    float var_124 = var_c8 * x87_r5_49 + var_d4 * var_f8 + var_e0 * var_fc;
    float var_120 = var_c4 * x87_r5_49 + var_d0 * var_f8 + var_dc * var_fc;
    result = var_161;
    int32_t var_bc;
    int32_t var_118 = var_bc + 1;
    float var_11c = var_c0 * x87_r5_49 + var_cc * var_f8 + var_d8 * var_fc;
    int32_t var_a0;

    if (!result)
    {
        long double x87_r7_31 =
            (var_c4 * x87_r7_27 + var_d0 * var_110 + var_dc * var_114) * *(a1 + 0x150)
            + (var_c0 * x87_r7_27 + var_cc * var_110 + var_d8 * var_114) * *(a1 + 0x158);
        var_154 = x87_r7_31 + var_13c * *(a1 + 0x148);
        result_1 =
            var_12c_1 * *(a1 + 0x150) + var_128 * *(a1 + 0x158) + var_130 * *(a1 + 0x148);
        double var_144_1 =
            var_120 * *(a1 + 0x150) + var_11c * *(a1 + 0x158) + var_124 * *(a1 + 0x148);
        memcpy(&var_a0, &var_154, 0x18);
    }

    long double x87_r7_42 = var_b8 + var_a0;
    *(a1 + 0xd0) = 0x3f800000;
    memcpy(a1 + 0x8c, &var_13c, 0x28);
    var_a0 = x87_r7_42;
    int32_t var_98;
    var_98 = var_b0 + var_98;
    int32_t var_90;
    var_90 = var_a8 + var_90;
    long double x87_r7_48 = *(a1 + 0x160) + *(a1 + 0x148);
    memcpy(a1 + 0xb8, &var_a0, 0x18);
    *(a1 + 0x148) = x87_r7_48;
    *(a1 + 0x150) = *(a1 + 0x168) + *(a1 + 0x150);
    *(a1 + 0x158) = *(a1 + 0x170) + *(a1 + 0x158);
    return result;
}
