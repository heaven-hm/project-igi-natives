// Original IGI.EXE function: Gun_CastRound (VA 0x0047B750; static CFG gate PASS, CFG score 0.935).
#include "Gun_CastRound.h"
int32_t Gun_CastRound(void* context)

{
    int32_t i = 0;
    int32_t item_68c = 0;

    if (*(context + 0x94) > 0)
    {
        int32_t* temp_1 = context + 0xa4;
        int32_t* item_698_1 = temp_1;
        int32_t entity_35;

        do
        {
            int32_t* flagP1 = *temp_1;
            int32_t item_694_1 = 0;
            int32_t item_700_1 = 0;
            float item_704_1 = flagP1[0xd];
            float item_69c_1 = 0.0f;
            long double fpu_val_7_1 = item_704_1;
            long double f0_1 = 0.0f;
            fpu_val_7_1 - f0_1;
            float item_6fc_1 = flagP1[8];
            float item_6f8_1 = flagP1[9];
            float item_6f4_1 = flagP1[0xa];
            double item_678;
            memcpy(&item_678, &flagP1[2], 0x18);

            if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                void item_4d8;
                int32_t* item_6c4 = &item_4d8;
                void item_548;
                void* item_6f0_1 = &item_548;
                void item_54c;
                int32_t* item_6d4_1 = &item_54c;
                void item_550;
                int16_t* item_6e0_1 = &item_550;
                long double fpu_val_7_84;
                long double f2_1;

                do
                {
                    float item_6c0_1 = item_6fc_1;
                    float item_6c0_2 = item_6fc_1 * item_704_1;
                    int32_t* data_5 = *(context + 0x6c);
                    int32_t entity_4 = 0;
                    char item_705_1 = 0;
                    int32_t item_5c8_1 = 0;
                    float item_6bc_2 = item_6f8_1 * item_704_1;
                    float item_6b8_2 = item_6f4_1 * item_704_1;
                    double item_588 = item_6c0_2 + item_678;
                    double item_670;
                    double item_580_1 = item_6bc_2 + item_670;
                    double item_668;
                    double item_578_1 = item_6b8_2 + item_668;

                    if (!data_5)
                        int32_t item_5c4 = 0;
                    else
                        item_5c4 = *data_5;

                    int32_t* data_7 = *(context + 0x70);

                    if (data_7)
                        entity_4 = *data_7;

                    int32_t item_5c0_1 = entity_4;
                    int32_t item_5bc_1 = flagP1[0x11];
                    char data_8 = Level_StartMission_2();
                    void* item_654;
                    void item_5cc;
                    DynObj_FindSymbol_11(Level_StartMission_4(), &item_654, &item_678, &item_588, 1, data_8,
                        &item_5cc, 0xffffffff);
                    int32_t item_5fc;
                    int32_t data_10 = item_5fc;
                    double item_5ac;
                    memcpy(&item_5ac, &item_678, 0x18);
                    double item_5e4;
                    memcpy(&item_5e4, &item_588, 0x18);
                    double item_5dc;
                    double item_5d4;
                    double item_5a4;
                    double item_59c;

                    if (!data_10)
                        item_704_1 = 0.0f;
                    else
                    {
                        int32_t temp_4 = flagP1[0xe];
                        int32_t item_558_1 = flagP1[0xb];
                        int32_t* data_12 = *(context + 0x70);
                        int32_t* item_570 = &item_654;
                        int32_t item_56c_1 = temp_4;
                        int32_t item_554_1 = flagP1[0xc];

                        if (!data_12)
                            int32_t item_55c_2 = 0;
                        else
                            int32_t item_55c_1 = *data_12;

                        float item_6d8_1 = item_588 - item_678;
                        float item_568_1 = item_6d8_1;
                        float item_690 = item_580_1 - item_670;
                        float item_564_1 = item_690;
                        float item_6dc_1 = item_578_1 - item_668;
                        float item_560_1 = item_6dc_1;
                        double item_64c;
                        void* item_608;
                        void* item_604;

                        if (!item_608)
                        {
                            if (item_604)
                            {
                                if (item_700_1 < 0xa)
                                {
                                    *item_6e0_1 = *(item_604 + 0x25c);
                                    item_6e0_1 = &item_6e0_1[0x44];
                                    *item_6d4_1 = *(item_604 + 0x260);
                                    memcpy(item_6f0_1, &item_654, 0x70);
                                    float entity_26 = item_690;
                                    int32_t* entity_28 = item_6c4;
                                    float* source_7 = entity_28;
                                    item_6d4_1 = &item_6d4_1[0x22];
                                    item_6f0_1 += 0x88;
                                    *source_7 = item_6d8_1;
                                    source_7[1] = entity_26;
                                    source_7[2] = item_6dc_1;
                                    item_700_1 += 1;
                                    item_6c4 = &entity_28[0x22];
                                }

                                item_694_1 = 1;
                            }
                        }
                        else if (!item_604)
                        {
                            if (item_654)
                            {
                                uint32_t data_16 = Level_LoadLevel_3();
                                int32_t entity_8 = 0;
                                entity_8 = *(item_654 + 0x1c);

                                if (*(((data_16 * 0x180 + entity_8) << 2) + &g_a96ae0))
                                {
                                    uint32_t data_21 = Level_LoadLevel_3();
                                    int32_t temp_8 = 0;
                                    void* data_22 = item_654;
                                    temp_8 = *(data_22 + 0x1c);
                                    (*(((data_21 * 0x180 + temp_8) << 2) + &g_a96ae0))(data_22,
                                        &item_570);
                                }
                            }

                            uint32_t data_25;
                            uint32_t entity_13;

                            if (g_540838 != 0xffffffff)
                            {
                                uint32_t data_23 = Frames_GetUpdateCounter();
                                g_540838;

                                if (data_23 - g_540838 >= 0)
                                {
                                    entity_13 = Frames_GetUpdateCounter();
                                    data_25 = g_540838;
                                }
                                else
                                {
                                    data_25 = Frames_GetUpdateCounter();
                                    entity_13 = g_540838;
                                }
                            }

                            if (g_540838 == 0xffffffff || entity_13 - data_25 > g_5be3d8)
                            {
                                char* data_31 =
                                    (Sys_FreeMemory_14(Level_SetMission_5(), 6) << 5) + item_608 + 0x154;
                                struct status_msg* data_33 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_31);

                                if (data_33)
                                    SoundSys_StopSoundSample_7(data_33, &item_64c);

                                Weapon_FireBullet_7(&item_64c);
                                g_540838 = Frames_GetUpdateCounter();
                                g_5be3d8 = Sys_FreeMemory_14(Level_SetMission_5(), 6) + 6;
                            }

                            float item_61c;
                            float item_618;
                            float item_614;

                            if (!item_694_1)
                            {
                                float item_6b4 = item_6c0_2;
                                item_6b4 = -(item_6c0_2);
                                float item_6b0_2 = -(item_6bc_2);
                                float item_6ac_2 = -(item_6b8_2);
                                float item_6d8_2 = Sys_PushStack_10(&item_6b4, &item_61c);
                                long double fpu_val_7_27 = *(item_608 + 0x44);
                                long double f6_1 = 0.0f;
                                fpu_val_7_27 - f6_1;
                                int16_t data_40 = (fpu_val_7_27 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_27, f6_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_27 == f6_1 ? 1 : 0) << 0xe;
                                float item_688_1;

                                if (*(&data_40 + 1) & 0x40)
                                    item_688_1 = 0.0f;
                                else
                                {
                                    long double fpu_val_7_29 = *(item_608 + 0x44) * 0.0174532924f;
                                    item_688_1 = (fpu_val_7_29 - (1.57079637f - item_6d8_2)) / fpu_val_7_29;
                                }

                                data_40 = flagP1[0x10];
                                long double fp0_2;
                                long double f8_1;

                                if (!data_40)
                                {
                                    fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                                    f8_1 = item_688_1;
                                    fp0_2 - f8_1;
                                }

                                if (data_40 || !(*(&((fp0_2 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fp0_2, f8_1) ? 1 : 0) << 0xa
                                    | (fp0_2 == f8_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_49 = flagP1[0xf] - *(item_608 + 0x40);
                                    long double f7_1 = 0.0f;
                                    fpu_val_7_49 - f7_1;

                                    if (!(*(&((fpu_val_7_49 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_49, f7_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_49 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                    {
                                        long double f10_1 = 1.0f;
                                        fpu_val_7_49 - f10_1;

                                        if (*(&((fpu_val_7_49 < f10_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_49, f10_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_49 == f10_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            item_704_1 = 0.0f;
                                        else
                                        {
                                        label_47bdcb:
                                            item_705_1 = 1;

                                            if (!item_654)
                                                item_704_1 = 0.0f;
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

                                        item_704_1 = 0.0f;
                                    }
                                }
                                else
                                {
                                    long double fpu_val_7_32 = item_61c;
                                    long double f12_1 = 0.0f;
                                    fpu_val_7_32 - f12_1;
                                    float item_6cc_1 = item_618;
                                    float item_6d0_1 = item_61c;
                                    long double fpu_val_7_38;

                                    if (!(*(&((fpu_val_7_32 < f12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_32, f12_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_32 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    {
                                    label_47bc34:
                                        long double fpu_val_7_35 = item_614;
                                        long double fpu_val_6_5 = item_618;
                                        long double fpu_val_5_1 = item_61c;
                                        long double fpu_val_7_37 = 1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1
                                            + fpu_val_6_5 * fpu_val_6_5 + fpu_val_7_35 * fpu_val_7_35);
                                        item_6d0_1 = item_61c * fpu_val_7_37;
                                        item_6cc_1 = item_6cc_1 * fpu_val_7_37;
                                        fpu_val_7_38 = fpu_val_7_37 * item_614;
                                    }
                                    else
                                    {
                                        long double fpu_val_7_33 = item_618;
                                        long double f13_1 = 0.0f;
                                        fpu_val_7_33 - f13_1;

                                        if (!(*(&((fpu_val_7_33 < f13_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_33, f13_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_33 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bc34;

                                        long double fpu_val_7_34 = item_614;
                                        long double f15_1 = 0.0f;
                                        fpu_val_7_34 - f15_1;

                                        if (!(*(&((fpu_val_7_34 < f15_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_34, f15_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_34 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bc34;

                                        fpu_val_7_38 = item_614;
                                    }

                                    long double fp0_3;
                                    bool c1_1;
                                    bool c2_7;
                                    fp0_3 = __fcos(item_6d8_2);
                                    long double fpu_val_6_13 = fp0_3 * item_704_1;
                                    float item_6d0_2 = fpu_val_6_13 * item_6d0_1;
                                    float item_6cc_2 = fpu_val_6_13 * item_6cc_1;
                                    long double fpu_val_7_39 = fpu_val_7_38 * fpu_val_6_13;
                                    item_6fc_1 = item_6d0_2 - item_6b4 + item_6d0_2;
                                    item_6f8_1 = item_6cc_2 - item_6b0_2 + item_6cc_2;
                                    item_6f4_1 = fpu_val_7_39 - item_6ac_2 + fpu_val_7_39;
                                    long double fpu_val_7_41 = item_6fc_1;
                                    long double f14_1 = 0.0f;
                                    fpu_val_7_41 - f14_1;

                                    if (!(*(&((fpu_val_7_41 < f14_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_41, f14_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_41 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    {
                                    label_47bd25:
                                        long double fpu_val_7_44 = item_6f4_1;
                                        long double fpu_val_6_21 = item_6f8_1;
                                        long double fpu_val_5_11 = item_6fc_1;
                                        long double fpu_val_7_46 = 1.0 / sqrtl(fpu_val_5_11 * fpu_val_5_11
                                            + fpu_val_6_21 * fpu_val_6_21 + fpu_val_7_44 * fpu_val_7_44);
                                        item_6fc_1 = item_6fc_1 * fpu_val_7_46;
                                        item_6f8_1 = item_6f8_1 * fpu_val_7_46;
                                        item_6f4_1 = item_6f4_1 * fpu_val_7_46;
                                    }
                                    else
                                    {
                                        long double fpu_val_7_42 = item_6f8_1;
                                        long double f17_1 = 0.0f;
                                        fpu_val_7_42 - f17_1;

                                        if (!(*(&((fpu_val_7_42 < f17_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_42, f17_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_42 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bd25;

                                        long double fpu_val_7_43 = item_6f4_1;
                                        long double f19_1 = 0.0f;
                                        fpu_val_7_43 - f19_1;

                                        if (!(*(&((fpu_val_7_43 < f19_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_43, f19_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_43 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            goto label_47bd25;
                                    }

                                    flagP1[0x10] = 1;
                                    Weapon_FireBullet_7(&item_64c);
                                }
                            }
                            else
                            {
                                item_704_1 = 0.0f;
                                item_694_1 = 0;
                            }

                            if (item_700_1 < 0xa && *(*(item_608 + 0x258) + 0x58))
                            {
                                long double fpu_val_7_52 = item_61c;
                                long double f9_1 = 0.0f;
                                fpu_val_7_52 - f9_1;
                                *item_6e0_1 = *(item_608 + 0x254);
                                float temp_12 = item_61c;
                                *item_6d4_1 = *(item_608 + 0x258);
                                float item_6e8_1 = item_618;
                                memcpy(item_6f0_1, &item_654, 0x70);
                                float item_6ec_1 = temp_12;
                                float item_6e4_1 = item_614;

                                if (!(*(&((fpu_val_7_52 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_52, f9_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_52 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                {
                                label_47be7f:
                                    long double fpu_val_7_55 = item_614;
                                    long double fpu_val_6_29 = item_618;
                                    long double fpu_val_5_13 = item_61c;
                                    long double fpu_val_7_57 = 1.0 / sqrtl(fpu_val_5_13 * fpu_val_5_13
                                        + fpu_val_6_29 * fpu_val_6_29 + fpu_val_7_55 * fpu_val_7_55);
                                    item_6ec_1 = item_61c * fpu_val_7_57;
                                    item_6e8_1 = item_6e8_1 * fpu_val_7_57;
                                    item_6e4_1 = item_6e4_1 * fpu_val_7_57;
                                }
                                else
                                {
                                    long double fpu_val_7_53 = item_618;
                                    long double f16_1 = 0.0f;
                                    fpu_val_7_53 - f16_1;

                                    if (!(*(&((fpu_val_7_53 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_53, f16_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_53 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        goto label_47be7f;

                                    long double fpu_val_7_54 = item_614;
                                    long double f18_1 = 0.0f;
                                    fpu_val_7_54 - f18_1;

                                    if (!(*(&((fpu_val_7_54 < f18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_54, f18_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_54 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        goto label_47be7f;
                                }

                                long double fpu_val_7_60 = item_5ac - item_5e4;
                                float item_6a4_1 = item_5a4 - item_5dc;
                                long double fpu_val_6_40 = item_59c - item_5d4;
                                float item_6a0_1 = fpu_val_6_40;
                                int32_t* data_55 = item_6c4;
                                item_700_1 += 1;
                                long double fpu_val_6_43 = fpu_val_6_40 * item_6e4_1
                                    + item_6a4_1 * item_6e8_1 + fpu_val_7_60 * item_6ec_1;
                                long double fpu_val_5_20 = fpu_val_6_43 * item_6ec_1;
                                long double fpu_val_5_23 = fpu_val_6_43 * item_6e8_1;
                                long double fpu_val_6_44 = fpu_val_6_43 * item_6e4_1;
                                *data_55 = fpu_val_5_20 + fpu_val_5_20 - fpu_val_7_60;
                                data_55[1] = fpu_val_5_23 + fpu_val_5_23 - item_6a4_1;
                                data_55[2] = fpu_val_6_44 + fpu_val_6_44 - item_6a0_1;
                                item_6e0_1 = &item_6e0_1[0x44];
                                item_6d4_1 = &item_6d4_1[0x22];
                                item_6f0_1 += 0x88;
                                item_6c4 = &data_55[0x22];
                            }
                        }
                        double item_5f4;
                        item_704_1 = item_704_1 - item_5f4;
                        bool flag_5_1 = !item_5fc;
                        float item_684_1 = item_6fc_1;
                        float item_680_2 = item_6f8_1 * 20.4799995f;
                        float item_67c_2 = item_6f4_1 * 20.4799995f;
                        item_678 = item_6fc_1 * 20.4799995f + item_64c;
                        double item_644;
                        item_670 = item_680_2 + item_644;
                        double item_63c;
                        item_668 = item_67c_2 + item_63c;

                        if (!flag_5_1)
                            memcpy(&item_5e4, &item_64c, 0x18);
                    }

                    *(flagP1 + 0x41) = item_705_1;
                    void* data_61 = **(context + 0x6c);

                    if (data_61 && *(*(data_61 + 0x12c) + 0x20))
                    {
                        int32_t data_63 = *(context + 0x98);

                        if (data_63 <= 0 || flagP1[0x10] || item_705_1)
                        {
                            long double fpu_val_7_80 = item_59c - item_5d4;
                            long double fpu_val_6_52 = item_5a4 - item_5dc;
                            long double fpu_val_5_25 = item_5ac - item_5e4;
                            long double fpu_val_4_20 = sqrtl(fpu_val_5_25 * fpu_val_5_25
                                + fpu_val_6_52 * fpu_val_6_52 + fpu_val_7_80 * fpu_val_7_80);
                            long double f3_1 = 0.0f;
                            fpu_val_4_20 - f3_1;

                            if (!(*(&((fpu_val_4_20 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_20, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_4_20 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                            {
                                *(context + 0x98) = 0xa;
                                float item_6dc_2 = fpu_val_4_20 + item_69c_1;
                                Weapon_ComputeAccuracy_7(context, &item_5ac, &item_5e4, item_69c_1, item_6dc_2,
                                    flagP1[0xd], 0x1e);
                                item_69c_1 = item_6dc_2;
                            }
                        }
                        else
                            *(context + 0x98) = data_63 - 1;
                    }

                    fpu_val_7_84 = item_704_1;
                    f2_1 = 0.0f;
                    fpu_val_7_84 - f2_1;
                } while (!(*(&((fpu_val_7_84 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_84, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_84 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41));
                temp_1 = item_698_1;
            }

            int32_t dest_8 = 0;

            if (item_700_1 > 0)
            {
                void item_508;
                float* source_10 = &item_508;

                do
                {
                    int16_t data_70;
                    data_70 = flagP1[0x10];
                    int32_t data_69;

                    if (data_70)
                        data_69 = 0;
                    else if (dest_8 >= item_700_1 - 1)
                    {
                        long double fpu_val_7_88 = source_10[0xc] * source_10[-2] + source_10[0xd] * source_10[-1]
                            + source_10[0xe] * *source_10;
                        long double f1_1 = 0.0f;
                        fpu_val_7_88 - f1_1;
                        data_70 = (fpu_val_7_88 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_88, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_88 == f1_1 ? 1 : 0) << 0xe;

                        data_69 = !(*(&data_70 + 1) & 0x41) ? 0 : 1;
                    }
                    else
                        data_69 = 1;

                    int32_t* temp_25 = &source_10[0xc];
                    int32_t* item_71c_9 = temp_25;
                    temp_25 = source_10[-0x12];
                    HumanPlayer_HandleInput(temp_25, source_10[-0x11], &source_10[-0x10], data_69,
                        item_71c_9);
                    dest_8 += 1;
                    source_10 = &source_10[0x22];
                } while (dest_8 < item_700_1);

                temp_1 = item_698_1;
            }

            entity_35 = item_68c;
            *flagP1 = 0;
            int32_t data_73 = *(context + 0x94);

            if (entity_35 < data_73 - 1)
            {
                entity_35 -= 1;
                *temp_1 = *(context + (data_73 << 2) + 0xa0);
                temp_1 -= 4;
            }

            temp_1 = &temp_1[1];
            i = *(context + 0x94) - 1;
            *(context + 0x94) = i;
            item_68c = entity_35 + 1;
            item_698_1 = temp_1;
        } while (entity_35 + 1 < i);
    }

    return i;
}
