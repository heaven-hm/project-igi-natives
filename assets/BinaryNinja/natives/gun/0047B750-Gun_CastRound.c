// Original IGI.EXE function: Gun_CastRound (VA 0x0047B750; static CFG gate PASS, CFG score 0.935).
#include "Gun_CastRound.h"
int32_t Gun_CastRound(void* a1)

{
    int32_t i = 0;
    int32_t v_68c = 0;

    if (*(a1 + 0x94) > 0)
    {
        int32_t* tmpD1 = a1 + 0xa4;
        int32_t* v_698_1 = tmpD1;
        int32_t objC35;

        do
        {
            int32_t* flagP1 = *tmpD1;
            int32_t v_694_1 = 0;
            int32_t v_700_1 = 0;
            float v_704_1 = flagP1[0xd];
            float v_69c_1 = 0f;
            long double x87_r7_1 = v_704_1;
            long double f0_1 = 0f;
            x87_r7_1 - f0_1;
            float v_6fc_1 = flagP1[8];
            float v_6f8_1 = flagP1[9];
            float v_6f4_1 = flagP1[0xa];
            double v_678;
            memcpy(&v_678, &flagP1[2], 0x18);

            if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                void v_4d8;
                int32_t* v_6c4 = &v_4d8;
                void v_548;
                void* v_6f0_1 = &v_548;
                void v_54c;
                int32_t* v_6d4_1 = &v_54c;
                void v_550;
                int16_t* v_6e0_1 = &v_550;
                long double x87_r7_84;
                long double f2_1;

                do
                {
                    float v_6c0_1 = v_6fc_1;
                    float v_6c0_2 = v_6fc_1 * v_704_1;
                    int32_t* valA5 = *(a1 + 0x6c);
                    int32_t objC4 = 0;
                    char v_705_1 = 0;
                    int32_t v_5c8_1 = 0;
                    float v_6bc_2 = v_6f8_1 * v_704_1;
                    float v_6b8_2 = v_6f4_1 * v_704_1;
                    double v_588 = v_6c0_2 + v_678;
                    double v_670;
                    double v_580_1 = v_6bc_2 + v_670;
                    double v_668;
                    double v_578_1 = v_6b8_2 + v_668;

                    if (!valA5)
                        int32_t v_5c4 = 0;
                    else
                        v_5c4 = *valA5;

                    int32_t* valA7 = *(a1 + 0x70);

                    if (valA7)
                        objC4 = *valA7;

                    int32_t v_5c0_1 = objC4;
                    int32_t v_5bc_1 = flagP1[0x11];
                    char valA8 = Level_StartMission_2();
                    void* v_654;
                    void v_5cc;
                    DynObj_FindSymbol_11(Level_StartMission_4(), &v_654, &v_678, &v_588, 1, valA8,
                        &v_5cc, 0xffffffff);
                    int32_t v_5fc;
                    int32_t valA10 = v_5fc;
                    double v_5ac;
                    memcpy(&v_5ac, &v_678, 0x18);
                    double v_5e4;
                    memcpy(&v_5e4, &v_588, 0x18);
                    double v_5dc;
                    double v_5d4;
                    double v_5a4;
                    double v_59c;

                    if (!valA10)
                        v_704_1 = 0f;
                    else
                    {
                        int32_t tmpD4 = flagP1[0xe];
                        int32_t v_558_1 = flagP1[0xb];
                        int32_t* valA12 = *(a1 + 0x70);
                        int32_t* v_570 = &v_654;
                        int32_t v_56c_1 = tmpD4;
                        int32_t v_554_1 = flagP1[0xc];

                        if (!valA12)
                            int32_t v_55c_2 = 0;
                        else
                            int32_t v_55c_1 = *valA12;

                        float v_6d8_1 = v_588 - v_678;
                        float v_568_1 = v_6d8_1;
                        float v_690 = v_580_1 - v_670;
                        float v_564_1 = v_690;
                        float v_6dc_1 = v_578_1 - v_668;
                        float v_560_1 = v_6dc_1;
                        double v_64c;
                        void* v_608;
                        void* v_604;

                        if (!v_608)
                        {
                            if (v_604)
                            {
                                if (v_700_1 < 0xa)
                                {
                                    *v_6e0_1 = *(v_604 + 0x25c);
                                    v_6e0_1 = &v_6e0_1[0x44];
                                    *v_6d4_1 = *(v_604 + 0x260);
                                    memcpy(v_6f0_1, &v_654, 0x70);
                                    float objC26 = v_690;
                                    int32_t* objC28 = v_6c4;
                                    float* srcS7 = objC28;
                                    v_6d4_1 = &v_6d4_1[0x22];
                                    v_6f0_1 += 0x88;
                                    *srcS7 = v_6d8_1;
                                    srcS7[1] = objC26;
                                    srcS7[2] = v_6dc_1;
                                    v_700_1 += 1;
                                    v_6c4 = &objC28[0x22];
                                }

                                v_694_1 = 1;
                            }
                        }
                        else if (!v_604)
                        {
                            if (v_654)
                            {
                                uint32_t valA16 = Level_LoadLevel_3();
                                int32_t objC8 = 0;
                                objC8 = *(v_654 + 0x1c);

                                if (*(((valA16 * 0x180 + objC8) << 2) + &g_a96ae0))
                                {
                                    uint32_t valA21 = Level_LoadLevel_3();
                                    int32_t tmpD8 = 0;
                                    void* valA22 = v_654;
                                    tmpD8 = *(valA22 + 0x1c);
                                    (*(((valA21 * 0x180 + tmpD8) << 2) + &g_a96ae0))(valA22,
                                        &v_570);
                                }
                            }

                            uint32_t valA25;
                            uint32_t objC13;

                            if (g_540838 != 0xffffffff)
                            {
                                uint32_t valA23 = Frames_GetUpdateCounter();
                                g_540838;

                                if (valA23 - g_540838 >= 0)
                                {
                                    objC13 = Frames_GetUpdateCounter();
                                    valA25 = g_540838;
                                }
                                else
                                {
                                    valA25 = Frames_GetUpdateCounter();
                                    objC13 = g_540838;
                                }
                            }

                            if (g_540838 == 0xffffffff || objC13 - valA25 > g_5be3d8)
                            {
                                char* valA31 =
                                    (Sys_FreeMemory_14(Level_SetMission_5(), 6) << 5) + v_608 + 0x154;
                                struct status_msg* valA33 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA31);

                                if (valA33)
                                    SoundSys_StopSoundSample_7(valA33, &v_64c);

                                Weapon_FireBullet_7(&v_64c);
                                g_540838 = Frames_GetUpdateCounter();
                                g_5be3d8 = Sys_FreeMemory_14(Level_SetMission_5(), 6) + 6;
                            }

                            float v_61c;
                            float v_618;
                            float v_614;

                            if (!v_694_1)
                            {
                                float v_6b4 = v_6c0_2;
                                v_6b4 = -(v_6c0_2);
                                float v_6b0_2 = -(v_6bc_2);
                                float v_6ac_2 = -(v_6b8_2);
                                float v_6d8_2 = Sys_PushStack_10(&v_6b4, &v_61c);
                                long double x87_r7_27 = *(v_608 + 0x44);
                                long double f6_1 = 0f;
                                x87_r7_27 - f6_1;
                                int16_t valA40 = (x87_r7_27 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_27, f6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_27 == f6_1 ? 1 : 0) << 0xe;
                                float v_688_1;

                                if (*(&valA40 + 1) & 0x40)
                                    v_688_1 = 0f;
                                else
                                {
                                    long double x87_r7_29 = *(v_608 + 0x44) * 0.0174532924f;
                                    v_688_1 = (x87_r7_29 - (1.57079637f - v_6d8_2)) / x87_r7_29;
                                }

                                valA40 = flagP1[0x10];
                                long double fp0_2;
                                long double f8_1;

                                if (!valA40)
                                {
                                    fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                                    f8_1 = v_688_1;
                                    fp0_2 - f8_1;
                                }

                                if (valA40 || !(*(&((fp0_2 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fp0_2, f8_1) ? 1 : 0) << 0xa
                                    | (fp0_2 == f8_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_49 = flagP1[0xf] - *(v_608 + 0x40);
                                    long double f7_1 = 0f;
                                    x87_r7_49 - f7_1;

                                    if (!(*(&((x87_r7_49 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_49, f7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_49 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                    {
                                        long double f10_1 = 1f;
                                        x87_r7_49 - f10_1;

                                        if (*(&((x87_r7_49 < f10_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_49, f10_1) ? 1 : 0) << 0xa
                                                | (x87_r7_49 == f10_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            v_704_1 = 0f;
                                        else
                                        {
                                        label_47bdcb:
                                            v_705_1 = 1;

                                            if (!v_654)
                                                v_704_1 = 0f;
                                        }
                                    }
                                    else
                                    {
                                        long double fp0_4 = Sys_AllocateMemory_14(Level_SetMission_5());
                                        long double f11_1 = 0.600000024f;
                                        fp0_4 - f11_1;

                                        if (*(&((fp0_4 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fp0_4, f11_1) ? 1 : 0) << 0xa
                                                | (fp0_4 == f11_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_47bdcb;

                                        v_704_1 = 0f;
                                    }
                                }
                                else
                                {
                                    long double x87_r7_32 = v_61c;
                                    long double f12_1 = 0f;
                                    x87_r7_32 - f12_1;
                                    float v_6cc_1 = v_618;
                                    float v_6d0_1 = v_61c;
                                    long double x87_r7_38;

                                    if (!(*(&((x87_r7_32 < f12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_32, f12_1) ? 1 : 0) << 0xa
                                        | (x87_r7_32 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    {
                                    label_47bc34:
                                        long double x87_r7_35 = v_614;
                                        long double x87_r6_5 = v_618;
                                        long double x87_r5_1 = v_61c;
                                        long double x87_r7_37 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                            + x87_r6_5 * x87_r6_5 + x87_r7_35 * x87_r7_35);
                                        v_6d0_1 = v_61c * x87_r7_37;
                                        v_6cc_1 = v_6cc_1 * x87_r7_37;
                                        x87_r7_38 = x87_r7_37 * v_614;
                                    }
                                    else
                                    {
                                        long double x87_r7_33 = v_618;
                                        long double f13_1 = 0f;
                                        x87_r7_33 - f13_1;

                                        if (!(*(&((x87_r7_33 < f13_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_33, f13_1) ? 1 : 0) << 0xa
                                                | (x87_r7_33 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bc34;

                                        long double x87_r7_34 = v_614;
                                        long double f15_1 = 0f;
                                        x87_r7_34 - f15_1;

                                        if (!(*(&((x87_r7_34 < f15_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_34, f15_1) ? 1 : 0) << 0xa
                                                | (x87_r7_34 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bc34;

                                        x87_r7_38 = v_614;
                                    }

                                    long double fp0_3;
                                    bool c1_1;
                                    bool c2_7;
                                    fp0_3 = __fcos(v_6d8_2);
                                    long double x87_r6_13 = fp0_3 * v_704_1;
                                    float v_6d0_2 = x87_r6_13 * v_6d0_1;
                                    float v_6cc_2 = x87_r6_13 * v_6cc_1;
                                    long double x87_r7_39 = x87_r7_38 * x87_r6_13;
                                    v_6fc_1 = v_6d0_2 - v_6b4 + v_6d0_2;
                                    v_6f8_1 = v_6cc_2 - v_6b0_2 + v_6cc_2;
                                    v_6f4_1 = x87_r7_39 - v_6ac_2 + x87_r7_39;
                                    long double x87_r7_41 = v_6fc_1;
                                    long double f14_1 = 0f;
                                    x87_r7_41 - f14_1;

                                    if (!(*(&((x87_r7_41 < f14_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_41, f14_1) ? 1 : 0) << 0xa
                                        | (x87_r7_41 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    {
                                    label_47bd25:
                                        long double x87_r7_44 = v_6f4_1;
                                        long double x87_r6_21 = v_6f8_1;
                                        long double x87_r5_11 = v_6fc_1;
                                        long double x87_r7_46 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                                            + x87_r6_21 * x87_r6_21 + x87_r7_44 * x87_r7_44);
                                        v_6fc_1 = v_6fc_1 * x87_r7_46;
                                        v_6f8_1 = v_6f8_1 * x87_r7_46;
                                        v_6f4_1 = v_6f4_1 * x87_r7_46;
                                    }
                                    else
                                    {
                                        long double x87_r7_42 = v_6f8_1;
                                        long double f17_1 = 0f;
                                        x87_r7_42 - f17_1;

                                        if (!(*(&((x87_r7_42 < f17_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_42, f17_1) ? 1 : 0) << 0xa
                                                | (x87_r7_42 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bd25;

                                        long double x87_r7_43 = v_6f4_1;
                                        long double f19_1 = 0f;
                                        x87_r7_43 - f19_1;

                                        if (!(*(&((x87_r7_43 < f19_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_43, f19_1) ? 1 : 0) << 0xa
                                                | (x87_r7_43 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bd25;
                                    }

                                    flagP1[0x10] = 1;
                                    Weapon_FireBullet_7(&v_64c);
                                }
                            }
                            else
                            {
                                v_704_1 = 0f;
                                v_694_1 = 0;
                            }

                            if (v_700_1 < 0xa && *(*(v_608 + 0x258) + 0x58))
                            {
                                long double x87_r7_52 = v_61c;
                                long double f9_1 = 0f;
                                x87_r7_52 - f9_1;
                                *v_6e0_1 = *(v_608 + 0x254);
                                float tmpD12 = v_61c;
                                *v_6d4_1 = *(v_608 + 0x258);
                                float v_6e8_1 = v_618;
                                memcpy(v_6f0_1, &v_654, 0x70);
                                float v_6ec_1 = tmpD12;
                                float v_6e4_1 = v_614;

                                if (!(*(&((x87_r7_52 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_52, f9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_52 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                {
                                label_47be7f:
                                    long double x87_r7_55 = v_614;
                                    long double x87_r6_29 = v_618;
                                    long double x87_r5_13 = v_61c;
                                    long double x87_r7_57 = 1.0 / sqrtl(x87_r5_13 * x87_r5_13
                                        + x87_r6_29 * x87_r6_29 + x87_r7_55 * x87_r7_55);
                                    v_6ec_1 = v_61c * x87_r7_57;
                                    v_6e8_1 = v_6e8_1 * x87_r7_57;
                                    v_6e4_1 = v_6e4_1 * x87_r7_57;
                                }
                                else
                                {
                                    long double x87_r7_53 = v_618;
                                    long double f16_1 = 0f;
                                    x87_r7_53 - f16_1;

                                    if (!(*(&((x87_r7_53 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_53, f16_1) ? 1 : 0) << 0xa
                                            | (x87_r7_53 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        goto label_47be7f;

                                    long double x87_r7_54 = v_614;
                                    long double f18_1 = 0f;
                                    x87_r7_54 - f18_1;

                                    if (!(*(&((x87_r7_54 < f18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_54, f18_1) ? 1 : 0) << 0xa
                                            | (x87_r7_54 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        goto label_47be7f;
                                }

                                long double x87_r7_60 = v_5ac - v_5e4;
                                float v_6a4_1 = v_5a4 - v_5dc;
                                long double x87_r6_40 = v_59c - v_5d4;
                                float v_6a0_1 = x87_r6_40;
                                int32_t* valA55 = v_6c4;
                                v_700_1 += 1;
                                long double x87_r6_43 = x87_r6_40 * v_6e4_1
                                    + v_6a4_1 * v_6e8_1 + x87_r7_60 * v_6ec_1;
                                long double x87_r5_20 = x87_r6_43 * v_6ec_1;
                                long double x87_r5_23 = x87_r6_43 * v_6e8_1;
                                long double x87_r6_44 = x87_r6_43 * v_6e4_1;
                                *valA55 = x87_r5_20 + x87_r5_20 - x87_r7_60;
                                valA55[1] = x87_r5_23 + x87_r5_23 - v_6a4_1;
                                valA55[2] = x87_r6_44 + x87_r6_44 - v_6a0_1;
                                v_6e0_1 = &v_6e0_1[0x44];
                                v_6d4_1 = &v_6d4_1[0x22];
                                v_6f0_1 += 0x88;
                                v_6c4 = &valA55[0x22];
                            }
                        }
                        double v_5f4;
                        v_704_1 = v_704_1 - v_5f4;
                        bool cond_5_1 = !v_5fc;
                        float v_684_1 = v_6fc_1;
                        float v_680_2 = v_6f8_1 * 20.4799995f;
                        float v_67c_2 = v_6f4_1 * 20.4799995f;
                        v_678 = v_6fc_1 * 20.4799995f + v_64c;
                        double v_644;
                        v_670 = v_680_2 + v_644;
                        double v_63c;
                        v_668 = v_67c_2 + v_63c;

                        if (!cond_5_1)
                            memcpy(&v_5e4, &v_64c, 0x18);
                    }

                    *(flagP1 + 0x41) = v_705_1;
                    void* valA61 = **(a1 + 0x6c);

                    if (valA61 && *(*(valA61 + 0x12c) + 0x20))
                    {
                        int32_t valA63 = *(a1 + 0x98);

                        if (valA63 <= 0 || flagP1[0x10] || v_705_1)
                        {
                            long double x87_r7_80 = v_59c - v_5d4;
                            long double x87_r6_52 = v_5a4 - v_5dc;
                            long double x87_r5_25 = v_5ac - v_5e4;
                            long double x87_r4_20 = sqrtl(x87_r5_25 * x87_r5_25
                                + x87_r6_52 * x87_r6_52 + x87_r7_80 * x87_r7_80);
                            long double f3_1 = 0f;
                            x87_r4_20 - f3_1;

                            if (!(*(&((x87_r4_20 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_20, f3_1) ? 1 : 0) << 0xa
                                | (x87_r4_20 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                            {
                                *(a1 + 0x98) = 0xa;
                                float v_6dc_2 = x87_r4_20 + v_69c_1;
                                Weapon_ComputeAccuracy_7(a1, &v_5ac, &v_5e4, v_69c_1, v_6dc_2,
                                    flagP1[0xd], 0x1e);
                                v_69c_1 = v_6dc_2;
                            }
                        }
                        else
                            *(a1 + 0x98) = valA63 - 1;
                    }

                    x87_r7_84 = v_704_1;
                    f2_1 = 0f;
                    x87_r7_84 - f2_1;
                } while (!(*(&((x87_r7_84 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_84, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_84 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41));
                tmpD1 = v_698_1;
            }

            int32_t dstD8 = 0;

            if (v_700_1 > 0)
            {
                void v_508;
                float* srcS10 = &v_508;

                do
                {
                    int16_t valA70;
                    valA70 = flagP1[0x10];
                    int32_t valA69;

                    if (valA70)
                        valA69 = 0;
                    else if (dstD8 >= v_700_1 - 1)
                    {
                        long double x87_r7_88 = srcS10[0xc] * srcS10[-2] + srcS10[0xd] * srcS10[-1]
                            + srcS10[0xe] * *srcS10;
                        long double f1_1 = 0f;
                        x87_r7_88 - f1_1;
                        valA70 = (x87_r7_88 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_88, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_88 == f1_1 ? 1 : 0) << 0xe;

                        valA69 = !(*(&valA70 + 1) & 0x41) ? 0 : 1;
                    }
                    else
                        valA69 = 1;

                    int32_t* tmpD25 = &srcS10[0xc];
                    int32_t* v_71c_9 = tmpD25;
                    tmpD25 = srcS10[-0x12];
                    HumanPlayer_HandleInput(tmpD25, srcS10[-0x11], &srcS10[-0x10], valA69,
                        v_71c_9);
                    dstD8 += 1;
                    srcS10 = &srcS10[0x22];
                } while (dstD8 < v_700_1);

                tmpD1 = v_698_1;
            }

            objC35 = v_68c;
            *flagP1 = 0;
            int32_t valA73 = *(a1 + 0x94);

            if (objC35 < valA73 - 1)
            {
                objC35 -= 1;
                *tmpD1 = *(a1 + (valA73 << 2) + 0xa0);
                tmpD1 -= 4;
            }

            tmpD1 = &tmpD1[1];
            i = *(a1 + 0x94) - 1;
            *(a1 + 0x94) = i;
            v_68c = objC35 + 1;
            v_698_1 = tmpD1;
        } while (objC35 + 1 < i);
    }

    return i;
}
