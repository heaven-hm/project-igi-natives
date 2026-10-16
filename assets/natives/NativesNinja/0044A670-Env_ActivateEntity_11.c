#include "0044A670-Env_ActivateEntity_11.h"
/* 0x0044a670 Env_ActivateEntity_11 full linked: callers=8 callees=21 */
void* sub_44a670(float* a1, float* a2, float* a3)

{
    long double x87_r7_1 = g_57c258 - a1[2];
    float var_60 = 0f;
    float var_7c = 0f;
    float var_8c = 0f;
    float var_70 = x87_r7_1;
    long double x87_r6_1 = g_57c254 - a1[1];
    float var_30 = x87_r6_1;
    long double x87_r5_1 = g_57c250 - *a1;
    float var_20 = x87_r5_1;
    long double x87_r4_3 = x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1;
    long double x87_r6_4 = g_57c258 - a2[2];
    float var_78 = x87_r6_4;
    long double x87_r5_4 = g_57c254 - a2[1];
    float var_18 = x87_r5_4;
    long double x87_r4_5 = g_57c250 - *a2;
    float var_8 = x87_r4_5;
    float var_5c = x87_r4_5 * x87_r4_5 + x87_r5_4 * x87_r5_4 + x87_r6_4 * x87_r6_4;
    long double x87_r6_7 = g_57c258 - a3[2];
    long double x87_r5_7 = g_57c254 - a3[1];
    long double x87_r4_8 = g_57c250 - *a3;
    float var_4c = x87_r4_8 * x87_r4_8 + x87_r5_7 * x87_r5_7 + x87_r6_7 * x87_r6_7;
    long double x87_r6_10 = a2[2] - a1[2];
    long double x87_r4_11 = a2[1] - a1[1];
    float var_4 = x87_r4_11;
    long double x87_r3_13 = *a2 - *a1;
    float var_38 = x87_r3_13 * x87_r3_13 + x87_r4_11 * x87_r4_11 + x87_r6_10 * x87_r6_10;
    long double x87_r5_12 = a3[2] - a2[2];
    float var_1c = x87_r5_12;
    long double x87_r4_14 = a3[1] - a2[1];
    float var_c = x87_r4_14;
    long double x87_r3_16 = *a3 - *a2;
    float var_34 = x87_r4_14 * x87_r4_14 + x87_r5_12 * x87_r5_12 + x87_r3_16 * x87_r3_16;
    long double x87_r5_15 = a1[2] - a3[2];
    long double x87_r4_17 = a1[1] - a3[1];
    long double x87_r3_19 = *a1 - *a3;
    float var_6c = x87_r3_13;
    float var_48 = x87_r3_16;
    float var_3c = x87_r3_19 * x87_r3_19 + x87_r4_17 * x87_r4_17 + x87_r5_15 * x87_r5_15;
    char ecx = 1;
    float var_68 = var_4;
    float var_88 = *a3 - *a1;
    float var_84 = a3[1] - a1[1];
    float var_80 = a3[2] - a1[2];
    float var_64 = x87_r6_10;
    long double x87_r6_11 = g_57c264;
    long double temp1 = 0f;
    x87_r6_11 - temp1;
    long double x87_r6_12 = g_57c264;

    if (1 & *(&((x87_r6_11 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_11, temp1) ? 1 : 0) << 0xa
            | (x87_r6_11 == temp1 ? 1 : 0) << 0xe | 0x3000) + 1))
        x87_r6_12 = -(x87_r6_12);

    long double x87_r5_23 = g_57c260;
    long double temp2 = 0f;
    x87_r5_23 - temp2;
    long double x87_r5_24 = g_57c260;

    if (*(&((x87_r5_23 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_23, temp2) ? 1 : 0) << 0xa
            | (x87_r5_23 == temp2 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        x87_r5_24 = -(x87_r5_24);

    x87_r6_12 - x87_r5_24;
    long double x87_r5_27;
    long double x87_r6_16;

    if (!(*(&((x87_r6_12 < x87_r5_24 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r5_24) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r5_24 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double x87_r6_15 = g_57c264;
        long double temp4_1 = 0f;
        x87_r6_15 - temp4_1;
        x87_r6_16 = g_57c264;

        if (*(&((x87_r6_15 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_15, temp4_1) ? 1 : 0) << 0xa
                | (x87_r6_15 == temp4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_16 = -(x87_r6_16);

        long double x87_r5_26 = g_57c268;
        long double temp6_1 = 0f;
        x87_r5_26 - temp6_1;
        x87_r5_27 = g_57c268;

        if (*(&((x87_r5_26 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_26, temp6_1) ? 1 : 0) << 0xa
                | (x87_r5_26 == temp6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_27 = -(x87_r5_27);

        x87_r6_16 - x87_r5_27;
    }

    long double x87_r5_44;
    long double x87_r6_26;

    if (!(*(&((x87_r6_12 < x87_r5_24 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r5_24) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r5_24 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) && !(*(&(
        (x87_r6_16 < x87_r5_27 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_16, x87_r5_27) ? 1 : 0) << 0xa
        | (x87_r6_16 == x87_r5_27 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double x87_r6_29 = var_64 * var_88 - var_6c * var_80;
        long double temp9_1 = 0f;
        x87_r6_29 - temp9_1;

        if (*(&((x87_r6_29 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_29, temp9_1) ? 1 : 0) << 0xa
                | (x87_r6_29 == temp9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
            ecx = 0;

        long double x87_r5_50 = var_70 * var_88 - var_20 * var_80;
        x87_r6_26 = x87_r5_50 / x87_r5_50;
        long double temp12_1 = 0f;
        x87_r6_26 - temp12_1;
        long double temp15_1;

        if (!(*(&((x87_r6_26 < temp12_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_26, temp12_1) ? 1 : 0) << 0xa
            | (x87_r6_26 == temp12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            temp15_1 = 1f;
            x87_r6_26 - temp15_1;
        }

        if (*(&((x87_r6_26 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, temp12_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == temp12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                (x87_r6_26 < temp15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, temp15_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            ecx = 0;

        long double x87_r5_51 = var_88;
        long double temp18_1 = 0f;
        x87_r5_51 - temp18_1;
        long double x87_r5_52 = var_88;

        if (*(&((x87_r5_51 < temp18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_51, temp18_1) ? 1 : 0) << 0xa
                | (x87_r5_51 == temp18_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_52 = -(x87_r5_52);

        long double x87_r4_26 = var_80;
        long double temp21_1 = 0f;
        x87_r4_26 - temp21_1;
        long double x87_r4_27 = var_80;

        if (*(&((x87_r4_26 < temp21_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_26, temp21_1) ? 1 : 0) << 0xa
                | (x87_r4_26 == temp21_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
            x87_r4_27 = -(x87_r4_27);

        x87_r5_52 - x87_r4_27;

        if (*(&((x87_r5_52 < x87_r4_27 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_52, x87_r4_27) ? 1 : 0) << 0xa
            | (x87_r5_52 == x87_r4_27 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_58 = var_80;
            long double temp24_1 = 0f;
            x87_r5_58 - temp24_1;

            if (!(*(&((x87_r5_58 < temp24_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_58, temp24_1) ? 1 : 0) << 0xa
                | (x87_r5_58 == temp24_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            {
                x87_r5_44 = (var_70 - x87_r6_26 * var_64) / var_80;
                goto label_44aaa6;
            }

        label_44aa96:
            ecx = 0;
            x87_r5_44 = (var_70 - x87_r6_26 * var_64) / var_80;
            goto label_44aaa6;
        }

        x87_r5_44 = (var_20 - x87_r6_26 * var_6c) / var_88;
    label_44aaa6:
        long double temp26_1 = 0f;
        x87_r5_44 - temp26_1;

        if (*(&((x87_r5_44 < temp26_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, temp26_1) ? 1 : 0) << 0xa
            | (x87_r5_44 == temp26_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        {
        label_44abbc:
            long double x87_r6_36 = var_4c;
            x87_r6_36 - x87_r4_3;
            float var_60_1;

            var_60_1 = !(*(&((x87_r6_36 < x87_r4_3 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_36, x87_r4_3) ? 1 : 0) << 0xa
                | (x87_r6_36 == x87_r4_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? x87_r4_3 : var_4c;

            long double x87_r6_37 = var_5c;
            x87_r6_37 - x87_r4_3;
            float var_7c_1;

            var_7c_1 = !(*(&((x87_r6_37 < x87_r4_3 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_37, x87_r4_3) ? 1 : 0) << 0xa
                | (x87_r6_37 == x87_r4_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? x87_r4_3 : var_5c;

            long double x87_r7_4 = var_4c;
            long double temp31_1 = var_5c;
            x87_r7_4 - temp31_1;
            long double x87_r7_5;

            x87_r7_5 = !(*(&((x87_r7_4 < temp31_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_4, temp31_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp31_1 ? 1 : 0) << 0xe) + 1) & 1) ? var_5c : var_4c;

            long double x87_r6_38 = var_20;
            long double x87_r5_81 = var_70;
            long double x87_r4_34 = var_30;
            float var_5c_1 =
                sqrtl(x87_r6_38 * x87_r6_38 + x87_r4_34 * x87_r4_34 + x87_r5_81 * x87_r5_81);
            float var_8c_1 = 1f / var_5c_1;
            long double x87_r4_38 = var_80;
            long double x87_r3_23 = var_84;
            long double x87_r2_25 = var_88;
            float var_4c_1 =
                sqrtl(x87_r2_25 * x87_r2_25 + x87_r3_23 * x87_r3_23 + x87_r4_38 * x87_r4_38);
            long double x87_r4_42 = 1f / var_4c_1;
            var_88 = x87_r4_42 * var_88;
            var_84 = x87_r4_42 * var_84;
            var_80 = x87_r4_42 * var_80;
            long double x87_r6_42 = (var_70 * var_8c_1 * var_80 + var_30 * var_8c_1 * var_84
                + x87_r6_38 * var_8c_1 * var_88) * var_5c_1;
            float var_8c_2 = x87_r6_42;
            long double temp39_1 = 0f;
            x87_r6_42 - temp39_1;

            if (!(*(&((x87_r6_42 < temp39_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_42, temp39_1) ? 1 : 0) << 0xa
                | (x87_r6_42 == temp39_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_43 = var_8c_2;
                long double temp47_1 = var_4c_1;
                x87_r6_43 - temp47_1;

                if (*(&((x87_r6_43 < temp47_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_43, temp47_1) ? 1 : 0) << 0xa
                    | (x87_r6_43 == temp47_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    var_88 = var_8c_2 * var_88;
                    var_84 = var_8c_2 * var_84;
                    var_80 = var_8c_2 * var_80;
                    long double x87_r6_56 = var_80 + a1[2] - g_57c258;
                    long double x87_r5_92 = var_84 + a1[1] - g_57c254;
                    long double x87_r4_49 = var_88 + *a1 - g_57c250;
                    long double x87_r3_32 =
                        x87_r4_49 * x87_r4_49 + x87_r5_92 * x87_r5_92 + x87_r6_56 * x87_r6_56;
                    long double x87_r5_94 = var_60_1;
                    x87_r5_94 - x87_r3_32;

                    if (!(*(&((x87_r5_94 < x87_r3_32 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_94, x87_r3_32) ? 1 : 0) << 0xa
                            | (x87_r5_94 == x87_r3_32 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                        var_60_1 = x87_r3_32;
                }
            }

            var_60 = sqrtl(var_60_1) * 0.000195312503f;
            long double x87_r6_62 = 0f;
            long double temp46_1 = var_60;
            x87_r6_62 - temp46_1;

            if (*(&((x87_r6_62 < temp46_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_62, temp46_1) ? 1 : 0) << 0xa
                | (x87_r6_62 == temp46_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_63 = 1f;
                long double temp52_1 = var_60;
                x87_r6_63 - temp52_1;

                if (*(&((x87_r6_63 < temp52_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_63, temp52_1) ? 1 : 0) << 0xa
                        | (x87_r6_63 == temp52_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    var_60 = 1f;
            }
            else
                var_60 = 0f;

            long double x87_r6_64 = var_20;
            long double x87_r5_95 = var_70;
            long double x87_r4_51 = var_30;
            float var_5c_2 =
                sqrtl(x87_r6_64 * x87_r6_64 + x87_r4_51 * x87_r4_51 + x87_r5_95 * x87_r5_95);
            float var_8c_3 = 1f / var_5c_2;
            long double x87_r4_55 = var_64;
            long double x87_r3_35 = var_68;
            long double x87_r2_36 = var_6c;
            float var_4c_2 =
                sqrtl(x87_r2_36 * x87_r2_36 + x87_r3_35 * x87_r3_35 + x87_r4_55 * x87_r4_55);
            long double x87_r4_59 = 1f / var_4c_2;
            var_6c = x87_r4_59 * var_6c;
            var_68 = x87_r4_59 * var_68;
            var_64 = x87_r4_59 * var_64;
            long double x87_r6_68 = (var_70 * var_8c_3 * var_64 + var_30 * var_8c_3 * var_68
                + x87_r6_64 * var_8c_3 * var_6c) * var_5c_2;
            float var_8c_4 = x87_r6_68;
            long double temp55_1 = 0f;
            x87_r6_68 - temp55_1;

            if (!(*(&((x87_r6_68 < temp55_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_68, temp55_1) ? 1 : 0) << 0xa
                | (x87_r6_68 == temp55_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_69 = var_8c_4;
                long double temp58_1 = var_4c_2;
                x87_r6_69 - temp58_1;

                if (*(&((x87_r6_69 < temp58_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_69, temp58_1) ? 1 : 0) << 0xa
                    | (x87_r6_69 == temp58_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    var_6c = var_8c_4 * var_6c;
                    var_68 = var_8c_4 * var_68;
                    var_64 = var_8c_4 * var_64;
                    long double x87_r6_82 = var_64 + a1[2] - g_57c258;
                    long double x87_r5_106 = var_68 + a1[1] - g_57c254;
                    long double x87_r4_66 = var_6c + *a1 - g_57c250;
                    long double x87_r3_44 =
                        x87_r4_66 * x87_r4_66 + x87_r5_106 * x87_r5_106 + x87_r6_82 * x87_r6_82;
                    long double x87_r5_108 = var_7c_1;
                    x87_r5_108 - x87_r3_44;

                    if (!(*(&((x87_r5_108 < x87_r3_44 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_108, x87_r3_44) ? 1 : 0) << 0xa
                            | (x87_r5_108 == x87_r3_44 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                        var_7c_1 = x87_r3_44;
                }
            }

            var_7c = sqrtl(var_7c_1) * 0.000195312503f;
            long double x87_r6_88 = 0f;
            long double temp57_1 = var_7c;
            x87_r6_88 - temp57_1;

            if (*(&((x87_r6_88 < temp57_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_88, temp57_1) ? 1 : 0) << 0xa
                | (x87_r6_88 == temp57_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_89 = 1f;
                long double temp60_1 = var_7c;
                x87_r6_89 - temp60_1;

                if (*(&((x87_r6_89 < temp60_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_89, temp60_1) ? 1 : 0) << 0xa
                        | (x87_r6_89 == temp60_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    var_7c = 1f;
            }
            else
                var_7c = 0f;

            long double x87_r6_90 = var_8;
            long double x87_r5_109 = var_78;
            long double x87_r4_68 = var_18;
            float var_5c_3 =
                sqrtl(x87_r6_90 * x87_r6_90 + x87_r4_68 * x87_r4_68 + x87_r5_109 * x87_r5_109);
            float var_8c_5 = 1f / var_5c_3;
            float var_24_6 = var_78 * var_8c_5;
            long double x87_r4_72 = var_1c;
            long double x87_r3_47 = var_c;
            long double x87_r2_47 = var_48;
            float var_4c_3 =
                sqrtl(x87_r2_47 * x87_r2_47 + x87_r3_47 * x87_r3_47 + x87_r4_72 * x87_r4_72);
            long double x87_r4_76 = 1f / var_4c_3;
            var_48 = x87_r4_76 * var_48;
            float var_44_1 = x87_r4_76 * var_c;
            float var_40_1 = x87_r4_76 * var_1c;
            long double x87_r6_94 = (var_24_6 * var_40_1 + var_18 * var_8c_5 * var_44_1
                + x87_r6_90 * var_8c_5 * var_48) * var_5c_3;
            float var_8c_6 = x87_r6_94;
            long double temp62_1 = 0f;
            x87_r6_94 - temp62_1;

            if (!(*(&((x87_r6_94 < temp62_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_94, temp62_1) ? 1 : 0) << 0xa
                | (x87_r6_94 == temp62_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_95 = var_8c_6;
                long double temp65_1 = var_4c_3;
                x87_r6_95 - temp65_1;

                if (*(&((x87_r6_95 < temp65_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_95, temp65_1) ? 1 : 0) << 0xa
                    | (x87_r6_95 == temp65_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double x87_r6_103 = var_8c_6 * var_40_1 + a2[2] - g_57c258;
                    long double x87_r5_124 = var_8c_6 * var_44_1 + a2[1] - g_57c254;
                    long double x87_r4_83 = var_8c_6 * var_48 + *a2 - g_57c250;
                    float var_78_2 =
                        x87_r4_83 * x87_r4_83 + x87_r5_124 * x87_r5_124 + x87_r6_103 * x87_r6_103;
                    long double temp68_1 = var_78_2;
                    x87_r7_5 - temp68_1;

                    if (!(*(&((x87_r7_5 < temp68_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_5, temp68_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == temp68_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        x87_r7_5 = var_78_2;
                }
            }

            var_8c = sqrtl(x87_r7_5) * 0.000195312503f;
            long double x87_r7_9 = 0f;
            long double temp64_1 = var_8c;
            x87_r7_9 - temp64_1;

            if (*(&((x87_r7_9 < temp64_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_9, temp64_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp64_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                long double x87_r7_10 = 1f;
                long double temp67_1 = var_8c;
                x87_r7_10 - temp67_1;

                if (*(&((x87_r7_10 < temp67_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, temp67_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == temp67_1 ? 1 : 0) << 0xe) + 1) & 1)
                    var_8c = 1f;
            }
            else
                var_8c = 0f;
        }
        else
        {
            long double x87_r5_62 = x87_r5_44 + x87_r6_26;
            long double temp28_1 = 1f;
            x87_r5_62 - temp28_1;

            if (!(*(&((x87_r5_62 < temp28_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_62, temp28_1) ? 1 : 0) << 0xa
                    | (x87_r5_62 == temp28_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) || !ecx)
                goto label_44abbc;
        }
    }
    else
    {
        long double x87_r6_19 = g_57c268;
        long double temp3_1 = 0f;
        x87_r6_19 - temp3_1;
        long double x87_r6_20 = g_57c268;

        if (*(&((x87_r6_19 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_19 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_20 = -(x87_r6_20);

        long double x87_r5_29 = g_57c260;
        long double temp5_1 = 0f;
        x87_r5_29 - temp5_1;
        long double x87_r5_30 = g_57c260;

        if (*(&((x87_r5_29 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_29, temp5_1) ? 1 : 0) << 0xa
                | (x87_r5_29 == temp5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_30 = -(x87_r5_30);

        x87_r6_20 - x87_r5_30;

        if (*(&((x87_r6_20 < x87_r5_30 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_20, x87_r5_30) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r5_30 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_25 = var_64 * var_84 - var_68 * var_80;
            long double temp8_1 = 0f;
            x87_r6_25 - temp8_1;

            if (*(&((x87_r6_25 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_25, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r6_25 == temp8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                ecx = 0;

            long double x87_r5_36 = var_70 * var_84 - var_30 * var_80;
            x87_r6_26 = x87_r5_36 / x87_r5_36;
            long double temp11_1 = 0f;
            x87_r6_26 - temp11_1;
            long double temp14_1;

            if (!(*(&((x87_r6_26 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_26, temp11_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == temp11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                temp14_1 = 1f;
                x87_r6_26 - temp14_1;
            }

            if (*(&((x87_r6_26 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_26, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r6_26 == temp11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                    (x87_r6_26 < temp14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_26, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r6_26 == temp14_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                ecx = 0;

            long double x87_r5_37 = var_84;
            long double temp17_1 = 0f;
            x87_r5_37 - temp17_1;
            long double x87_r5_38 = var_84;

            if (*(&((x87_r5_37 < temp17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_37, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r5_37 == temp17_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_38 = -(x87_r5_38);

            long double x87_r4_21 = var_80;
            long double temp20_1 = 0f;
            x87_r4_21 - temp20_1;
            long double x87_r4_22 = var_80;

            if (*(&((x87_r4_21 < temp20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_21, temp20_1) ? 1 : 0) << 0xa
                    | (x87_r4_21 == temp20_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                x87_r4_22 = -(x87_r4_22);

            x87_r5_38 - x87_r4_22;

            if (!(*(&((x87_r5_38 < x87_r4_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_38, x87_r4_22) ? 1 : 0) << 0xa
                | (x87_r5_38 == x87_r4_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
            {
                x87_r5_44 = (var_30 - x87_r6_26 * var_68) / var_84;
                goto label_44aaa6;
            }

            long double x87_r5_45 = var_80;
            long double temp23_1 = 0f;
            x87_r5_45 - temp23_1;

            if (*(&((x87_r5_45 < temp23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_45, temp23_1) ? 1 : 0) << 0xa
                    | (x87_r5_45 == temp23_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                goto label_44aa96;

            x87_r5_44 = (var_70 - x87_r6_26 * var_64) / var_80;
            goto label_44aaa6;
        }

        long double x87_r6_33 = var_68 * var_88 - var_6c * var_84;
        long double temp7_1 = 0f;
        x87_r6_33 - temp7_1;

        if (*(&((x87_r6_33 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_33, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_33 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
            ecx = 0;

        long double x87_r5_67 = var_30 * var_88 - var_20 * var_84;
        x87_r6_26 = x87_r5_67 / x87_r5_67;
        long double temp10_1 = 0f;
        x87_r6_26 - temp10_1;
        long double temp13_1;

        if (!(*(&((x87_r6_26 < temp10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_26, temp10_1) ? 1 : 0) << 0xa
            | (x87_r6_26 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            temp13_1 = 1f;
            x87_r6_26 - temp13_1;
        }

        if (*(&((x87_r6_26 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, temp10_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                (x87_r6_26 < temp13_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, temp13_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == temp13_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            ecx = 0;

        long double x87_r5_68 = var_88;
        long double temp16_1 = 0f;
        x87_r5_68 - temp16_1;
        long double x87_r5_69 = var_88;

        if (*(&((x87_r5_68 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_68, temp16_1) ? 1 : 0) << 0xa
                | (x87_r5_68 == temp16_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_69 = -(x87_r5_69);

        long double x87_r4_31 = var_84;
        long double temp19_1 = 0f;
        x87_r4_31 - temp19_1;
        long double x87_r4_32 = var_84;

        if (*(&((x87_r4_31 < temp19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_31, temp19_1) ? 1 : 0) << 0xa
                | (x87_r4_31 == temp19_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
            x87_r4_32 = -(x87_r4_32);

        x87_r5_69 - x87_r4_32;

        if (*(&((x87_r5_69 < x87_r4_32 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_69, x87_r4_32) ? 1 : 0) << 0xa
            | (x87_r5_69 == x87_r4_32 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_75 = var_84;
            long double temp22_1 = 0f;
            x87_r5_75 - temp22_1;

            if (*(&((x87_r5_75 < temp22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_75, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r5_75 == temp22_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                ecx = 0;

            x87_r5_44 = (var_30 - x87_r6_26 * var_68) / var_84;
        }
        else
            x87_r5_44 = (var_20 - x87_r6_26 * var_6c) / var_88;

        long double temp25_1 = 0f;
        x87_r5_44 - temp25_1;

        if (*(&((x87_r5_44 < temp25_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, temp25_1) ? 1 : 0) << 0xa
                | (x87_r5_44 == temp25_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            goto label_44abbc;

        long double x87_r5_79 = x87_r5_44 + x87_r6_26;
        long double temp27_1 = 1f;
        x87_r5_79 - temp27_1;

        if (!(*(&((x87_r5_79 < temp27_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_79, temp27_1) ? 1 : 0) << 0xa
                | (x87_r5_79 == temp27_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) || !ecx)
            goto label_44abbc;
    }
    long double x87_r7_14 = var_60 * 4505.6001f + 409.600006f;
    float var_78_3 = var_7c * 4505.6001f + 409.600006f;
    float var_18_1 = var_8c * 4505.6001f + 409.600006f;
    long double x87_r6_112 = x87_r7_14 * x87_r7_14;
    long double x87_r5_126 = var_38;
    x87_r5_126 - x87_r6_112;

    if (!(*(&((x87_r5_126 < x87_r6_112 ? 1 : 0) << 8
        | (FCMP_UO(x87_r5_126, x87_r6_112) ? 1 : 0) << 0xa
        | (x87_r5_126 == x87_r6_112 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
    label_44b1e0:
        sub_4b4770(0x57c230);
        long double x87_r7_22 = var_38;
        long double temp29_1 = var_34;
        x87_r7_22 - temp29_1;

        if (!(*(&((x87_r7_22 < temp29_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_22, temp29_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp29_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_23 = var_38;
            long double temp33_1 = var_3c;
            x87_r7_23 - temp33_1;

            if (!(*(&((x87_r7_23 < temp33_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, temp33_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp33_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_24 = var_3c;
                long double temp37 = var_34;
                x87_r7_24 - temp37;
                long double x87_r7_33;

                if (!(*(&((x87_r7_24 < temp37 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, temp37) ? 1 : 0) << 0xa
                    | (x87_r7_24 == temp37 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_39 = 1f - sqrtl(var_34) / sqrtl(var_38);
                    long double temp42_1 = 0.5f;
                    x87_r7_39 - temp42_1;
                    float var_78_5;

                    var_78_5 = *(&((x87_r7_39 < temp42_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_39, temp42_1) ? 1 : 0) << 0xa
                        | (x87_r7_39 == temp42_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : x87_r7_39;

                    x87_r7_33 = var_78_5 - sub_4b4770(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double x87_r7_29 = sqrtl(var_3c) / sqrtl(var_38);
                    long double temp43_1 = 0.5f;
                    x87_r7_29 - temp43_1;
                    float var_78_4;

                    var_78_4 = !(*(&((x87_r7_29 < temp43_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_29, temp43_1) ? 1 : 0) << 0xa
                        | (x87_r7_29 == temp43_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : x87_r7_29;

                    x87_r7_33 = sub_4b4770(0x57c230) * 0.100000001f + var_78_4;
                }

                var_48 = (*a2 - *a1) * x87_r7_33 + *a1;
                float var_44_3 = (a2[1] - a1[1]) * x87_r7_33 + a1[1];
                float var_40_3 = (a2[2] - a1[2]) * x87_r7_33 + a1[2];
                sub_44a670(a2, a3, &var_48);
                return sub_44a670(&var_48, a3, a1);
            }
        }

        long double x87_r7_44 = var_34;
        long double temp32_1 = var_38;
        x87_r7_44 - temp32_1;

        if (!(*(&((x87_r7_44 < temp32_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_44, temp32_1) ? 1 : 0) << 0xa
            | (x87_r7_44 == temp32_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_45 = var_34;
            long double temp36_1 = var_3c;
            x87_r7_45 - temp36_1;

            if (!(*(&((x87_r7_45 < temp36_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_45, temp36_1) ? 1 : 0) << 0xa
                | (x87_r7_45 == temp36_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_46 = var_38;
                long double temp41 = var_3c;
                x87_r7_46 - temp41;
                long double x87_r7_55;

                if (!(*(&((x87_r7_46 < temp41 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_46, temp41) ? 1 : 0) << 0xa
                    | (x87_r7_46 == temp41 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_61 = 1f - sqrtl(var_3c) / sqrtl(var_34);
                    long double temp49_1 = 0.5f;
                    x87_r7_61 - temp49_1;
                    float var_78_7;

                    var_78_7 = *(&((x87_r7_61 < temp49_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_61, temp49_1) ? 1 : 0) << 0xa
                        | (x87_r7_61 == temp49_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : x87_r7_61;

                    x87_r7_55 = var_78_7 - sub_4b4770(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double x87_r7_51 = sqrtl(var_38) / sqrtl(var_34);
                    long double temp50_1 = 0.5f;
                    x87_r7_51 - temp50_1;
                    float var_78_6;

                    var_78_6 = !(*(&((x87_r7_51 < temp50_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_51, temp50_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == temp50_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : x87_r7_51;

                    x87_r7_55 = sub_4b4770(0x57c230) * 0.100000001f + var_78_6;
                }

                var_48 = (*a3 - *a2) * x87_r7_55 + *a2;
                float var_44_4 = (a3[1] - a2[1]) * x87_r7_55 + a2[1];
                float var_40_4 = (a3[2] - a2[2]) * x87_r7_55 + a2[2];
                sub_44a670(a3, a1, &var_48);
                return sub_44a670(&var_48, a1, a2);
            }
        }

        long double x87_r7_66 = var_3c;
        long double temp35_1 = var_38;
        x87_r7_66 - temp35_1;

        if (!(*(&((x87_r7_66 < temp35_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_66, temp35_1) ? 1 : 0) << 0xa
            | (x87_r7_66 == temp35_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_67 = var_3c;
            long double temp40_1 = var_34;
            x87_r7_67 - temp40_1;

            if (!(*(&((x87_r7_67 < temp40_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_67, temp40_1) ? 1 : 0) << 0xa
                | (x87_r7_67 == temp40_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_68 = var_34;
                long double temp48 = var_38;
                x87_r7_68 - temp48;
                long double x87_r7_77;

                if (!(*(&((x87_r7_68 < temp48 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_68, temp48) ? 1 : 0) << 0xa
                    | (x87_r7_68 == temp48 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_83 = 1f - sqrtl(var_38) / sqrtl(var_3c);
                    long double temp53_1 = 0.5f;
                    x87_r7_83 - temp53_1;
                    float var_78_9;

                    var_78_9 = *(&((x87_r7_83 < temp53_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_83, temp53_1) ? 1 : 0) << 0xa
                        | (x87_r7_83 == temp53_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : x87_r7_83;

                    x87_r7_77 = var_78_9 - sub_4b4770(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double x87_r7_73 = sqrtl(var_34) / sqrtl(var_3c);
                    long double temp54_1 = 0.5f;
                    x87_r7_73 - temp54_1;
                    float var_78_8;

                    var_78_8 = !(*(&((x87_r7_73 < temp54_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_73, temp54_1) ? 1 : 0) << 0xa
                        | (x87_r7_73 == temp54_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : x87_r7_73;

                    x87_r7_77 = sub_4b4770(0x57c230) * 0.100000001f + var_78_8;
                }

                var_48 = (*a1 - *a3) * x87_r7_77 + *a3;
                float var_44_5 = (a1[1] - a3[1]) * x87_r7_77 + a3[1];
                float var_40_5 = (a1[2] - a3[2]) * x87_r7_77 + a3[2];
                sub_44a670(a1, a2, &var_48);
                return sub_44a670(&var_48, a2, a3);
            }
        }
    }
    else
    {
        long double x87_r7_17 = var_78_3 * var_78_3;
        long double temp30_1 = var_34;
        x87_r7_17 - temp30_1;

        if (*(&((x87_r7_17 < temp30_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp30_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp30_1 ? 1 : 0) << 0xe) + 1) & 1)
            goto label_44b1e0;

        long double x87_r7_19 = var_18_1 * var_18_1;
        long double temp34_1 = var_3c;
        x87_r7_19 - temp34_1;

        if (*(&((x87_r7_19 < temp34_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp34_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == temp34_1 ? 1 : 0) << 0xe) + 1) & 1)
            goto label_44b1e0;
    }

    int32_t eax_14 = g_57c244;
    void* result;
    void* ecx_28;

    if (!eax_14)
    {
        long double x87_r7_147 = var_7c;
        long double temp44_1 = var_8c;
        x87_r7_147 - temp44_1;
        long double x87_r7_148;

        x87_r7_148 = !(*(&((x87_r7_147 < temp44_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_147, temp44_1) ? 1 : 0) << 0xa
            | (x87_r7_147 == temp44_1 ? 1 : 0) << 0xe) + 1) & 1) ? var_8c : var_7c;

        long double x87_r6_190 = var_60;
        x87_r6_190 - x87_r7_148;
        float var_70_2;

        if (!(*(&((x87_r6_190 < x87_r7_148 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_190, x87_r7_148) ? 1 : 0) << 0xa
            | (x87_r6_190 == x87_r7_148 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r7_150 = var_7c;
            long double temp56_1 = var_8c;
            x87_r7_150 - temp56_1;

            var_70_2 = !(*(&((x87_r7_150 < temp56_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_150, temp56_1) ? 1 : 0) << 0xa
                | (x87_r7_150 == temp56_1 ? 1 : 0) << 0xe) + 1) & 1) ? var_8c : var_7c;
        }
        else
            var_70_2 = var_60;

        result = g_57c25c;

        if (*(result + 0xb8) < 0x3e8)
        {
            float* ecx_31 = g_57c27c + 0x24;
            float var_58_6 = (*a1 + *a2 + *a3) * 0.333333343f;
            float var_54_6 = (a2[1] + a1[1] + a3[1]) * 0.333333343f;
            long double x87_r7_161 = a2[2] + a1[2] + a3[2];
            *ecx_31 = *a1;
            ecx_31[1] = a1[1];
            ecx_31[2] = a1[2];
            float* eax_48 = g_57c27c + 0x30;
            *eax_48 = *a2;
            eax_48[1] = a2[1];
            float var_50_3 = x87_r7_161 * 0.333333343f;
            eax_48[2] = a2[2];
            float* edx_34 = g_57c27c + 0x3c;
            *edx_34 = *a3;
            edx_34[1] = a3[1];
            edx_34[2] = a3[2];
            var_78_3 = (sub_4b4770(0x57c230) + 1f - var_70_2) * 0.5f * 30f;
            *(g_57c27c + 0x48) = var_78_3;
            int32_t* eax_52 = g_57c27c + 0x18;
            *eax_52 = var_58_6;
            eax_52[1] = var_54_6;
            eax_52[2] = var_50_3;
            int32_t* edx_37 = g_57c228;
            int32_t* eax_53 = g_57c27c;
            *eax_53 = *edx_37;
            eax_53[1] = edx_37[1];
            eax_53[2] = edx_37[2];
            int32_t* eax_54 = g_57c27c;
            eax_54[3] = *eax_54;
            eax_54[4] = eax_54[1];
            eax_54[5] = eax_54[2];
            long double x87_r7_167 = g_57c23c;
            long double temp61_1 = 0f;
            x87_r7_167 - temp61_1;

            if (*(&((x87_r7_167 < temp61_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_167, temp61_1) ? 1 : 0) << 0xa
                | (x87_r7_167 == temp61_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *(g_57c27c + 0x4c) = 0;
                *(g_57c27c + 0x50) = 0;
                *(g_57c27c + 0x54) = 0;
            }
            else
            {
                *(g_57c27c + 0x4c) = var_58_6 - g_57c270;
                *(g_57c27c + 0x50) = var_54_6 - g_57c274;
                *(g_57c27c + 0x54) = var_50_3 - g_57c278;
                void* eax_58 = g_57c27c;
                long double x87_r7_174 = *(eax_58 + 0x54);
                long double x87_r6_193 = *(eax_58 + 0x50);
                long double x87_r5_129 = *(eax_58 + 0x4c);
                long double x87_r7_176 = g_57c23c / sqrtl(x87_r5_129 * x87_r5_129
                    + x87_r6_193 * x87_r6_193 + x87_r7_174 * x87_r7_174);
                *(eax_58 + 0x4c) = *(eax_58 + 0x4c) * x87_r7_176;
                void* eax_59 = g_57c27c;
                *(eax_59 + 0x50) = *(eax_59 + 0x50) * x87_r7_176;
                void* eax_60 = g_57c27c;
                *(eax_60 + 0x54) = *(eax_60 + 0x54) * x87_r7_176;
            }

            float* esi_4 = g_57c27c + 0x4c;
            *esi_4 = (sub_4b4770(0x57c230) * 4096f - 2048f) * 0.0333333351f + *esi_4;
            float* esi_5 = g_57c27c + 0x50;
            *esi_5 = (sub_4b4770(0x57c230) * 4096f - 2048f) * 0.0333333351f + *esi_5;
            float* esi_6 = g_57c27c + 0x54;
            *esi_6 = (sub_4b4770(0x57c230) * 4096f - 2048f) * 0.0333333351f + *esi_6;
            *(g_57c27c + 0x5c) = 1;
            **&g_57c26c = g_57c27c + 0x24;
            *(g_57c26c + 4) = g_57c27c + 0x30;
            *(g_57c26c + 8) = g_57c27c + 0x3c;
            *(g_57c26c + 0xc) = g_57c27c + 0xc;
            *(g_57c26c + 0x10) = g_57c27c + 0xc;
            *(g_57c26c + 0x14) = g_57c27c + 0xc;
            *(g_57c26c + 0x48) = 0;
            *(g_57c26c + 0x4c) = 0;
            float* ecx_52 = g_57c26c + 0x3c;
            *ecx_52 = var_64 * var_84 - var_68 * var_80;
            ecx_52[1] = -((var_64 * var_88 - var_6c * var_80));
            ecx_52[2] = var_68 * var_88 - var_6c * var_84;
            ecx_28 = g_57c26c;
            long double x87_r7_203 = *(ecx_28 + 0x3c);
            long double temp66_1 = 0f;
            x87_r7_203 - temp66_1;

            if (*(&((x87_r7_203 < temp66_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_203, temp66_1) ? 1 : 0) << 0xa
                | (x87_r7_203 == temp66_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                long double x87_r7_204 = *(ecx_28 + 0x40);
                long double temp69_1 = 0f;
                x87_r7_204 - temp69_1;

                if (!(*(&((x87_r7_204 < temp69_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_204, temp69_1) ? 1 : 0) << 0xa
                        | (x87_r7_204 == temp69_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_44bceb;

                long double x87_r7_205 = *(ecx_28 + 0x44);
                long double temp71_1 = 0f;
                x87_r7_205 - temp71_1;

                if (*(&((x87_r7_205 < temp71_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_205, temp71_1) ? 1 : 0) << 0xa
                        | (x87_r7_205 == temp71_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    goto label_44bd42;

                goto label_44bceb;
            }

        label_44bceb:
            long double x87_r7_206 = *(ecx_28 + 0x44);
            long double x87_r6_207 = *(ecx_28 + 0x40);
            long double x87_r5_131 = *(ecx_28 + 0x3c);
            long double x87_r7_208 = 1.0 /
                sqrtl(x87_r5_131 * x87_r5_131 + x87_r6_207 * x87_r6_207 + x87_r7_206 * x87_r7_206);
            *(ecx_28 + 0x3c) = *(ecx_28 + 0x3c) * x87_r7_208;
            void* eax_72 = g_57c26c;
            *(eax_72 + 0x40) = *(eax_72 + 0x40) * x87_r7_208;
            void* eax_73 = g_57c26c;
            *(eax_73 + 0x44) = *(eax_73 + 0x44) * x87_r7_208;
            ecx_28 = g_57c26c;
        label_44bd42:
            result = g_57c25c;
            g_57c27c += 0x60;
            g_57c26c = ecx_28 + 0x50;
            *(result + 0xb8) += 1;
        }
    }
    else
    {
        result = eax_14 - 1;

        if (eax_14 == 1)
        {
            long double x87_r7_88 = var_7c;
