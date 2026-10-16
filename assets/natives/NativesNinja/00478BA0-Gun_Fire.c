#include "00478BA0-Gun_Fire.h"
/* 0x00478ba0 Gun_Fire full linked: callers=0 callees=38 */
struct status_msg* sub_478ba0(double* a1, char* a2)

{
    char* ebx = a2;
    char eax = *ebx;
    int32_t esi = *(ebx + 4);
    void* edx = a1[0x25];
    void* var_124 = edx;
    char var_132 = eax;
    char var_131 = eax;

    if (!esi)
    {
        WeaponType_UpdateAnim(&a1[0x2a], a1, 2);
        edx = var_124;
        a1[0x2a] = a1[4] + a1[0x2a];
        a1[0x2b] = a1[5] + a1[0x2b];
        a1[0x2c] = a1[6] + a1[0x2c];
    }
    else
        memcpy(&a1[0x2a], esi, 0x18);

    void* eax_1 = *(ebx + 8);

    if (!eax_1)
    {
        int32_t eax_4 = a1[0x10];
        a1[0x2d] = *(a1 + 0x74);
        int32_t ecx_1 = *(a1 + 0x8c);
        *(a1 + 0x16c) = eax_4;
        a1[0x2e] = ecx_1;
    }
    else
    {
        a1[0x2d] = *(eax_1 + 4);
        *(a1 + 0x16c) = *(*(ebx + 8) + 0x10);
        a1[0x2e] = *(*(ebx + 8) + 0x1c);
    }

    if (!var_132)
        a1[0x28] = 0;
    else if (a1[0x28] == *(edx + 0x64c))
    {
        var_132 = 0;
        var_131 = 0;
    }

    if (*(a1 + 0x13c))
        var_132 = 0;

    struct status_msg* result = *(a1 + 0x12c);

    if (result)
    {
        result = *(a1 + 0x144);

        if (!result)
        {
            var_132 = 0;
            var_131 = 0;
        }
    }

    if (*(edx + 0x64c) <= 1)
    {
        result = var_132;

        if (result)
        {
            char* var_148_7;

            if (!(sub_4b4740(Level_SetMission_5()) & 1))
                var_148_7 = var_124 + 0x6c0;
            else
                var_148_7 = var_124 + 0x6b0;

            result = sub_4e6b00(sub_4f0ee0(), var_148_7);

            if (result)
                result = sub_4e6c30(result, &a1[4]);
        }
    }
    else
    {
        result = *(a1 + 0x194);

        if (!var_131)
        {
            if (result)
            {
                uint32_t eax_11 = result->head[0];

                if (eax_11)
                    sub_4e6c00(eax_11);

                Qtask_UpdateList(*(a1 + 0x194));
                *(a1 + 0x194) = 0;
                result = sub_4e6b00(sub_4f0ee0(), var_124 + 0x6c0);

                if (result)
                    result = sub_4e6c30(result, &a1[4]);
            }
        }
        else if (result)
        {
            result = result->head[0];

            if (result)
                result = sub_4e6c30(result, &a1[4]);
        }
        else
        {
            result = sub_4e6b00(sub_4f0ee0(), edx + 0x6b0);

            if (result)
            {
                int32_t* eax_10 = QTask_LinkEventHandler_2(result);
                *(a1 + 0x194) = eax_10;
                result = sub_4e6c30(*eax_10, &a1[4]);
            }
        }
    }

    result = var_132;
    ebx[1] = result;

    if (result)
    {
        float var_80;
        WeaponType_SetCategory(&var_80, &a1[0x2d]);
        int32_t* eax_20 = *(ebx + 0xc);
        void var_28;
        memcpy(&var_28, &var_80, 0x28);
        float var_b4;
        float var_b0_1;
        int32_t* var_ac_1;

        if (!eax_20)
        {
            var_b4 = 0f;
            var_b0_1 = 0f;
            var_ac_1 = nullptr;
        }
        else
        {
            var_b4 = *eax_20;
            var_b0_1 = eax_20[1];
            var_ac_1 = eax_20[2];
        }

        long double x87_r7_7;

        if (a1[0x28] > 3)
            x87_r7_7 = *(var_124 + 0x668);
        else
            x87_r7_7 = *(var_124 + 0x664);

        long double x87_r7_8 = x87_r7_7 * 0.0174532924f;
        long double temp2_1 = 0f;
        x87_r7_8 - temp2_1;

        if (*(&((x87_r7_8 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_8 = -(x87_r7_8);

        void* edi_2 = var_124;
        int32_t i = 0;
        float var_114_1 = x87_r7_8;
        float var_130;
        float var_104;
        float var_100;
        float var_fc;
        float var_f8;
        float var_f4;
        float var_f0;
        float var_ec;
        float var_e8;
        float var_e4;

        if (*(edi_2 + 0x640) > 0)
        {
            do
            {
                long double x87_r7_9 = var_114_1;
                long double temp3_1 = 0f;
                x87_r7_9 - temp3_1;

                if (!(*(&((x87_r7_9 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    float var_108_1 = 1f;
                    int32_t j_1 = 3;
                    int32_t j;

                    do
                    {
                        j = j_1;
                        j_1 -= 1;
                        var_108_1 = sub_4b4770(Level_SetMission_5()) * var_108_1;
                    } while (j != 1);
                    int32_t ecx_7;
                    long double st0_2;
                    st0_2 = sub_4b4770(Level_SetMission_5());
                    int32_t var_150_3 = ecx_7;
                    sub_4b38e0(&var_104, var_108_1 * var_114_1, st0_2 * 6.28318548f, 0f);
                    float var_7c;
                    float var_78;
                    float var_dc = var_ec * var_78 + var_f8 * var_7c + var_104 * var_80;
                    float var_d8_1 = var_e8 * var_78 + var_f4 * var_7c + var_100 * var_80;
                    float var_d4_1 = var_e4 * var_78 + var_f0 * var_7c + var_fc * var_80;
                    float var_74;
                    float var_70;
                    float var_6c;
                    float var_d0 = var_6c * var_ec + var_70 * var_f8 + var_74 * var_104;
                    float var_cc_1 = var_6c * var_e8 + var_70 * var_f4 + var_74 * var_100;
                    float var_c8_1 = var_6c * var_e4 + var_70 * var_f0 + var_74 * var_fc;
                    int32_t var_e0;
                    int32_t var_5c;
                    int32_t var_b8_1 = var_e0 + var_5c + 1;
                    float var_68;
                    float var_64;
                    float var_60;
                    float var_c4_1 = var_60 * var_ec + var_64 * var_f8 + var_68 * var_104;
                    float var_c0_1 = var_60 * var_e8 + var_64 * var_f4 + var_68 * var_100;
                    float var_bc_1 = var_60 * var_e4 + var_64 * var_f0 + var_68 * var_fc;
                    memcpy(&var_28, &var_dc, 0x28);

                    if (var_e0 + var_5c + 1 > 0x3e8)
                    {
                        long double x87_r7_52 = var_dc;
                        long double temp5_1 = 0f;
                        x87_r7_52 - temp5_1;
                        float var_a0_1 = var_d4_1;
                        float var_a8 = var_dc;
                        float var_a4_1 = var_d8_1;

                        if (!(*(&((x87_r7_52 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_52, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_52 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_479106:
                            long double x87_r7_55 = var_d4_1;
                            long double x87_r6_37 = var_d8_1;
                            long double x87_r5_1 = var_dc;
                            long double x87_r7_57 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                + x87_r6_37 * x87_r6_37 + x87_r7_55 * x87_r7_55);
                            var_a8 = var_dc * x87_r7_57;
                            var_a4_1 = var_a4_1 * x87_r7_57;
                            var_a0_1 = var_a0_1 * x87_r7_57;
                        }
                        else
                        {
                            long double x87_r7_53 = var_d8_1;
                            long double temp6_1 = 0f;
                            x87_r7_53 - temp6_1;

                            if (!(*(&((x87_r7_53 < temp6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_53, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_53 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479106;

                            long double x87_r7_54 = var_d4_1;
                            long double temp8_1 = 0f;
                            x87_r7_54 - temp8_1;

                            if (!(*(&((x87_r7_54 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_54, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_54 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479106;
                        }

                        var_130 = var_c0_1 * var_d4_1 - var_bc_1 * var_d8_1;
                        float var_9c_1 = var_130;
                        float var_12c_1 = -((var_c4_1 * var_d4_1 - var_bc_1 * var_dc));
                        float var_128_1 = var_c4_1 * var_d8_1 - var_c0_1 * var_dc;
                        float var_120_1 = var_128_1 * var_a4_1 - var_12c_1 * var_a0_1;
                        float var_90_1 = var_120_1;
                        float var_11c_1 = -((var_128_1 * var_a8 - var_130 * var_a0_1));
                        float var_118_1 = var_12c_1 * var_a8 - var_130 * var_a4_1;
                        long double x87_r7_79 = var_130;
                        long double temp7_1 = 0f;
                        x87_r7_79 - temp7_1;

                        if (!(*(&((x87_r7_79 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_79, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_79 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_479280:
                            long double x87_r7_82 = var_130;
                            long double x87_r6_57 = var_12c_1;
                            long double x87_r5_3 = var_128_1;
                            long double x87_r7_84 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                                + x87_r6_57 * x87_r6_57 + x87_r7_82 * x87_r7_82);
                            float var_9c_2 = var_130 * x87_r7_84;
                            float var_98_2 = var_12c_1 * x87_r7_84;
                            float var_94_2 = var_128_1 * x87_r7_84;
                        }
                        else
                        {
                            long double x87_r7_80 = var_12c_1;
                            long double temp9_1 = 0f;
                            x87_r7_80 - temp9_1;

                            if (!(*(&((x87_r7_80 < temp9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_80, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_80 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479280;

                            long double x87_r7_81 = var_128_1;
                            long double temp11_1 = 0f;
                            x87_r7_81 - temp11_1;

                            if (!(*(&((x87_r7_81 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_81, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_81 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479280;
                        }

                        long double x87_r7_86 = var_120_1;
                        long double temp10_1 = 0f;
                        x87_r7_86 - temp10_1;

                        if (!(*(&((x87_r7_86 < temp10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_86, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_86 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47930c:
                            long double x87_r7_89 = var_118_1;
                            long double x87_r6_65 = var_11c_1;
                            long double x87_r5_5 = var_120_1;
                            long double x87_r7_91 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                                + x87_r6_65 * x87_r6_65 + x87_r7_89 * x87_r7_89);
                            float var_90_2 = var_120_1 * x87_r7_91;
                            float var_8c_2 = var_11c_1 * x87_r7_91;
                            float var_88_2 = var_118_1 * x87_r7_91;
                        }
                        else
                        {
                            long double x87_r7_87 = var_11c_1;
                            long double temp12_1 = 0f;
                            x87_r7_87 - temp12_1;

                            if (!(*(&((x87_r7_87 < temp12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_87, temp12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_87 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47930c;

                            long double x87_r7_88 = var_118_1;
                            long double temp13_1 = 0f;
                            x87_r7_88 - temp13_1;

                            if (!(*(&((x87_r7_88 < temp13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_88, temp13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_88 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47930c;
                        }

                        memcpy(&var_dc, &var_a8, 0x28);
                        int32_t var_b8_2 = 0;
                    }

                    edi_2 = var_124;
                }

                HumanPlayer_CheckGround_11(a1, *(a1 + 0x14), &a1[0x2a], &a1[0xe], &var_b4,
                    &var_28, a1[0x25], *(a1 + 0x12c), *(a2 + 0x28));
                i += 1;
            } while (i < *(edi_2 + 0x640));
        }

        double var_58;
        WeaponType_UpdateAnim(&var_58, a1, 3);
        bool cond:4_1 = !*(edi_2 + 0x62c);
        var_58 = var_58 + a1[4];
        double var_50 = var_50 + a1[5];
        double var_48;
        double var_48_1 = var_48 + a1[6];

        if (!cond:4_1 && Level_InitTextures_5(0) == *(a1 + 0x14))
        {
            float var_114_2 = sub_4b47c0(Level_SetMission_5(), 0x1e) * 0.0174532924f;
            float var_12c_2 = 0f;
            float var_128_2 = 0f;
            var_130 = (sub_4b47c0(Level_SetMission_5(), 4) + 4) * 0x3e8000 / 0x1a5e0;
            sub_4b3ba0(&var_104, -(var_114_2));
            long double x87_r7_107 = var_fc * var_128_2 + var_100 * var_12c_2 + var_104 * var_130;
            long double x87_r6_80 = var_f0 * var_128_2 + var_f4 * var_12c_2 + var_f8 * var_130;
            long double x87_r5_14 = var_e4 * var_128_2 + var_e8 * var_12c_2 + var_ec * var_130;
            float var_120_2 =
                x87_r5_14 * a1[0xf] + x87_r6_80 * *(a1 + 0x74) + x87_r7_107 * a1[0xe];
            long double x87_r4_27 =
                x87_r5_14 * *(a1 + 0x84) + x87_r6_80 * a1[0x10] + x87_r7_107 * *(a1 + 0x7c);
            var_130 = var_120_2;
            float var_11c_2 = x87_r4_27;
            float var_118_2 =
                x87_r5_14 * a1[0x12] + x87_r6_80 * *(a1 + 0x8c) + x87_r7_107 * a1[0x11];
            var_130 = var_120_2 + var_b4;
            float var_12c_4 = var_11c_2 + var_b0_1;
            float var_128_4 = var_118_2 + var_ac_1;
            sub_477d10(sub_4f0ee0(), &var_58, &var_130, &a1[0xe], edi_2 + 0x62c);
        }

        double var_40;
        WeaponType_UpdateAnim(&var_40, a1, 2);
        int32_t* eax_49 = a1[0x32];
        var_40 = var_40 + a1[4];
        double var_38;
        double var_38_1 = var_38 + a1[5];
        double var_30;
        double var_30_1 = var_30 + a1[6];

        if (eax_49)
        {
            int32_t* eax_50 = *eax_49;

            if (eax_50)
                QTask_FindType(eax_50);

            Qtask_UpdateList(a1[0x32]);
            a1[0x32] = 0;
        }

        long double x87_r7_123 = 60.0 / *(edi_2 + 0x644);
        a1[0x28] += 1;
        *(a1 + 0x13c) = x87_r7_123 * 30.0;

        if (*(a1 + 0x12c))
        {
            int32_t eax_53 = *(a1 + 0x144);

            if (eax_53 > 0)
                *(a1 + 0x144) = eax_53 - 1;
        }

        a1[0x27] = sub_4e75a0();
        a1[0x33] = 0x42700000;
        *(a1 + 0x1a4) = 0xfffffffe;
        long double x87_r7_125 = *(edi_2 + 0x644);
        *(a1 + 0x19c) = 0xfffffff7;
        ebx = a2;
        a1[0x35] = 60.0 / x87_r7_125 * 30.0 / 3;
        int32_t eax_57;
        int32_t edx_22;
        edx_22 = HIGHD(0x66666667 * 60.0 / *(edi_2 + 0x644) * 30.0);
        eax_57 = LOWD(0x66666667 * 60.0 / *(edi_2 + 0x644) * 30.0);
        int32_t edx_23 = edx_22 >> 2;
        result = edx_23 >> 0x1f;
        a1[0x34] = edx_23 + result;
    }

    *(a1 + 0x134) = *ebx;
    result = *ebx;

    if (!result)
        a1[0x29] = 0;
    else
    {
        long double x87_r7_132 = a1[0x29] + 0.0222222228f;
        a1[0x29] = x87_r7_132;
        long double temp1_1 = 1f;
        x87_r7_132 - temp1_1;
        result = (x87_r7_132 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_132, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_132 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            a1[0x29] = 0x3f800000;
    }

    return result;
}
