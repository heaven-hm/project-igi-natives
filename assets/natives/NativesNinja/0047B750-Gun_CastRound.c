#include "0047B750-Gun_CastRound.h"
/* 0x0047b750 Gun_CastRound full linked: callers=1 callees=31 */
int32_t sub_47b750(void* a1)

{
    int32_t i = 0;
    int32_t var_68c = 0;

    if (*(a1 + 0x94) > 0)
    {
        int32_t* edx_1 = a1 + 0xa4;
        int32_t* var_698_1 = edx_1;
        int32_t ecx_35;

        do
        {
            int32_t* ebp_1 = *edx_1;
            int32_t var_694_1 = 0;
            int32_t var_700_1 = 0;
            float var_704_1 = ebp_1[0xd];
            float var_69c_1 = 0f;
            long double x87_r7_1 = var_704_1;
            long double temp0_1 = 0f;
            x87_r7_1 - temp0_1;
            float var_6fc_1 = ebp_1[8];
            float var_6f8_1 = ebp_1[9];
            float var_6f4_1 = ebp_1[0xa];
            double var_678;
            memcpy(&var_678, &ebp_1[2], 0x18);

            if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                void var_4d8;
                int32_t* var_6c4 = &var_4d8;
                void var_548;
                void* var_6f0_1 = &var_548;
                void var_54c;
                int32_t* var_6d4_1 = &var_54c;
                void var_550;
                int16_t* var_6e0_1 = &var_550;
                long double x87_r7_84;
                long double temp2_1;

                do
                {
                    float var_6c0_1 = var_6fc_1;
                    float var_6c0_2 = var_6fc_1 * var_704_1;
                    int32_t* eax_5 = *(a1 + 0x6c);
                    int32_t ecx_4 = 0;
                    char var_705_1 = 0;
                    int32_t var_5c8_1 = 0;
                    float var_6bc_2 = var_6f8_1 * var_704_1;
                    float var_6b8_2 = var_6f4_1 * var_704_1;
                    double var_588 = var_6c0_2 + var_678;
                    double var_670;
                    double var_580_1 = var_6bc_2 + var_670;
                    double var_668;
                    double var_578_1 = var_6b8_2 + var_668;

                    if (!eax_5)
                        int32_t var_5c4 = 0;
                    else
                        var_5c4 = *eax_5;

                    int32_t* eax_7 = *(a1 + 0x70);

                    if (eax_7)
                        ecx_4 = *eax_7;

                    int32_t var_5c0_1 = ecx_4;
                    int32_t var_5bc_1 = ebp_1[0x11];
                    char eax_8 = Level_StartMission_2();
                    void* var_654;
                    void var_5cc;
                    sub_4cc2a0(Level_StartMission_4(), &var_654, &var_678, &var_588, 1, eax_8,
                        &var_5cc, 0xffffffff);
                    int32_t var_5fc;
                    int32_t eax_10 = var_5fc;
                    double var_5ac;
                    memcpy(&var_5ac, &var_678, 0x18);
                    double var_5e4;
                    memcpy(&var_5e4, &var_588, 0x18);
                    double var_5dc;
                    double var_5d4;
                    double var_5a4;
                    double var_59c;

                    if (!eax_10)
                        var_704_1 = 0f;
                    else
                    {
                        int32_t edx_4 = ebp_1[0xe];
                        int32_t var_558_1 = ebp_1[0xb];
                        int32_t* eax_12 = *(a1 + 0x70);
                        int32_t* var_570 = &var_654;
                        int32_t var_56c_1 = edx_4;
                        int32_t var_554_1 = ebp_1[0xc];

                        if (!eax_12)
                            int32_t var_55c_2 = 0;
                        else
                            int32_t var_55c_1 = *eax_12;

                        float var_6d8_1 = var_588 - var_678;
                        float var_568_1 = var_6d8_1;
                        float var_690 = var_580_1 - var_670;
                        float var_564_1 = var_690;
                        float var_6dc_1 = var_578_1 - var_668;
                        float var_560_1 = var_6dc_1;
                        double var_64c;
                        void* var_608;
                        void* var_604;

                        if (!var_608)
                        {
                            if (var_604)
                            {
                                if (var_700_1 < 0xa)
                                {
                                    *var_6e0_1 = *(var_604 + 0x25c);
                                    var_6e0_1 = &var_6e0_1[0x44];
                                    *var_6d4_1 = *(var_604 + 0x260);
                                    memcpy(var_6f0_1, &var_654, 0x70);
                                    float ecx_26 = var_690;
                                    int32_t* ecx_28 = var_6c4;
                                    float* esi_7 = ecx_28;
                                    var_6d4_1 = &var_6d4_1[0x22];
                                    var_6f0_1 += 0x88;
                                    *esi_7 = var_6d8_1;
                                    esi_7[1] = ecx_26;
                                    esi_7[2] = var_6dc_1;
                                    var_700_1 += 1;
                                    var_6c4 = &ecx_28[0x22];
                                }

                                var_694_1 = 1;
                            }
                        }
                        else if (!var_604)
                        {
                            if (var_654)
                            {
                                uint32_t eax_16 = Level_LoadLevel_3();
                                int32_t ecx_8 = 0;
                                ecx_8 = *(var_654 + 0x1c);

                                if (*(((eax_16 * 0x180 + ecx_8) << 2) + &g_a96ae0))
                                {
                                    uint32_t eax_21 = Level_LoadLevel_3();
                                    int32_t edx_8 = 0;
                                    void* eax_22 = var_654;
                                    edx_8 = *(eax_22 + 0x1c);
                                    (*(((eax_21 * 0x180 + edx_8) << 2) + &g_a96ae0))(eax_22,
                                        &var_570);
                                }
                            }

                            uint32_t eax_25;
                            uint32_t ecx_13;

                            if (g_540838 != 0xffffffff)
                            {
                                uint32_t eax_23 = Frames_GetUpdateCounter();
                                g_540838;

                                if (eax_23 - g_540838 >= 0)
                                {
                                    ecx_13 = Frames_GetUpdateCounter();
                                    eax_25 = g_540838;
                                }
                                else
                                {
                                    eax_25 = Frames_GetUpdateCounter();
                                    ecx_13 = g_540838;
                                }
                            }

                            if (g_540838 == 0xffffffff || ecx_13 - eax_25 > g_5be3d8)
                            {
                                char* eax_31 =
                                    (sub_4b47c0(Level_SetMission_5(), 6) << 5) + var_608 + 0x154;
                                struct status_msg* eax_33 = sub_4e6b00(sub_4f0ee0(), eax_31);

                                if (eax_33)
                                    sub_4e6c30(eax_33, &var_64c);

                                sub_47c330(&var_64c);
                                g_540838 = Frames_GetUpdateCounter();
                                g_5be3d8 = sub_4b47c0(Level_SetMission_5(), 6) + 6;
                            }

                            float var_61c;
                            float var_618;
                            float var_614;

                            if (!var_694_1)
                            {
                                float var_6b4 = var_6c0_2;
                                var_6b4 = -(var_6c0_2);
                                float var_6b0_2 = -(var_6bc_2);
                                float var_6ac_2 = -(var_6b8_2);
                                float var_6d8_2 = sub_4b2b30(&var_6b4, &var_61c);
                                long double x87_r7_27 = *(var_608 + 0x44);
                                long double temp6_1 = 0f;
                                x87_r7_27 - temp6_1;
                                int16_t eax_40 = (x87_r7_27 < temp6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_27, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_27 == temp6_1 ? 1 : 0) << 0xe;
                                float var_688_1;

                                if (*(&eax_40 + 1) & 0x40)
                                    var_688_1 = 0f;
                                else
                                {
                                    long double x87_r7_29 = *(var_608 + 0x44) * 0.0174532924f;
                                    var_688_1 = (x87_r7_29 - (1.57079637f - var_6d8_2)) / x87_r7_29;
                                }

                                eax_40 = ebp_1[0x10];
                                long double st0_2;
                                long double temp8_1;

                                if (!eax_40)
                                {
                                    st0_2 = sub_4b4770(Level_SetMission_5());
                                    temp8_1 = var_688_1;
                                    st0_2 - temp8_1;
                                }

                                if (eax_40 || !(*(&((st0_2 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(st0_2, temp8_1) ? 1 : 0) << 0xa
                                    | (st0_2 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_49 = ebp_1[0xf] - *(var_608 + 0x40);
                                    long double temp7_1 = 0f;
                                    x87_r7_49 - temp7_1;

                                    if (!(*(&((x87_r7_49 < temp7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_49, temp7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_49 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                    {
                                        long double temp10_1 = 1f;
                                        x87_r7_49 - temp10_1;

                                        if (*(&((x87_r7_49 < temp10_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_49, temp10_1) ? 1 : 0) << 0xa
                                                | (x87_r7_49 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            var_704_1 = 0f;
                                        else
                                        {
                                        label_47bdcb:
                                            var_705_1 = 1;

                                            if (!var_654)
                                                var_704_1 = 0f;
                                        }
                                    }
                                    else
                                    {
                                        long double st0_4 = sub_4b4770(Level_SetMission_5());
                                        long double temp11_1 = 0.600000024f;
                                        st0_4 - temp11_1;

                                        if (*(&((st0_4 < temp11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(st0_4, temp11_1) ? 1 : 0) << 0xa
                                                | (st0_4 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_47bdcb;

                                        var_704_1 = 0f;
                                    }
                                }
                                else
                                {
                                    long double x87_r7_32 = var_61c;
                                    long double temp12_1 = 0f;
                                    x87_r7_32 - temp12_1;
                                    float var_6cc_1 = var_618;
                                    float var_6d0_1 = var_61c;
                                    long double x87_r7_38;

                                    if (!(*(&((x87_r7_32 < temp12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_32, temp12_1) ? 1 : 0) << 0xa
                                        | (x87_r7_32 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    {
                                    label_47bc34:
                                        long double x87_r7_35 = var_614;
                                        long double x87_r6_5 = var_618;
                                        long double x87_r5_1 = var_61c;
                                        long double x87_r7_37 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                            + x87_r6_5 * x87_r6_5 + x87_r7_35 * x87_r7_35);
                                        var_6d0_1 = var_61c * x87_r7_37;
                                        var_6cc_1 = var_6cc_1 * x87_r7_37;
                                        x87_r7_38 = x87_r7_37 * var_614;
                                    }
                                    else
                                    {
                                        long double x87_r7_33 = var_618;
                                        long double temp13_1 = 0f;
                                        x87_r7_33 - temp13_1;

                                        if (!(*(&((x87_r7_33 < temp13_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_33, temp13_1) ? 1 : 0) << 0xa
                                                | (x87_r7_33 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bc34;

                                        long double x87_r7_34 = var_614;
                                        long double temp15_1 = 0f;
                                        x87_r7_34 - temp15_1;

                                        if (!(*(&((x87_r7_34 < temp15_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_34, temp15_1) ? 1 : 0) << 0xa
                                                | (x87_r7_34 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bc34;

                                        x87_r7_38 = var_614;
                                    }

                                    long double st0_3;
                                    bool c1_1;
                                    bool c2_7;
                                    st0_3 = __fcos(var_6d8_2);
                                    long double x87_r6_13 = st0_3 * var_704_1;
                                    float var_6d0_2 = x87_r6_13 * var_6d0_1;
                                    float var_6cc_2 = x87_r6_13 * var_6cc_1;
                                    long double x87_r7_39 = x87_r7_38 * x87_r6_13;
                                    var_6fc_1 = var_6d0_2 - var_6b4 + var_6d0_2;
                                    var_6f8_1 = var_6cc_2 - var_6b0_2 + var_6cc_2;
                                    var_6f4_1 = x87_r7_39 - var_6ac_2 + x87_r7_39;
                                    long double x87_r7_41 = var_6fc_1;
                                    long double temp14_1 = 0f;
                                    x87_r7_41 - temp14_1;

                                    if (!(*(&((x87_r7_41 < temp14_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_41, temp14_1) ? 1 : 0) << 0xa
                                        | (x87_r7_41 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    {
                                    label_47bd25:
                                        long double x87_r7_44 = var_6f4_1;
                                        long double x87_r6_21 = var_6f8_1;
                                        long double x87_r5_11 = var_6fc_1;
                                        long double x87_r7_46 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                                            + x87_r6_21 * x87_r6_21 + x87_r7_44 * x87_r7_44);
                                        var_6fc_1 = var_6fc_1 * x87_r7_46;
                                        var_6f8_1 = var_6f8_1 * x87_r7_46;
                                        var_6f4_1 = var_6f4_1 * x87_r7_46;
                                    }
                                    else
                                    {
                                        long double x87_r7_42 = var_6f8_1;
                                        long double temp17_1 = 0f;
                                        x87_r7_42 - temp17_1;

                                        if (!(*(&((x87_r7_42 < temp17_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_42, temp17_1) ? 1 : 0) << 0xa
                                                | (x87_r7_42 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bd25;

                                        long double x87_r7_43 = var_6f4_1;
                                        long double temp19_1 = 0f;
                                        x87_r7_43 - temp19_1;

                                        if (!(*(&((x87_r7_43 < temp19_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_43, temp19_1) ? 1 : 0) << 0xa
                                                | (x87_r7_43 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bd25;
                                    }

                                    ebp_1[0x10] = 1;
                                    sub_47c330(&var_64c);
                                }
                            }
                            else
                            {
                                var_704_1 = 0f;
                                var_694_1 = 0;
                            }

                            if (var_700_1 < 0xa && *(*(var_608 + 0x258) + 0x58))
                            {
                                long double x87_r7_52 = var_61c;
                                long double temp9_1 = 0f;
                                x87_r7_52 - temp9_1;
                                *var_6e0_1 = *(var_608 + 0x254);
                                float edx_12 = var_61c;
                                *var_6d4_1 = *(var_608 + 0x258);
                                float var_6e8_1 = var_618;
                                memcpy(var_6f0_1, &var_654, 0x70);
                                float var_6ec_1 = edx_12;
                                float var_6e4_1 = var_614;

                                if (!(*(&((x87_r7_52 < temp9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_52, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_52 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                {
                                label_47be7f:
                                    long double x87_r7_55 = var_614;
                                    long double x87_r6_29 = var_618;
                                    long double x87_r5_13 = var_61c;
                                    long double x87_r7_57 = 1.0 / sqrtl(x87_r5_13 * x87_r5_13
                                        + x87_r6_29 * x87_r6_29 + x87_r7_55 * x87_r7_55);
                                    var_6ec_1 = var_61c * x87_r7_57;
                                    var_6e8_1 = var_6e8_1 * x87_r7_57;
                                    var_6e4_1 = var_6e4_1 * x87_r7_57;
                                }
                                else
                                {
                                    long double x87_r7_53 = var_618;
                                    long double temp16_1 = 0f;
                                    x87_r7_53 - temp16_1;

                                    if (!(*(&((x87_r7_53 < temp16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_53, temp16_1) ? 1 : 0) << 0xa
                                            | (x87_r7_53 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        goto label_47be7f;

                                    long double x87_r7_54 = var_614;
                                    long double temp18_1 = 0f;
                                    x87_r7_54 - temp18_1;

                                    if (!(*(&((x87_r7_54 < temp18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_54, temp18_1) ? 1 : 0) << 0xa
                                            | (x87_r7_54 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        goto label_47be7f;
                                }

                                long double x87_r7_60 = var_5ac - var_5e4;
                                float var_6a4_1 = var_5a4 - var_5dc;
                                long double x87_r6_40 = var_59c - var_5d4;
                                float var_6a0_1 = x87_r6_40;
                                int32_t* eax_55 = var_6c4;
                                var_700_1 += 1;
                                long double x87_r6_43 = x87_r6_40 * var_6e4_1
                                    + var_6a4_1 * var_6e8_1 + x87_r7_60 * var_6ec_1;
                                long double x87_r5_20 = x87_r6_43 * var_6ec_1;
                                long double x87_r5_23 = x87_r6_43 * var_6e8_1;
                                long double x87_r6_44 = x87_r6_43 * var_6e4_1;
                                *eax_55 = x87_r5_20 + x87_r5_20 - x87_r7_60;
                                eax_55[1] = x87_r5_23 + x87_r5_23 - var_6a4_1;
                                eax_55[2] = x87_r6_44 + x87_r6_44 - var_6a0_1;
                                var_6e0_1 = &var_6e0_1[0x44];
                                var_6d4_1 = &var_6d4_1[0x22];
                                var_6f0_1 += 0x88;
                                var_6c4 = &eax_55[0x22];
                            }
                        }
                        double var_5f4;
                        var_704_1 = var_704_1 - var_5f4;
                        bool cond:5_1 = !var_5fc;
                        float var_684_1 = var_6fc_1;
                        float var_680_2 = var_6f8_1 * 20.4799995f;
                        float var_67c_2 = var_6f4_1 * 20.4799995f;
                        var_678 = var_6fc_1 * 20.4799995f + var_64c;
                        double var_644;
                        var_670 = var_680_2 + var_644;
                        double var_63c;
                        var_668 = var_67c_2 + var_63c;

                        if (!cond:5_1)
                            memcpy(&var_5e4, &var_64c, 0x18);
                    }

                    *(ebp_1 + 0x41) = var_705_1;
                    void* eax_61 = **(a1 + 0x6c);

                    if (eax_61 && *(*(eax_61 + 0x12c) + 0x20))
                    {
                        int32_t eax_63 = *(a1 + 0x98);

                        if (eax_63 <= 0 || ebp_1[0x10] || var_705_1)
                        {
                            long double x87_r7_80 = var_59c - var_5d4;
                            long double x87_r6_52 = var_5a4 - var_5dc;
                            long double x87_r5_25 = var_5ac - var_5e4;
                            long double x87_r4_20 = sqrtl(x87_r5_25 * x87_r5_25
                                + x87_r6_52 * x87_r6_52 + x87_r7_80 * x87_r7_80);
                            long double temp3_1 = 0f;
                            x87_r4_20 - temp3_1;

                            if (!(*(&((x87_r4_20 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_20, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r4_20 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                            {
                                *(a1 + 0x98) = 0xa;
                                float var_6dc_2 = x87_r4_20 + var_69c_1;
                                sub_47c4c0(a1, &var_5ac, &var_5e4, var_69c_1, var_6dc_2,
                                    ebp_1[0xd], 0x1e);
                                var_69c_1 = var_6dc_2;
                            }
                        }
                        else
                            *(a1 + 0x98) = eax_63 - 1;
                    }

                    x87_r7_84 = var_704_1;
                    temp2_1 = 0f;
                    x87_r7_84 - temp2_1;
                } while (!(*(&((x87_r7_84 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_84, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_84 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41));
                edx_1 = var_698_1;
            }

            int32_t edi_8 = 0;

            if (var_700_1 > 0)
            {
                void var_508;
                float* esi_10 = &var_508;

                do
                {
                    int16_t eax_70;
                    eax_70 = ebp_1[0x10];
                    int32_t eax_69;

                    if (eax_70)
                        eax_69 = 0;
                    else if (edi_8 >= var_700_1 - 1)
                    {
                        long double x87_r7_88 = esi_10[0xc] * esi_10[-2] + esi_10[0xd] * esi_10[-1]
                            + esi_10[0xe] * *esi_10;
                        long double temp1_1 = 0f;
                        x87_r7_88 - temp1_1;
                        eax_70 = (x87_r7_88 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_88, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_88 == temp1_1 ? 1 : 0) << 0xe;

                        eax_69 = !(*(&eax_70 + 1) & 0x41) ? 0 : 1;
                    }
                    else
                        eax_69 = 1;

                    int32_t* edx_25 = &esi_10[0xc];
                    int32_t* var_71c_9 = edx_25;
                    edx_25 = esi_10[-0x12];
                    HumanPlayer_HandleInput(edx_25, esi_10[-0x11], &esi_10[-0x10], eax_69,
                        var_71c_9);
                    edi_8 += 1;
                    esi_10 = &esi_10[0x22];
                } while (edi_8 < var_700_1);

                edx_1 = var_698_1;
            }

            ecx_35 = var_68c;
            *ebp_1 = 0;
            int32_t eax_73 = *(a1 + 0x94);

            if (ecx_35 < eax_73 - 1)
            {
                ecx_35 -= 1;
                *edx_1 = *(a1 + (eax_73 << 2) + 0xa0);
                edx_1 -= 4;
            }

            edx_1 = &edx_1[1];
            i = *(a1 + 0x94) - 1;
            *(a1 + 0x94) = i;
            var_68c = ecx_35 + 1;
            var_698_1 = edx_1;
        } while (ecx_35 + 1 < i);
    }

    return i;
}
