#include "Env_ActivateEntity_11.h"
void* Env_ActivateEntity_11(float* a1, float* a2, float* a3)

{
    long double x87_r7_1 = g_57c258 - a1[2];
    float v_60 = 0f;
    float v_7c = 0f;
    float v_8c = 0f;
    float v_70 = x87_r7_1;
    long double x87_r6_1 = g_57c254 - a1[1];
    float v_30 = x87_r6_1;
    long double x87_r5_1 = g_57c250 - *a1;
    float v_20 = x87_r5_1;
    long double x87_r4_3 = x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1;
    long double x87_r6_4 = g_57c258 - a2[2];
    float v_78 = x87_r6_4;
    long double x87_r5_4 = g_57c254 - a2[1];
    float v_18 = x87_r5_4;
    long double x87_r4_5 = g_57c250 - *a2;
    float v_8 = x87_r4_5;
    float v_5c = x87_r4_5 * x87_r4_5 + x87_r5_4 * x87_r5_4 + x87_r6_4 * x87_r6_4;
    long double x87_r6_7 = g_57c258 - a3[2];
    long double x87_r5_7 = g_57c254 - a3[1];
    long double x87_r4_8 = g_57c250 - *a3;
    float v_4c = x87_r4_8 * x87_r4_8 + x87_r5_7 * x87_r5_7 + x87_r6_7 * x87_r6_7;
    long double x87_r6_10 = a2[2] - a1[2];
    long double x87_r4_11 = a2[1] - a1[1];
    float v_4 = x87_r4_11;
    long double x87_r3_13 = *a2 - *a1;
    float v_38 = x87_r3_13 * x87_r3_13 + x87_r4_11 * x87_r4_11 + x87_r6_10 * x87_r6_10;
    long double x87_r5_12 = a3[2] - a2[2];
    float v_1c = x87_r5_12;
    long double x87_r4_14 = a3[1] - a2[1];
    float v_c = x87_r4_14;
    long double x87_r3_16 = *a3 - *a2;
    float v_34 = x87_r4_14 * x87_r4_14 + x87_r5_12 * x87_r5_12 + x87_r3_16 * x87_r3_16;
    long double x87_r5_15 = a1[2] - a3[2];
    long double x87_r4_17 = a1[1] - a3[1];
    long double x87_r3_19 = *a1 - *a3;
    float v_6c = x87_r3_13;
    float v_48 = x87_r3_16;
    float v_3c = x87_r3_19 * x87_r3_19 + x87_r4_17 * x87_r4_17 + x87_r5_15 * x87_r5_15;
    char objC = 1;
    float v_68 = v_4;
    float v_88 = *a3 - *a1;
    float v_84 = a3[1] - a1[1];
    float v_80 = a3[2] - a1[2];
    float v_64 = x87_r6_10;
    long double x87_r6_11 = g_57c264;
    long double f1 = 0f;
    x87_r6_11 - f1;
    long double x87_r6_12 = g_57c264;

    if (1 & *(&((x87_r6_11 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_11, f1) ? 1 : 0) << 0xa
            | (x87_r6_11 == f1 ? 1 : 0) << 0xe | 0x3000) + 1))
        x87_r6_12 = -(x87_r6_12);

    long double x87_r5_23 = g_57c260;
    long double f2 = 0f;
    x87_r5_23 - f2;
    long double x87_r5_24 = g_57c260;

    if (*(&((x87_r5_23 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_23, f2) ? 1 : 0) << 0xa
            | (x87_r5_23 == f2 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        x87_r5_24 = -(x87_r5_24);

    x87_r6_12 - x87_r5_24;
    long double x87_r5_27;
    long double x87_r6_16;

    if (!(*(&((x87_r6_12 < x87_r5_24 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r5_24) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r5_24 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double x87_r6_15 = g_57c264;
        long double f4_1 = 0f;
        x87_r6_15 - f4_1;
        x87_r6_16 = g_57c264;

        if (*(&((x87_r6_15 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_15, f4_1) ? 1 : 0) << 0xa
                | (x87_r6_15 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_16 = -(x87_r6_16);

        long double x87_r5_26 = g_57c268;
        long double f6_1 = 0f;
        x87_r5_26 - f6_1;
        x87_r5_27 = g_57c268;

        if (*(&((x87_r5_26 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_26, f6_1) ? 1 : 0) << 0xa
                | (x87_r5_26 == f6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
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
        long double x87_r6_29 = v_64 * v_88 - v_6c * v_80;
        long double f9_1 = 0f;
        x87_r6_29 - f9_1;

        if (*(&((x87_r6_29 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_29, f9_1) ? 1 : 0) << 0xa
                | (x87_r6_29 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
            objC = 0;

        long double x87_r5_50 = v_70 * v_88 - v_20 * v_80;
        x87_r6_26 = x87_r5_50 / x87_r5_50;
        long double f12_1 = 0f;
        x87_r6_26 - f12_1;
        long double f15_1;

        if (!(*(&((x87_r6_26 < f12_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_26, f12_1) ? 1 : 0) << 0xa
            | (x87_r6_26 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            f15_1 = 1f;
            x87_r6_26 - f15_1;
        }

        if (*(&((x87_r6_26 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, f12_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                (x87_r6_26 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, f15_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            objC = 0;

        long double x87_r5_51 = v_88;
        long double f18_1 = 0f;
        x87_r5_51 - f18_1;
        long double x87_r5_52 = v_88;

        if (*(&((x87_r5_51 < f18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_51, f18_1) ? 1 : 0) << 0xa
                | (x87_r5_51 == f18_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_52 = -(x87_r5_52);

        long double x87_r4_26 = v_80;
        long double f21_1 = 0f;
        x87_r4_26 - f21_1;
        long double x87_r4_27 = v_80;

        if (*(&((x87_r4_26 < f21_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_26, f21_1) ? 1 : 0) << 0xa
                | (x87_r4_26 == f21_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
            x87_r4_27 = -(x87_r4_27);

        x87_r5_52 - x87_r4_27;

        if (*(&((x87_r5_52 < x87_r4_27 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_52, x87_r4_27) ? 1 : 0) << 0xa
            | (x87_r5_52 == x87_r4_27 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_58 = v_80;
            long double f24_1 = 0f;
            x87_r5_58 - f24_1;

            if (!(*(&((x87_r5_58 < f24_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_58, f24_1) ? 1 : 0) << 0xa
                | (x87_r5_58 == f24_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            {
                x87_r5_44 = (v_70 - x87_r6_26 * v_64) / v_80;
                goto label_44aaa6;
            }

        label_44aa96:
            objC = 0;
            x87_r5_44 = (v_70 - x87_r6_26 * v_64) / v_80;
            goto label_44aaa6;
        }

        x87_r5_44 = (v_20 - x87_r6_26 * v_6c) / v_88;
    label_44aaa6:
        long double f26_1 = 0f;
        x87_r5_44 - f26_1;

        if (*(&((x87_r5_44 < f26_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, f26_1) ? 1 : 0) << 0xa
            | (x87_r5_44 == f26_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        {
        label_44abbc:
            long double x87_r6_36 = v_4c;
            x87_r6_36 - x87_r4_3;
            float v_60_1;

            v_60_1 = !(*(&((x87_r6_36 < x87_r4_3 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_36, x87_r4_3) ? 1 : 0) << 0xa
                | (x87_r6_36 == x87_r4_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? x87_r4_3 : v_4c;

            long double x87_r6_37 = v_5c;
            x87_r6_37 - x87_r4_3;
            float v_7c_1;

            v_7c_1 = !(*(&((x87_r6_37 < x87_r4_3 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_37, x87_r4_3) ? 1 : 0) << 0xa
                | (x87_r6_37 == x87_r4_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? x87_r4_3 : v_5c;

            long double x87_r7_4 = v_4c;
            long double f31_1 = v_5c;
            x87_r7_4 - f31_1;
            long double x87_r7_5;

            x87_r7_5 = !(*(&((x87_r7_4 < f31_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_4, f31_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f31_1 ? 1 : 0) << 0xe) + 1) & 1) ? v_5c : v_4c;

            long double x87_r6_38 = v_20;
            long double x87_r5_81 = v_70;
            long double x87_r4_34 = v_30;
            float v_5c_1 =
                sqrtl(x87_r6_38 * x87_r6_38 + x87_r4_34 * x87_r4_34 + x87_r5_81 * x87_r5_81);
            float v_8c_1 = 1f / v_5c_1;
            long double x87_r4_38 = v_80;
            long double x87_r3_23 = v_84;
            long double x87_r2_25 = v_88;
            float v_4c_1 =
                sqrtl(x87_r2_25 * x87_r2_25 + x87_r3_23 * x87_r3_23 + x87_r4_38 * x87_r4_38);
            long double x87_r4_42 = 1f / v_4c_1;
            v_88 = x87_r4_42 * v_88;
            v_84 = x87_r4_42 * v_84;
            v_80 = x87_r4_42 * v_80;
            long double x87_r6_42 = (v_70 * v_8c_1 * v_80 + v_30 * v_8c_1 * v_84
                + x87_r6_38 * v_8c_1 * v_88) * v_5c_1;
            float v_8c_2 = x87_r6_42;
            long double f39_1 = 0f;
            x87_r6_42 - f39_1;

            if (!(*(&((x87_r6_42 < f39_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_42, f39_1) ? 1 : 0) << 0xa
                | (x87_r6_42 == f39_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_43 = v_8c_2;
                long double f47_1 = v_4c_1;
                x87_r6_43 - f47_1;

                if (*(&((x87_r6_43 < f47_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_43, f47_1) ? 1 : 0) << 0xa
                    | (x87_r6_43 == f47_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    v_88 = v_8c_2 * v_88;
                    v_84 = v_8c_2 * v_84;
                    v_80 = v_8c_2 * v_80;
                    long double x87_r6_56 = v_80 + a1[2] - g_57c258;
                    long double x87_r5_92 = v_84 + a1[1] - g_57c254;
                    long double x87_r4_49 = v_88 + *a1 - g_57c250;
                    long double x87_r3_32 =
                        x87_r4_49 * x87_r4_49 + x87_r5_92 * x87_r5_92 + x87_r6_56 * x87_r6_56;
                    long double x87_r5_94 = v_60_1;
                    x87_r5_94 - x87_r3_32;

                    if (!(*(&((x87_r5_94 < x87_r3_32 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_94, x87_r3_32) ? 1 : 0) << 0xa
                            | (x87_r5_94 == x87_r3_32 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                        v_60_1 = x87_r3_32;
                }
            }

            v_60 = sqrtl(v_60_1) * 0.000195312503f;
            long double x87_r6_62 = 0f;
            long double f46_1 = v_60;
            x87_r6_62 - f46_1;

            if (*(&((x87_r6_62 < f46_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_62, f46_1) ? 1 : 0) << 0xa
                | (x87_r6_62 == f46_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_63 = 1f;
                long double f52_1 = v_60;
                x87_r6_63 - f52_1;

                if (*(&((x87_r6_63 < f52_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_63, f52_1) ? 1 : 0) << 0xa
                        | (x87_r6_63 == f52_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    v_60 = 1f;
            }
            else
                v_60 = 0f;

            long double x87_r6_64 = v_20;
            long double x87_r5_95 = v_70;
            long double x87_r4_51 = v_30;
            float v_5c_2 =
                sqrtl(x87_r6_64 * x87_r6_64 + x87_r4_51 * x87_r4_51 + x87_r5_95 * x87_r5_95);
            float v_8c_3 = 1f / v_5c_2;
            long double x87_r4_55 = v_64;
            long double x87_r3_35 = v_68;
            long double x87_r2_36 = v_6c;
            float v_4c_2 =
                sqrtl(x87_r2_36 * x87_r2_36 + x87_r3_35 * x87_r3_35 + x87_r4_55 * x87_r4_55);
            long double x87_r4_59 = 1f / v_4c_2;
            v_6c = x87_r4_59 * v_6c;
            v_68 = x87_r4_59 * v_68;
            v_64 = x87_r4_59 * v_64;
            long double x87_r6_68 = (v_70 * v_8c_3 * v_64 + v_30 * v_8c_3 * v_68
                + x87_r6_64 * v_8c_3 * v_6c) * v_5c_2;
            float v_8c_4 = x87_r6_68;
            long double f55_1 = 0f;
            x87_r6_68 - f55_1;

            if (!(*(&((x87_r6_68 < f55_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_68, f55_1) ? 1 : 0) << 0xa
                | (x87_r6_68 == f55_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_69 = v_8c_4;
                long double f58_1 = v_4c_2;
                x87_r6_69 - f58_1;

                if (*(&((x87_r6_69 < f58_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_69, f58_1) ? 1 : 0) << 0xa
                    | (x87_r6_69 == f58_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    v_6c = v_8c_4 * v_6c;
                    v_68 = v_8c_4 * v_68;
                    v_64 = v_8c_4 * v_64;
                    long double x87_r6_82 = v_64 + a1[2] - g_57c258;
                    long double x87_r5_106 = v_68 + a1[1] - g_57c254;
                    long double x87_r4_66 = v_6c + *a1 - g_57c250;
                    long double x87_r3_44 =
                        x87_r4_66 * x87_r4_66 + x87_r5_106 * x87_r5_106 + x87_r6_82 * x87_r6_82;
                    long double x87_r5_108 = v_7c_1;
                    x87_r5_108 - x87_r3_44;

                    if (!(*(&((x87_r5_108 < x87_r3_44 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_108, x87_r3_44) ? 1 : 0) << 0xa
                            | (x87_r5_108 == x87_r3_44 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                        v_7c_1 = x87_r3_44;
                }
            }

            v_7c = sqrtl(v_7c_1) * 0.000195312503f;
            long double x87_r6_88 = 0f;
            long double f57_1 = v_7c;
            x87_r6_88 - f57_1;

            if (*(&((x87_r6_88 < f57_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_88, f57_1) ? 1 : 0) << 0xa
                | (x87_r6_88 == f57_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_89 = 1f;
                long double f60_1 = v_7c;
                x87_r6_89 - f60_1;

                if (*(&((x87_r6_89 < f60_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_89, f60_1) ? 1 : 0) << 0xa
                        | (x87_r6_89 == f60_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    v_7c = 1f;
            }
            else
                v_7c = 0f;

            long double x87_r6_90 = v_8;
            long double x87_r5_109 = v_78;
            long double x87_r4_68 = v_18;
            float v_5c_3 =
                sqrtl(x87_r6_90 * x87_r6_90 + x87_r4_68 * x87_r4_68 + x87_r5_109 * x87_r5_109);
            float v_8c_5 = 1f / v_5c_3;
            float v_24_6 = v_78 * v_8c_5;
            long double x87_r4_72 = v_1c;
            long double x87_r3_47 = v_c;
            long double x87_r2_47 = v_48;
            float v_4c_3 =
                sqrtl(x87_r2_47 * x87_r2_47 + x87_r3_47 * x87_r3_47 + x87_r4_72 * x87_r4_72);
            long double x87_r4_76 = 1f / v_4c_3;
            v_48 = x87_r4_76 * v_48;
            float v_44_1 = x87_r4_76 * v_c;
            float v_40_1 = x87_r4_76 * v_1c;
            long double x87_r6_94 = (v_24_6 * v_40_1 + v_18 * v_8c_5 * v_44_1
                + x87_r6_90 * v_8c_5 * v_48) * v_5c_3;
            float v_8c_6 = x87_r6_94;
            long double f62_1 = 0f;
            x87_r6_94 - f62_1;

            if (!(*(&((x87_r6_94 < f62_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_94, f62_1) ? 1 : 0) << 0xa
                | (x87_r6_94 == f62_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_95 = v_8c_6;
                long double f65_1 = v_4c_3;
                x87_r6_95 - f65_1;

                if (*(&((x87_r6_95 < f65_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_95, f65_1) ? 1 : 0) << 0xa
                    | (x87_r6_95 == f65_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double x87_r6_103 = v_8c_6 * v_40_1 + a2[2] - g_57c258;
                    long double x87_r5_124 = v_8c_6 * v_44_1 + a2[1] - g_57c254;
                    long double x87_r4_83 = v_8c_6 * v_48 + *a2 - g_57c250;
                    float v_78_2 =
                        x87_r4_83 * x87_r4_83 + x87_r5_124 * x87_r5_124 + x87_r6_103 * x87_r6_103;
                    long double f68_1 = v_78_2;
                    x87_r7_5 - f68_1;

                    if (!(*(&((x87_r7_5 < f68_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_5, f68_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == f68_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        x87_r7_5 = v_78_2;
                }
            }

            v_8c = sqrtl(x87_r7_5) * 0.000195312503f;
            long double x87_r7_9 = 0f;
            long double f64_1 = v_8c;
            x87_r7_9 - f64_1;

            if (*(&((x87_r7_9 < f64_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_9, f64_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f64_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                long double x87_r7_10 = 1f;
                long double f67_1 = v_8c;
                x87_r7_10 - f67_1;

                if (*(&((x87_r7_10 < f67_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, f67_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == f67_1 ? 1 : 0) << 0xe) + 1) & 1)
                    v_8c = 1f;
            }
            else
                v_8c = 0f;
        }
        else
        {
            long double x87_r5_62 = x87_r5_44 + x87_r6_26;
            long double f28_1 = 1f;
            x87_r5_62 - f28_1;

            if (!(*(&((x87_r5_62 < f28_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_62, f28_1) ? 1 : 0) << 0xa
                    | (x87_r5_62 == f28_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) || !objC)
                goto label_44abbc;
        }
    }
    else
    {
        long double x87_r6_19 = g_57c268;
        long double f3_1 = 0f;
        x87_r6_19 - f3_1;
        long double x87_r6_20 = g_57c268;

        if (*(&((x87_r6_19 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, f3_1) ? 1 : 0) << 0xa
                | (x87_r6_19 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_20 = -(x87_r6_20);

        long double x87_r5_29 = g_57c260;
        long double f5_1 = 0f;
        x87_r5_29 - f5_1;
        long double x87_r5_30 = g_57c260;

        if (*(&((x87_r5_29 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_29, f5_1) ? 1 : 0) << 0xa
                | (x87_r5_29 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_30 = -(x87_r5_30);

        x87_r6_20 - x87_r5_30;

        if (*(&((x87_r6_20 < x87_r5_30 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_20, x87_r5_30) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r5_30 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_25 = v_64 * v_84 - v_68 * v_80;
            long double f8_1 = 0f;
            x87_r6_25 - f8_1;

            if (*(&((x87_r6_25 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_25, f8_1) ? 1 : 0) << 0xa
                    | (x87_r6_25 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                objC = 0;

            long double x87_r5_36 = v_70 * v_84 - v_30 * v_80;
            x87_r6_26 = x87_r5_36 / x87_r5_36;
            long double f11_1 = 0f;
            x87_r6_26 - f11_1;
            long double f14_1;

            if (!(*(&((x87_r6_26 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_26, f11_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                f14_1 = 1f;
                x87_r6_26 - f14_1;
            }

            if (*(&((x87_r6_26 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_26, f11_1) ? 1 : 0) << 0xa
                    | (x87_r6_26 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                    (x87_r6_26 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_26, f14_1) ? 1 : 0) << 0xa
                    | (x87_r6_26 == f14_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                objC = 0;

            long double x87_r5_37 = v_84;
            long double f17_1 = 0f;
            x87_r5_37 - f17_1;
            long double x87_r5_38 = v_84;

            if (*(&((x87_r5_37 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_37, f17_1) ? 1 : 0) << 0xa
                    | (x87_r5_37 == f17_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_38 = -(x87_r5_38);

            long double x87_r4_21 = v_80;
            long double f20_1 = 0f;
            x87_r4_21 - f20_1;
            long double x87_r4_22 = v_80;

            if (*(&((x87_r4_21 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_21, f20_1) ? 1 : 0) << 0xa
                    | (x87_r4_21 == f20_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                x87_r4_22 = -(x87_r4_22);

            x87_r5_38 - x87_r4_22;

            if (!(*(&((x87_r5_38 < x87_r4_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_38, x87_r4_22) ? 1 : 0) << 0xa
                | (x87_r5_38 == x87_r4_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
            {
                x87_r5_44 = (v_30 - x87_r6_26 * v_68) / v_84;
                goto label_44aaa6;
            }

            long double x87_r5_45 = v_80;
            long double f23_1 = 0f;
            x87_r5_45 - f23_1;

            if (*(&((x87_r5_45 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_45, f23_1) ? 1 : 0) << 0xa
                    | (x87_r5_45 == f23_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                goto label_44aa96;

            x87_r5_44 = (v_70 - x87_r6_26 * v_64) / v_80;
            goto label_44aaa6;
        }

        long double x87_r6_33 = v_68 * v_88 - v_6c * v_84;
        long double f7_1 = 0f;
        x87_r6_33 - f7_1;

        if (*(&((x87_r6_33 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_33, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_33 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
            objC = 0;

        long double x87_r5_67 = v_30 * v_88 - v_20 * v_84;
        x87_r6_26 = x87_r5_67 / x87_r5_67;
        long double f10_1 = 0f;
        x87_r6_26 - f10_1;
        long double f13_1;

        if (!(*(&((x87_r6_26 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_26, f10_1) ? 1 : 0) << 0xa
            | (x87_r6_26 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            f13_1 = 1f;
            x87_r6_26 - f13_1;
        }

        if (*(&((x87_r6_26 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, f10_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                (x87_r6_26 < f13_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_26, f13_1) ? 1 : 0) << 0xa
                | (x87_r6_26 == f13_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            objC = 0;

        long double x87_r5_68 = v_88;
        long double f16_1 = 0f;
        x87_r5_68 - f16_1;
        long double x87_r5_69 = v_88;

        if (*(&((x87_r5_68 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_68, f16_1) ? 1 : 0) << 0xa
                | (x87_r5_68 == f16_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_69 = -(x87_r5_69);

        long double x87_r4_31 = v_84;
        long double f19_1 = 0f;
        x87_r4_31 - f19_1;
        long double x87_r4_32 = v_84;

        if (*(&((x87_r4_31 < f19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_31, f19_1) ? 1 : 0) << 0xa
                | (x87_r4_31 == f19_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
            x87_r4_32 = -(x87_r4_32);

        x87_r5_69 - x87_r4_32;

        if (*(&((x87_r5_69 < x87_r4_32 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_69, x87_r4_32) ? 1 : 0) << 0xa
            | (x87_r5_69 == x87_r4_32 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_75 = v_84;
            long double f22_1 = 0f;
            x87_r5_75 - f22_1;

            if (*(&((x87_r5_75 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_75, f22_1) ? 1 : 0) << 0xa
                    | (x87_r5_75 == f22_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                objC = 0;

            x87_r5_44 = (v_30 - x87_r6_26 * v_68) / v_84;
        }
        else
            x87_r5_44 = (v_20 - x87_r6_26 * v_6c) / v_88;

        long double f25_1 = 0f;
        x87_r5_44 - f25_1;

        if (*(&((x87_r5_44 < f25_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, f25_1) ? 1 : 0) << 0xa
                | (x87_r5_44 == f25_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            goto label_44abbc;

        long double x87_r5_79 = x87_r5_44 + x87_r6_26;
        long double f27_1 = 1f;
        x87_r5_79 - f27_1;

        if (!(*(&((x87_r5_79 < f27_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_79, f27_1) ? 1 : 0) << 0xa
                | (x87_r5_79 == f27_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) || !objC)
            goto label_44abbc;
    }
    long double x87_r7_14 = v_60 * 4505.6001f + 409.600006f;
    float v_78_3 = v_7c * 4505.6001f + 409.600006f;
    float v_18_1 = v_8c * 4505.6001f + 409.600006f;
    long double x87_r6_112 = x87_r7_14 * x87_r7_14;
    long double x87_r5_126 = v_38;
    x87_r5_126 - x87_r6_112;

    if (!(*(&((x87_r5_126 < x87_r6_112 ? 1 : 0) << 8
        | (FCMP_UO(x87_r5_126, x87_r6_112) ? 1 : 0) << 0xa
        | (x87_r5_126 == x87_r6_112 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
    label_44b1e0:
        Sys_AllocateMemory_14(0x57c230);
        long double x87_r7_22 = v_38;
        long double f29_1 = v_34;
        x87_r7_22 - f29_1;

        if (!(*(&((x87_r7_22 < f29_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_22, f29_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == f29_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_23 = v_38;
            long double f33_1 = v_3c;
            x87_r7_23 - f33_1;

            if (!(*(&((x87_r7_23 < f33_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, f33_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f33_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_24 = v_3c;
                long double f37 = v_34;
                x87_r7_24 - f37;
                long double x87_r7_33;

                if (!(*(&((x87_r7_24 < f37 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, f37) ? 1 : 0) << 0xa
                    | (x87_r7_24 == f37 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_39 = 1f - sqrtl(v_34) / sqrtl(v_38);
                    long double f42_1 = 0.5f;
                    x87_r7_39 - f42_1;
                    float v_78_5;

                    v_78_5 = *(&((x87_r7_39 < f42_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_39, f42_1) ? 1 : 0) << 0xa
                        | (x87_r7_39 == f42_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : x87_r7_39;

                    x87_r7_33 = v_78_5 - Sys_AllocateMemory_14(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double x87_r7_29 = sqrtl(v_3c) / sqrtl(v_38);
                    long double f43_1 = 0.5f;
                    x87_r7_29 - f43_1;
                    float v_78_4;

                    v_78_4 = !(*(&((x87_r7_29 < f43_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_29, f43_1) ? 1 : 0) << 0xa
                        | (x87_r7_29 == f43_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : x87_r7_29;

                    x87_r7_33 = Sys_AllocateMemory_14(0x57c230) * 0.100000001f + v_78_4;
                }

                v_48 = (*a2 - *a1) * x87_r7_33 + *a1;
                float v_44_3 = (a2[1] - a1[1]) * x87_r7_33 + a1[1];
                float v_40_3 = (a2[2] - a1[2]) * x87_r7_33 + a1[2];
                Env_ActivateEntity_11(a2, a3, &v_48);
                return Env_ActivateEntity_11(&v_48, a3, a1);
            }
        }

        long double x87_r7_44 = v_34;
        long double f32_1 = v_38;
        x87_r7_44 - f32_1;

        if (!(*(&((x87_r7_44 < f32_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_44, f32_1) ? 1 : 0) << 0xa
            | (x87_r7_44 == f32_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_45 = v_34;
            long double f36_1 = v_3c;
            x87_r7_45 - f36_1;

            if (!(*(&((x87_r7_45 < f36_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_45, f36_1) ? 1 : 0) << 0xa
                | (x87_r7_45 == f36_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_46 = v_38;
                long double f41 = v_3c;
                x87_r7_46 - f41;
                long double x87_r7_55;

                if (!(*(&((x87_r7_46 < f41 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_46, f41) ? 1 : 0) << 0xa
                    | (x87_r7_46 == f41 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_61 = 1f - sqrtl(v_3c) / sqrtl(v_34);
                    long double f49_1 = 0.5f;
                    x87_r7_61 - f49_1;
                    float v_78_7;

                    v_78_7 = *(&((x87_r7_61 < f49_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_61, f49_1) ? 1 : 0) << 0xa
                        | (x87_r7_61 == f49_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : x87_r7_61;

                    x87_r7_55 = v_78_7 - Sys_AllocateMemory_14(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double x87_r7_51 = sqrtl(v_38) / sqrtl(v_34);
                    long double f50_1 = 0.5f;
                    x87_r7_51 - f50_1;
                    float v_78_6;

                    v_78_6 = !(*(&((x87_r7_51 < f50_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_51, f50_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == f50_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : x87_r7_51;

                    x87_r7_55 = Sys_AllocateMemory_14(0x57c230) * 0.100000001f + v_78_6;
                }

                v_48 = (*a3 - *a2) * x87_r7_55 + *a2;
                float v_44_4 = (a3[1] - a2[1]) * x87_r7_55 + a2[1];
                float v_40_4 = (a3[2] - a2[2]) * x87_r7_55 + a2[2];
                Env_ActivateEntity_11(a3, a1, &v_48);
                return Env_ActivateEntity_11(&v_48, a1, a2);
            }
        }

        long double x87_r7_66 = v_3c;
        long double f35_1 = v_38;
        x87_r7_66 - f35_1;

        if (!(*(&((x87_r7_66 < f35_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_66, f35_1) ? 1 : 0) << 0xa
            | (x87_r7_66 == f35_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_67 = v_3c;
            long double f40_1 = v_34;
            x87_r7_67 - f40_1;

            if (!(*(&((x87_r7_67 < f40_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_67, f40_1) ? 1 : 0) << 0xa
                | (x87_r7_67 == f40_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_68 = v_34;
                long double f48 = v_38;
                x87_r7_68 - f48;
                long double x87_r7_77;

                if (!(*(&((x87_r7_68 < f48 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_68, f48) ? 1 : 0) << 0xa
                    | (x87_r7_68 == f48 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_83 = 1f - sqrtl(v_38) / sqrtl(v_3c);
                    long double f53_1 = 0.5f;
                    x87_r7_83 - f53_1;
                    float v_78_9;

                    v_78_9 = *(&((x87_r7_83 < f53_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_83, f53_1) ? 1 : 0) << 0xa
                        | (x87_r7_83 == f53_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : x87_r7_83;

                    x87_r7_77 = v_78_9 - Sys_AllocateMemory_14(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double x87_r7_73 = sqrtl(v_34) / sqrtl(v_3c);
                    long double f54_1 = 0.5f;
                    x87_r7_73 - f54_1;
                    float v_78_8;

                    v_78_8 = !(*(&((x87_r7_73 < f54_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_73, f54_1) ? 1 : 0) << 0xa
                        | (x87_r7_73 == f54_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : x87_r7_73;

                    x87_r7_77 = Sys_AllocateMemory_14(0x57c230) * 0.100000001f + v_78_8;
                }

                v_48 = (*a1 - *a3) * x87_r7_77 + *a3;
                float v_44_5 = (a1[1] - a3[1]) * x87_r7_77 + a3[1];
                float v_40_5 = (a1[2] - a3[2]) * x87_r7_77 + a3[2];
                Env_ActivateEntity_11(a1, a2, &v_48);
                return Env_ActivateEntity_11(&v_48, a2, a3);
            }
        }
    }
    else
    {
        long double x87_r7_17 = v_78_3 * v_78_3;
        long double f30_1 = v_34;
        x87_r7_17 - f30_1;

        if (*(&((x87_r7_17 < f30_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f30_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f30_1 ? 1 : 0) << 0xe) + 1) & 1)
            goto label_44b1e0;

        long double x87_r7_19 = v_18_1 * v_18_1;
        long double f34_1 = v_3c;
        x87_r7_19 - f34_1;

        if (*(&((x87_r7_19 < f34_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f34_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f34_1 ? 1 : 0) << 0xe) + 1) & 1)
            goto label_44b1e0;
    }

    int32_t valA14 = g_57c244;
    void* result;
    void* objC28;

    if (!valA14)
    {
        long double x87_r7_147 = v_7c;
        long double f44_1 = v_8c;
        x87_r7_147 - f44_1;
        long double x87_r7_148;

        x87_r7_148 = !(*(&((x87_r7_147 < f44_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_147, f44_1) ? 1 : 0) << 0xa
            | (x87_r7_147 == f44_1 ? 1 : 0) << 0xe) + 1) & 1) ? v_8c : v_7c;

        long double x87_r6_190 = v_60;
        x87_r6_190 - x87_r7_148;
        float v_70_2;

        if (!(*(&((x87_r6_190 < x87_r7_148 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_190, x87_r7_148) ? 1 : 0) << 0xa
            | (x87_r6_190 == x87_r7_148 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r7_150 = v_7c;
            long double f56_1 = v_8c;
            x87_r7_150 - f56_1;

            v_70_2 = !(*(&((x87_r7_150 < f56_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_150, f56_1) ? 1 : 0) << 0xa
                | (x87_r7_150 == f56_1 ? 1 : 0) << 0xe) + 1) & 1) ? v_8c : v_7c;
        }
        else
            v_70_2 = v_60;

        result = g_57c25c;

        if (*(result + 0xb8) < 0x3e8)
        {
            float* objC31 = g_57c27c + 0x24;
            float v_58_6 = (*a1 + *a2 + *a3) * 0.333333343f;
            float v_54_6 = (a2[1] + a1[1] + a3[1]) * 0.333333343f;
            long double x87_r7_161 = a2[2] + a1[2] + a3[2];
            *objC31 = *a1;
            objC31[1] = a1[1];
            objC31[2] = a1[2];
            float* valA48 = g_57c27c + 0x30;
            *valA48 = *a2;
            valA48[1] = a2[1];
            float v_50_3 = x87_r7_161 * 0.333333343f;
            valA48[2] = a2[2];
            float* tmpD34 = g_57c27c + 0x3c;
            *tmpD34 = *a3;
            tmpD34[1] = a3[1];
            tmpD34[2] = a3[2];
            v_78_3 = (Sys_AllocateMemory_14(0x57c230) + 1f - v_70_2) * 0.5f * 30f;
            *(g_57c27c + 0x48) = v_78_3;
            int32_t* valA52 = g_57c27c + 0x18;
            *valA52 = v_58_6;
            valA52[1] = v_54_6;
            valA52[2] = v_50_3;
            int32_t* tmpD37 = g_57c228;
            int32_t* valA53 = g_57c27c;
            *valA53 = *tmpD37;
            valA53[1] = tmpD37[1];
            valA53[2] = tmpD37[2];
            int32_t* valA54 = g_57c27c;
            valA54[3] = *valA54;
            valA54[4] = valA54[1];
            valA54[5] = valA54[2];
            long double x87_r7_167 = g_57c23c;
            long double f61_1 = 0f;
            x87_r7_167 - f61_1;

            if (*(&((x87_r7_167 < f61_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_167, f61_1) ? 1 : 0) << 0xa
                | (x87_r7_167 == f61_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *(g_57c27c + 0x4c) = 0;
                *(g_57c27c + 0x50) = 0;
                *(g_57c27c + 0x54) = 0;
            }
            else
            {
                *(g_57c27c + 0x4c) = v_58_6 - g_57c270;
                *(g_57c27c + 0x50) = v_54_6 - g_57c274;
                *(g_57c27c + 0x54) = v_50_3 - g_57c278;
                void* valA58 = g_57c27c;
                long double x87_r7_174 = *(valA58 + 0x54);
                long double x87_r6_193 = *(valA58 + 0x50);
                long double x87_r5_129 = *(valA58 + 0x4c);
                long double x87_r7_176 = g_57c23c / sqrtl(x87_r5_129 * x87_r5_129
                    + x87_r6_193 * x87_r6_193 + x87_r7_174 * x87_r7_174);
                *(valA58 + 0x4c) = *(valA58 + 0x4c) * x87_r7_176;
                void* valA59 = g_57c27c;
                *(valA59 + 0x50) = *(valA59 + 0x50) * x87_r7_176;
                void* valA60 = g_57c27c;
                *(valA60 + 0x54) = *(valA60 + 0x54) * x87_r7_176;
            }

            float* srcS4 = g_57c27c + 0x4c;
            *srcS4 = (Sys_AllocateMemory_14(0x57c230) * 4096f - 2048f) * 0.0333333351f + *srcS4;
            float* srcS5 = g_57c27c + 0x50;
            *srcS5 = (Sys_AllocateMemory_14(0x57c230) * 4096f - 2048f) * 0.0333333351f + *srcS5;
            float* srcS6 = g_57c27c + 0x54;
            *srcS6 = (Sys_AllocateMemory_14(0x57c230) * 4096f - 2048f) * 0.0333333351f + *srcS6;
            *(g_57c27c + 0x5c) = 1;
            **&g_57c26c = g_57c27c + 0x24;
            *(g_57c26c + 4) = g_57c27c + 0x30;
            *(g_57c26c + 8) = g_57c27c + 0x3c;
            *(g_57c26c + 0xc) = g_57c27c + 0xc;
            *(g_57c26c + 0x10) = g_57c27c + 0xc;
            *(g_57c26c + 0x14) = g_57c27c + 0xc;
            *(g_57c26c + 0x48) = 0;
            *(g_57c26c + 0x4c) = 0;
            float* objC52 = g_57c26c + 0x3c;
            *objC52 = v_64 * v_84 - v_68 * v_80;
            objC52[1] = -((v_64 * v_88 - v_6c * v_80));
            objC52[2] = v_68 * v_88 - v_6c * v_84;
            objC28 = g_57c26c;
            long double x87_r7_203 = *(objC28 + 0x3c);
            long double f66_1 = 0f;
            x87_r7_203 - f66_1;

            if (*(&((x87_r7_203 < f66_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_203, f66_1) ? 1 : 0) << 0xa
                | (x87_r7_203 == f66_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                long double x87_r7_204 = *(objC28 + 0x40);
                long double f69_1 = 0f;
                x87_r7_204 - f69_1;

                if (!(*(&((x87_r7_204 < f69_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_204, f69_1) ? 1 : 0) << 0xa
                        | (x87_r7_204 == f69_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_44bceb;

                long double x87_r7_205 = *(objC28 + 0x44);
                long double f71_1 = 0f;
                x87_r7_205 - f71_1;

                if (*(&((x87_r7_205 < f71_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_205, f71_1) ? 1 : 0) << 0xa
                        | (x87_r7_205 == f71_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    goto label_44bd42;

                goto label_44bceb;
            }

        label_44bceb:
            long double x87_r7_206 = *(objC28 + 0x44);
            long double x87_r6_207 = *(objC28 + 0x40);
            long double x87_r5_131 = *(objC28 + 0x3c);
            long double x87_r7_208 = 1.0 /
                sqrtl(x87_r5_131 * x87_r5_131 + x87_r6_207 * x87_r6_207 + x87_r7_206 * x87_r7_206);
            *(objC28 + 0x3c) = *(objC28 + 0x3c) * x87_r7_208;
            void* valA72 = g_57c26c;
            *(valA72 + 0x40) = *(valA72 + 0x40) * x87_r7_208;
            void* valA73 = g_57c26c;
            *(valA73 + 0x44) = *(valA73 + 0x44) * x87_r7_208;
            objC28 = g_57c26c;
        label_44bd42:
            result = g_57c25c;
            g_57c27c += 0x60;
            g_57c26c = objC28 + 0x50;
            *(result + 0xb8) += 1;
        }
    }
    else
    {
        result = valA14 - 1;

        if (valA14 == 1)
        {
            long double x87_r7_88 = v_7c;
