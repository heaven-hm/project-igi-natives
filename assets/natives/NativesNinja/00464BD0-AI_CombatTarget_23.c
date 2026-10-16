#include "00464BD0-AI_CombatTarget_23.h"
/* 0x00464bd0 AI_CombatTarget_23 full linked: callers=5 callees=34 */
int32_t sub_464bd0(void* a1, void* a2)

{
    float var_108 = 0f;
    float var_104 = 0f;
    long double x87_r7_1 = *(a2 + 0x4f8) + *(a1 + 0x120);
    float var_100 = 0f;
    float var_130 = 0f;
    float var_fc = x87_r7_1;
    float var_10c = *(a2 + 0x508) + *(a1 + 0x12c);
    long double x87_r7_4 = *(a1 + 0x1b4);
    long double temp0 = 0f;
    x87_r7_4 - temp0;

    if (!(*(&((x87_r7_4 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_6 = sub_4b4770(Level_SetMission_5()) - 0.5f;
        var_fc = *(a1 + 0x1bc) * *(a1 + 0x1b4) * (x87_r7_6 + x87_r7_6) + var_fc;
        long double x87_r7_10 = sub_4b4770(Level_SetMission_5()) - 0.5f;
        var_130 = *(a1 + 0x1bc) * *(a1 + 0x1b4) * (x87_r7_10 + x87_r7_10);
        long double x87_r7_14 = sub_4b4770(Level_SetMission_5()) - 0.5f;
        var_10c = *(a1 + 0x1bc) * *(a1 + 0x1b4) * (x87_r7_14 + x87_r7_14) + var_10c;
    }

    sub_4b38e0(a1 + 0xf8, var_fc, var_130, var_10c);
    double var_124;
    sub_465820(&var_124, a2);
    long double x87_r7_17 = *(a1 + 0x1a4);
    float edx_1 = *(a1 + 0x1a0);
    float var_128 = x87_r7_17;
    long double x87_r6_12 = *(a1 + 0x1b4);
    long double temp1 = 0f;
    x87_r6_12 - temp1;
    var_130 = *(a1 + 0x19c);

    if (!(*(&((x87_r6_12 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, temp1) ? 1 : 0) << 0xa
        | (x87_r6_12 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double x87_r7_20 = sub_4b4770(Level_SetMission_5()) - 0.5f;
        var_130 = *(a1 + 0x1b8) * *(a1 + 0x1b4) * (x87_r7_20 + x87_r7_20) + var_130;
        long double x87_r7_24 = sub_4b4770(Level_SetMission_5()) - 0.5f;
        x87_r7_17 = (x87_r7_24 + x87_r7_24) * *(a1 + 0x1b8) * *(a1 + 0x1b4) + var_128;
        long double x87_r6_19 = *(a1 + 0x1b4);
        long double temp3_1 = 0f;
        x87_r6_19 - temp3_1;

        if (!(*(&((x87_r6_19 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, temp3_1) ? 1 : 0) << 0xa
            | (x87_r6_19 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_22 = *(a1 + 0x1b4);
            long double temp6_1 = 0f;
            x87_r6_22 - temp6_1;

            if (!(*(&((x87_r6_22 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_22, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_24 = *(a1 + 0x1b4) - *(a1 + 0x1c0);
                *(a1 + 0x1b4) = x87_r6_24;
                long double temp9_1 = 0f;
                x87_r6_24 - temp9_1;

                if (*(&((x87_r6_24 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_24, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r6_24 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(a1 + 0x1b4) = 0;
            }
        }
        else
        {
            long double x87_r6_21 = *(a1 + 0x1c0) + *(a1 + 0x1b4);
            *(a1 + 0x1b4) = x87_r6_21;
            long double temp7_1 = 0f;
            x87_r6_21 - temp7_1;

            if (!(*(&((x87_r6_21 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_21, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_21 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(a1 + 0x1b4) = 0;
        }
    }

    long double x87_r6_25 = *(a1 + 0x1c4);
    long double temp2 = 0f;
    x87_r6_25 - temp2;

    if (!(*(&((x87_r6_25 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, temp2) ? 1 : 0) << 0xa
        | (x87_r6_25 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double st0_6;
        bool c1_1;
        bool c2_7;
        st0_6 = __fsin(*(a1 + 0x1c8));
        x87_r7_17 = x87_r7_17 + *(a1 + 0x1c4) * st0_6;
        var_100 = *(a1 + 0x1c4) * 0.074999999999999997 * st0_6;
        long double x87_r6_30 = *(a1 + 0x1c8) + 0.209439516f;
        *(a1 + 0x1c8) = x87_r6_30;
        long double temp5_1 = 3.14159274f;
        x87_r6_30 - temp5_1;

        if (!(*(&((x87_r6_30 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_30, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_30 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            *(a1 + 0x1c4) = 0;
    }

    long double x87_r6_31 = var_130;
    long double temp4 = 0f;
    x87_r6_31 - temp4;
    double var_11c;
    double var_114;
    double var_b0;
    double var_a8;
    double var_a0;
    double var_88;
    void var_70;
    int32_t var_18;

    if (!(*(&((x87_r6_31 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_31, temp4) ? 1 : 0) << 0xa
        | (x87_r6_31 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_464e9e:
        long double x87_r6_35 = edx_1 * *(a1 + 0xfc) + var_130 * *(a1 + 0xf8);
        long double x87_r5_9 = edx_1 * *(a1 + 0x108);
        long double x87_r4_2 = var_130 * *(a1 + 0x104);
        memcpy(&var_88, &var_124, 0x18);
        float var_12c_1 = x87_r5_9 + x87_r4_2;
        var_b0 = x87_r6_35 + var_124;
        void* var_12c_2 = a2;
        var_a8 = var_12c_1 + var_11c;
        var_a0 = x87_r7_17 + var_114;
        char eax_13 = Level_LoadObjects_4();
        sub_4cdb20(Level_StartMission_4(), &var_70, &var_88, &var_b0, 1, eax_13, &var_130,
            0xffffffff, 1);

        if (!var_18)
            memcpy(&var_124, &var_b0, 0x18);
        else
        {
            double var_68;
            double var_c8 = var_68 - var_88;
            double var_80;
            double var_60;
            double var_c0_1 = var_60 - var_80;
            double var_78;
            double var_58;
            double var_b8_1 = var_58 - var_78;
            var_fc = sub_4b3130(&var_c8);
            sub_4b3100(&var_c8);
            long double x87_r7_36 = var_fc - 204.80000000000001;
            long double temp11_1 = 0.0;
            x87_r7_36 - temp11_1;

            if (*(&((x87_r7_36 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_36, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_36 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_36 = 0.0;

            var_c8 = x87_r7_36 * var_c8;
            double var_c0_2 = x87_r7_36 * var_c0_1;
            var_124 = var_c8 + var_88;
            var_11c = var_c0_2 + var_80;
            var_114 = x87_r7_36 * var_b8_1 + var_78;
        }
    }
    else
    {
        long double x87_r6_32 = edx_1;
        long double temp8_1 = 0f;
        x87_r6_32 - temp8_1;

        if (!(*(&((x87_r6_32 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_32, temp8_1) ? 1 : 0) << 0xa
                | (x87_r6_32 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;

        long double temp10_1 = 0f;
        x87_r7_17 - temp10_1;

        if (!(*(&((x87_r7_17 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;
    }

    memcpy(a1 + 0xe0, &var_124, 0x18);

    if (*(a1 + 0xd9))
    {
        long double x87_r7_42 = *(a1 + 0xfc) * 2048f;
        long double x87_r6_48 = *(a1 + 0x108) * 2048f;
        var_130 = a1 + 0x100;
        float var_12c_3 = x87_r6_48;
        long double x87_r6_50 = *(a1 + 0x114) * 2048f;
        memcpy(&var_88, &var_124, 0x18);
        float var_128_1 = x87_r6_50;
        var_b0 = x87_r7_42 + var_124;
        void* var_12c_4 = a2;
        var_a8 = var_12c_3 + var_11c;
        var_a0 = var_128_1 + var_114;
        char eax_19 = Level_LoadObjects_4();
        sub_4cc2a0(Level_StartMission_4(), &var_70, &var_88, &var_b0, 1, eax_19, &var_130,
            0xffffffff);
        double var_10;

        if (!var_18)
            *(a1 + 0x320) = 0;
        else
            *(a1 + 0x320) = -((2048.0 - var_10));
        long double x87_r7_51 = *(a1 + 0x320);
        long double temp19_1 = 0f;
        x87_r7_51 - temp19_1;
        long double x87_r7_52 = *(a1 + 0x324);
        long double temp20_1 = *(a1 + 0x320);
        x87_r7_52 - temp20_1;
        int16_t eax_22 = (x87_r7_52 < temp20_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_52, temp20_1) ? 1 : 0) << 0xa
            | (x87_r7_52 == temp20_1 ? 1 : 0) << 0xe;

        if (!(*(&((x87_r7_51 < temp19_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_51, temp19_1) ? 1 : 0) << 0xa
            | (x87_r7_51 == temp19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double x87_r7_57 = *(a1 + 0x324);

            if (!(*(&eax_22 + 1) & 1))
            {
                long double temp22_1 = *(a1 + 0x320);
                x87_r7_57 - temp22_1;

                if (!(*(&((x87_r7_57 < temp22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_57, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r7_57 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_60 = *(a1 + 0x324) - 113.777779f;
                    *(a1 + 0x324) = x87_r7_60;
                    long double temp26_1 = *(a1 + 0x320);
                    x87_r7_60 - temp26_1;

                    if (*(&((x87_r7_60 < temp26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_60, temp26_1) ? 1 : 0) << 0xa
                            | (x87_r7_60 == temp26_1 ? 1 : 0) << 0xe) + 1) & 1)
                        *(a1 + 0x324) = *(a1 + 0x320);
                }
            }
            else
            {
                long double x87_r7_58 = x87_r7_57 + 113.777779f;
                *(a1 + 0x324) = x87_r7_58;
                long double temp23_1 = *(a1 + 0x320);
                x87_r7_58 - temp23_1;

                if (!(*(&((x87_r7_58 < temp23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_58, temp23_1) ? 1 : 0) << 0xa
                        | (x87_r7_58 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    *(a1 + 0x324) = *(a1 + 0x320);
            }
        }
        else
        {
            long double x87_r7_53 = *(a1 + 0x324);

            if (!(*(&eax_22 + 1) & 1))
            {
                long double temp24_1 = *(a1 + 0x320);
                x87_r7_53 - temp24_1;

                if (!(*(&((x87_r7_53 < temp24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_53, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_53 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_56 = *(a1 + 0x324) - 75.8518524f;
                    *(a1 + 0x324) = x87_r7_56;
                    long double temp27_1 = *(a1 + 0x320);
                    x87_r7_56 - temp27_1;

                    if (*(&((x87_r7_56 < temp27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_56, temp27_1) ? 1 : 0) << 0xa
                            | (x87_r7_56 == temp27_1 ? 1 : 0) << 0xe) + 1) & 1)
                        *(a1 + 0x324) = *(a1 + 0x320);
                }
            }
            else
            {
                long double x87_r7_54 = x87_r7_53 + 75.8518524f;
                *(a1 + 0x324) = x87_r7_54;
                long double temp25_1 = *(a1 + 0x320);
                x87_r7_54 - temp25_1;

                if (!(*(&((x87_r7_54 < temp25_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_54, temp25_1) ? 1 : 0) << 0xa
                        | (x87_r7_54 == temp25_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    *(a1 + 0x324) = *(a1 + 0x320);
            }
        }

        float edx_4 = *(a1 + 0x324);
        var_104 = edx_4 * *(a1 + 0x108);
        var_108 = edx_4 * *(a1 + 0xfc);
        var_100 = edx_4 * *(a1 + 0x114) + var_100;
    }

    int32_t result = sub_4647d0(a1);

    if (!result)
    {
        long double x87_r7_65 = *(a1 + 0x1cc);
        long double temp12_1 = *(a1 + 0x1d0);
        x87_r7_65 - temp12_1;
        result = (x87_r7_65 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_65, temp12_1) ? 1 : 0) << 0xa
            | (x87_r7_65 == temp12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_68 = *(a1 + 0x1cc);
            long double temp13_1 = *(a1 + 0x1d0);
            x87_r7_68 - temp13_1;
            result = (x87_r7_68 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_68, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_68 == temp13_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_70 = *(a1 + 0x1cc) - *(a1 + 0x1d4);
                *(a1 + 0x1cc) = x87_r7_70;
                long double temp16_1 = *(a1 + 0x1d0);
                x87_r7_70 - temp16_1;
                result = (x87_r7_70 < temp16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_70, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_70 == temp16_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    *(a1 + 0x1cc) = *(a1 + 0x1d0);
            }
        }
        else
        {
            long double x87_r7_67 = *(a1 + 0x1d4) + *(a1 + 0x1cc);
            *(a1 + 0x1cc) = x87_r7_67;
            long double temp14_1 = *(a1 + 0x1d0);
            x87_r7_67 - temp14_1;
            result = (x87_r7_67 < temp14_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_67, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_67 == temp14_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
                *(a1 + 0x1cc) = *(a1 + 0x1d0);
        }

        long double x87_r7_71 = *(a1 + 0x1d8);
        long double temp15_1 = *(a1 + 0x1dc);
        x87_r7_71 - temp15_1;
        result = (x87_r7_71 < temp15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_71, temp15_1) ? 1 : 0) << 0xa
            | (x87_r7_71 == temp15_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_74 = *(a1 + 0x1d8);
            long double temp17_1 = *(a1 + 0x1dc);
            x87_r7_74 - temp17_1;
            result = (x87_r7_74 < temp17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_74, temp17_1) ? 1 : 0) << 0xa
                | (x87_r7_74 == temp17_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_76 = *(a1 + 0x1d8) - *(a1 + 0x1e0);
                *(a1 + 0x1d8) = x87_r7_76;
                long double temp21_1 = *(a1 + 0x1dc);
                x87_r7_76 - temp21_1;
                result = (x87_r7_76 < temp21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_76, temp21_1) ? 1 : 0) << 0xa
                    | (x87_r7_76 == temp21_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    *(a1 + 0x1d8) = *(a1 + 0x1dc);
            }
        }
        else
        {
            long double x87_r7_73 = *(a1 + 0x1e0) + *(a1 + 0x1d8);
            *(a1 + 0x1d8) = x87_r7_73;
            long double temp18_1 = *(a1 + 0x1dc);
            x87_r7_73 - temp18_1;
            result = (x87_r7_73 < temp18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_73, temp18_1) ? 1 : 0) << 0xa
                | (x87_r7_73 == temp18_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                result = *(a1 + 0x1dc);
                *(a1 + 0x1d8) = result;
            }
        }
    }

    result = *(a1 + 0xd9);

    if (!result)
        return result;

    float var_f0;
    sub_4b38e0(&var_f0, *(a1 + 0x1cc), 0f, *(a1 + 0x1d8));

    if (*(a1 + 0x1ec))
        sub_4b3b60(&var_f0, -1.57079637f);

    float var_e4;
    float var_d8;
    var_b0 = var_e4 * *(a1 + 0xfc) + var_f0 * *(a1 + 0xf8) + var_d8 * *(a1 + 0x100);
    float var_ec;
    float var_e0;
    float var_d4;
    *(&var_b0 + 4) = var_e0 * *(a1 + 0xfc) + var_ec * *(a1 + 0xf8) + var_d4 * *(a1 + 0x100);
    float var_e8;
    float var_dc;
    float var_d0;
    var_a8 = var_dc * *(a1 + 0xfc) + var_e8 * *(a1 + 0xf8) + var_d0 * *(a1 + 0x100);
    *(&var_a8 + 4) = var_e4 * *(a1 + 0x108) + var_d8 * *(a1 + 0x10c) + var_f0 * *(a1 + 0x104);
    var_a0 = var_e0 * *(a1 + 0x108) + var_d4 * *(a1 + 0x10c) + var_ec * *(a1 + 0x104);
    *(&var_a0 + 4) = var_dc * *(a1 + 0x108) + var_d0 * *(a1 + 0x10c) + var_e8 * *(a1 + 0x104);
    float var_98_1 = var_d8 * *(a1 + 0x118) + var_f0 * *(a1 + 0x110) + var_e4 * *(a1 + 0x114);
    float var_94_1 = var_d4 * *(a1 + 0x118) + var_ec * *(a1 + 0x110) + var_e0 * *(a1 + 0x114);
    int32_t var_cc;
    int32_t var_8c_1 = *(a1 + 0x11c) + var_cc + 1;
    long double x87_r7_112 =
        var_d0 * *(a1 + 0x118) + var_e8 * *(a1 + 0x110) + var_dc * *(a1 + 0x114);
    *(a1 + 0xda) = 1;
    float var_90_1 = x87_r7_112;
    memcpy(a1 + 0x78, &var_b0, 0x28);
    sub_4d2fb0(a1 + 0x1f0, a1 + 0x1fc, a1 + 0x68);
    *(a1 + 0x20c) = 0xffffffff;
    sub_4d3210(a1 + 0x208, a1 + 0x68);
    int32_t eax_29 = *(a1 + 0x20c);

    if (eax_29 != 0xffffffff)
    {
        long double x87_r7_116 = *(a1 + 0x80) * *(a1 + 0x220) + *(a1 + 0x7c) * *(a1 + 0x21c)
            + *(a1 + 0x218) * *(a1 + 0x78);
        long double x87_r6_98 = *(a1 + 0x8c) * *(a1 + 0x220) + *(a1 + 0x88) * *(a1 + 0x21c)
            + *(a1 + 0x84) * *(a1 + 0x218);
        float var_12c_6 = x87_r6_98;
        long double x87_r6_102 = *(a1 + 0x98) * *(a1 + 0x220) + *(a1 + 0x94) * *(a1 + 0x21c)
            + *(a1 + 0x90) * *(a1 + 0x218);
        float var_128_2 = x87_r6_102;
        var_124 = x87_r7_116 + *(a1 + 0x20);
        var_11c = var_12c_6 + *(a1 + 0x28);
        var_114 = var_128_2 + *(a1 + 0x30);
        sub_4ec0e0(eax_29, a1, &var_124);
    }

    sub_465800(&var_124, *(a2 + 0x4ec));
    float eax_31 = *(a1 + 0xa0);
    long double x87_r7_125 = *(a1 + 0x80) * *(a1 + 0x1f8) + *(a1 + 0x7c) * *(a1 + 0x1f4)
        + *(a1 + 0x78) * *(a1 + 0x1f0);
    long double x87_r6_110 = *(a1 + 0x8c) * *(a1 + 0x1f8) + *(a1 + 0x88) * *(a1 + 0x1f4)
        + *(a1 + 0x84) * *(a1 + 0x1f0);
    long double x87_r6_114 = *(a1 + 0x98) * *(a1 + 0x1f8) + *(a1 + 0x94) * *(a1 + 0x1f4)
        + *(a1 + 0x90) * *(a1 + 0x1f0);
    double var_11c_1 = x87_r6_110 + var_11c;
    double var_114_1 = x87_r6_114 + var_114;
    var_124 = var_108 + x87_r7_125 + var_124;
    double var_11c_2 = var_104 + var_11c_1;
    double var_114_2 = var_100 + var_114_1;
    return sub_4c6940(Level_StartMission_4(), a1, &var_124, eax_31);
}
