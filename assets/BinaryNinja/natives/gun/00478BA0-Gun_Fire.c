// Original IGI.EXE function: Gun_Fire (VA 0x00478BA0; static CFG gate PASS, CFG score 0.965).
#include "Gun_Fire.h"
struct status_msg* Gun_Fire(double* context, char* param_2)

{
    char* context_val = param_2;
    char data_val = *context_val;
    int32_t source_val = *(context_val + 4);
    void* temp_val = context[0x25];
    void* item_124 = temp_val;
    char item_132 = data_val;
    char item_131 = data_val;

    if (!source_val)
    {
        WeaponType_UpdateAnim(&context[0x2a], context, 2);
        temp_val = item_124;
        context[0x2a] = context[4] + context[0x2a];
        context[0x2b] = context[5] + context[0x2b];
        context[0x2c] = context[6] + context[0x2c];
    }
    else
        memcpy(&context[0x2a], source_val, 0x18);

    void* data_1 = *(context_val + 8);

    if (!data_1)
    {
        int32_t data_4 = context[0x10];
        context[0x2d] = *(context + 0x74);
        int32_t entity_1 = *(context + 0x8c);
        *(context + 0x16c) = data_4;
        context[0x2e] = entity_1;
    }
    else
    {
        context[0x2d] = *(data_1 + 4);
        *(context + 0x16c) = *(*(context_val + 8) + 0x10);
        context[0x2e] = *(*(context_val + 8) + 0x1c);
    }

    if (!item_132)
        context[0x28] = 0;
    else if (context[0x28] == *(temp_val + 0x64c))
    {
        item_132 = 0;
        item_131 = 0;
    }

    if (*(context + 0x13c))
        item_132 = 0;

    struct status_msg* result = *(context + 0x12c);

    if (result)
    {
        result = *(context + 0x144);

        if (!result)
        {
            item_132 = 0;
            item_131 = 0;
        }
    }

    if (*(temp_val + 0x64c) <= 1)
    {
        result = item_132;

        if (result)
        {
            char* item_148_7;

            if (!(Sys_CheckHeap_13(Level_SetMission_5()) & 1))
                item_148_7 = item_124 + 0x6c0;
            else
                item_148_7 = item_124 + 0x6b0;

            result = SoundSys_SetMasterVolume_7(Script_FormatString(), item_148_7);

            if (result)
                result = SoundSys_StopSoundSample_7(result, &context[4]);
        }
    }
    else
    {
        result = *(context + 0x194);

        if (!item_131)
        {
            if (result)
            {
                uint32_t data_11 = result->head[0];

                if (data_11)
                    SoundSys_SetFrequency_7(data_11);

                Qtask_UpdateList(*(context + 0x194));
                *(context + 0x194) = 0;
                result = SoundSys_SetMasterVolume_7(Script_FormatString(), item_124 + 0x6c0);

                if (result)
                    result = SoundSys_StopSoundSample_7(result, &context[4]);
            }
        }
        else if (result)
        {
            result = result->head[0];

            if (result)
                result = SoundSys_StopSoundSample_7(result, &context[4]);
        }
        else
        {
            result = SoundSys_SetMasterVolume_7(Script_FormatString(), temp_val + 0x6b0);

            if (result)
            {
                int32_t* data_10 = QTask_LinkEventHandler_2(result);
                *(context + 0x194) = data_10;
                result = SoundSys_StopSoundSample_7(*data_10, &context[4]);
            }
        }
    }

    result = item_132;
    context_val[1] = result;

    if (result)
    {
        float item_80;
        WeaponType_SetCategory(&item_80, &context[0x2d]);
        int32_t* data_20 = *(context_val + 0xc);
        void item_28;
        memcpy(&item_28, &item_80, 0x28);
        float item_b4;
        float item_b0_1;
        int32_t* item_ac_1;

        if (!data_20)
        {
            item_b4 = 0.0f;
            item_b0_1 = 0.0f;
            item_ac_1 = nullptr;
        }
        else
        {
            item_b4 = *data_20;
            item_b0_1 = data_20[1];
            item_ac_1 = data_20[2];
        }

        long double fpu_val_7_7;

        if (context[0x28] > 3)
            fpu_val_7_7 = *(item_124 + 0x668);
        else
            fpu_val_7_7 = *(item_124 + 0x664);

        long double fpu_val_7_8 = fpu_val_7_7 * 0.0174532924f;
        long double f2_1 = 0.0f;
        fpu_val_7_8 - f2_1;

        if (*(&((fpu_val_7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_8 = -(fpu_val_7_8);

        void* dest_2 = item_124;
        int32_t i = 0;
        float item_114_1 = fpu_val_7_8;
        float item_130;
        float item_104;
        float item_100;
        float item_fc;
        float item_f8;
        float item_f4;
        float item_f0;
        float item_ec;
        float item_e8;
        float item_e4;

        if (*(dest_2 + 0x640) > 0)
        {
            do
            {
                long double fpu_val_7_9 = item_114_1;
                long double f3_1 = 0.0f;
                fpu_val_7_9 - f3_1;

                if (!(*(&((fpu_val_7_9 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_9, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    float item_108_1 = 1.0f;
                    int32_t j_1 = 3;
                    int32_t j;

                    do
                    {
                        j = j_1;
                        j_1 -= 1;
                        item_108_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * item_108_1;
                    } while (j != 1);
                    int32_t entity_7;
                    long double fp0_2;
                    fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                    int32_t item_150_3 = entity_7;
                    Sys_ReadFileBlock_12(&item_104, item_108_1 * item_114_1, fp0_2 * 6.28318548f, 0.0f);
                    float item_7c;
                    float item_78;
                    float item_dc = item_ec * item_78 + item_f8 * item_7c + item_104 * item_80;
                    float item_d8_1 = item_e8 * item_78 + item_f4 * item_7c + item_100 * item_80;
                    float item_d4_1 = item_e4 * item_78 + item_f0 * item_7c + item_fc * item_80;
                    float item_74;
                    float item_70;
                    float item_6c;
                    float item_d0 = item_6c * item_ec + item_70 * item_f8 + item_74 * item_104;
                    float item_cc_1 = item_6c * item_e8 + item_70 * item_f4 + item_74 * item_100;
                    float item_c8_1 = item_6c * item_e4 + item_70 * item_f0 + item_74 * item_fc;
                    int32_t item_e0;
                    int32_t item_5c;
                    int32_t item_b8_1 = item_e0 + item_5c + 1;
                    float item_68;
                    float item_64;
                    float item_60;
                    float item_c4_1 = item_60 * item_ec + item_64 * item_f8 + item_68 * item_104;
                    float item_c0_1 = item_60 * item_e8 + item_64 * item_f4 + item_68 * item_100;
                    float item_bc_1 = item_60 * item_e4 + item_64 * item_f0 + item_68 * item_fc;
                    memcpy(&item_28, &item_dc, 0x28);

                    if (item_e0 + item_5c + 1 > 0x3e8)
                    {
                        long double fpu_val_7_52 = item_dc;
                        long double f5_1 = 0.0f;
                        fpu_val_7_52 - f5_1;
                        float item_a0_1 = item_d4_1;
                        float item_a8 = item_dc;
                        float item_a4_1 = item_d8_1;

                        if (!(*(&((fpu_val_7_52 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_52, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_52 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_479106:
                            long double fpu_val_7_55 = item_d4_1;
                            long double fpu_val_6_37 = item_d8_1;
                            long double fpu_val_5_1 = item_dc;
                            long double fpu_val_7_57 = 1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1
                                + fpu_val_6_37 * fpu_val_6_37 + fpu_val_7_55 * fpu_val_7_55);
                            item_a8 = item_dc * fpu_val_7_57;
                            item_a4_1 = item_a4_1 * fpu_val_7_57;
                            item_a0_1 = item_a0_1 * fpu_val_7_57;
                        }
                        else
                        {
                            long double fpu_val_7_53 = item_d8_1;
                            long double f6_1 = 0.0f;
                            fpu_val_7_53 - f6_1;

                            if (!(*(&((fpu_val_7_53 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_53, f6_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_53 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479106;

                            long double fpu_val_7_54 = item_d4_1;
                            long double f8_1 = 0.0f;
                            fpu_val_7_54 - f8_1;

                            if (!(*(&((fpu_val_7_54 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_54, f8_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_54 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479106;
                        }

                        item_130 = item_c0_1 * item_d4_1 - item_bc_1 * item_d8_1;
                        float item_9c_1 = item_130;
                        float item_12c_1 = -((item_c4_1 * item_d4_1 - item_bc_1 * item_dc));
                        float item_128_1 = item_c4_1 * item_d8_1 - item_c0_1 * item_dc;
                        float item_120_1 = item_128_1 * item_a4_1 - item_12c_1 * item_a0_1;
                        float item_90_1 = item_120_1;
                        float item_11c_1 = -((item_128_1 * item_a8 - item_130 * item_a0_1));
                        float item_118_1 = item_12c_1 * item_a8 - item_130 * item_a4_1;
                        long double fpu_val_7_79 = item_130;
                        long double f7_1 = 0.0f;
                        fpu_val_7_79 - f7_1;

                        if (!(*(&((fpu_val_7_79 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_79, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_79 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_479280:
                            long double fpu_val_7_82 = item_130;
                            long double fpu_val_6_57 = item_12c_1;
                            long double fpu_val_5_3 = item_128_1;
                            long double fpu_val_7_84 = 1.0 / sqrtl(fpu_val_5_3 * fpu_val_5_3
                                + fpu_val_6_57 * fpu_val_6_57 + fpu_val_7_82 * fpu_val_7_82);
                            float item_9c_2 = item_130 * fpu_val_7_84;
                            float item_98_2 = item_12c_1 * fpu_val_7_84;
                            float item_94_2 = item_128_1 * fpu_val_7_84;
                        }
                        else
                        {
                            long double fpu_val_7_80 = item_12c_1;
                            long double f9_1 = 0.0f;
                            fpu_val_7_80 - f9_1;

                            if (!(*(&((fpu_val_7_80 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_80, f9_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_80 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479280;

                            long double fpu_val_7_81 = item_128_1;
                            long double f11_1 = 0.0f;
                            fpu_val_7_81 - f11_1;

                            if (!(*(&((fpu_val_7_81 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_81, f11_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_81 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479280;
                        }

                        long double fpu_val_7_86 = item_120_1;
                        long double f10_1 = 0.0f;
                        fpu_val_7_86 - f10_1;

                        if (!(*(&((fpu_val_7_86 < f10_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_86, f10_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_86 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47930c:
                            long double fpu_val_7_89 = item_118_1;
                            long double fpu_val_6_65 = item_11c_1;
                            long double fpu_val_5_5 = item_120_1;
                            long double fpu_val_7_91 = 1.0 / sqrtl(fpu_val_5_5 * fpu_val_5_5
                                + fpu_val_6_65 * fpu_val_6_65 + fpu_val_7_89 * fpu_val_7_89);
                            float item_90_2 = item_120_1 * fpu_val_7_91;
                            float item_8c_2 = item_11c_1 * fpu_val_7_91;
                            float item_88_2 = item_118_1 * fpu_val_7_91;
                        }
                        else
                        {
                            long double fpu_val_7_87 = item_11c_1;
                            long double f12_1 = 0.0f;
                            fpu_val_7_87 - f12_1;

                            if (!(*(&((fpu_val_7_87 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_87, f12_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_87 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47930c;

                            long double fpu_val_7_88 = item_118_1;
                            long double f13_1 = 0.0f;
                            fpu_val_7_88 - f13_1;

                            if (!(*(&((fpu_val_7_88 < f13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_88, f13_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_88 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47930c;
                        }

                        memcpy(&item_dc, &item_a8, 0x28);
                        int32_t item_b8_2 = 0;
                    }

                    dest_2 = item_124;
                }

                HumanPlayer_CheckGround_11(context, *(context + 0x14), &context[0x2a], &context[0xe], &item_b4,
                    &item_28, context[0x25], *(context + 0x12c), *(param_2 + 0x28));
                i += 1;
            } while (i < *(dest_2 + 0x640));
        }

        double item_58;
        WeaponType_UpdateAnim(&item_58, context, 3);
        bool flag_4_1 = !*(dest_2 + 0x62c);
        item_58 = item_58 + context[4];
        double item_50 = item_50 + context[5];
        double item_48;
        double item_48_1 = item_48 + context[6];

        if (!flag_4_1 && Level_InitTextures_5(0) == *(context + 0x14))
        {
            float item_114_2 = Sys_FreeMemory_14(Level_SetMission_5(), 0x1e) * 0.0174532924f;
            float item_12c_2 = 0.0f;
            float item_128_2 = 0.0f;
            item_130 = (Sys_FreeMemory_14(Level_SetMission_5(), 4) + 4) * 0x3e8000 / 0x1a5e0;
            Sys_ExecuteBytecode_12(&item_104, -(item_114_2));
            long double fpu_val_7_107 = item_fc * item_128_2 + item_100 * item_12c_2 + item_104 * item_130;
            long double fpu_val_6_80 = item_f0 * item_128_2 + item_f4 * item_12c_2 + item_f8 * item_130;
            long double fpu_val_5_14 = item_e4 * item_128_2 + item_e8 * item_12c_2 + item_ec * item_130;
            float item_120_2 =
                fpu_val_5_14 * context[0xf] + fpu_val_6_80 * *(context + 0x74) + fpu_val_7_107 * context[0xe];
            long double fpu_val_4_27 =
                fpu_val_5_14 * *(context + 0x84) + fpu_val_6_80 * context[0x10] + fpu_val_7_107 * *(context + 0x7c);
            item_130 = item_120_2;
            float item_11c_2 = fpu_val_4_27;
            float item_118_2 =
                fpu_val_5_14 * context[0x12] + fpu_val_6_80 * *(context + 0x8c) + fpu_val_7_107 * context[0x11];
            item_130 = item_120_2 + item_b4;
            float item_12c_4 = item_11c_2 + item_b0_1;
            float item_128_4 = item_118_2 + item_ac_1;
            Weapon_EjectMagazine_5(Script_FormatString(), &item_58, &item_130, &context[0xe], dest_2 + 0x62c);
        }

        double item_40;
        WeaponType_UpdateAnim(&item_40, context, 2);
        int32_t* data_49 = context[0x32];
        item_40 = item_40 + context[4];
        double item_38;
        double item_38_1 = item_38 + context[5];
        double item_30;
        double item_30_1 = item_30 + context[6];

        if (data_49)
        {
            int32_t* data_50 = *data_49;

            if (data_50)
                QTask_FindType(data_50);

            Qtask_UpdateList(context[0x32]);
            context[0x32] = 0;
        }

        long double fpu_val_7_123 = 60.0 / *(dest_2 + 0x644);
        context[0x28] += 1;
        *(context + 0x13c) = fpu_val_7_123 * 30.0;

        if (*(context + 0x12c))
        {
            int32_t data_53 = *(context + 0x144);

            if (data_53 > 0)
                *(context + 0x144) = data_53 - 1;
        }

        context[0x27] = SoundSys_SetFrequency_9();
        context[0x33] = 0x42700000;
        *(context + 0x1a4) = 0xfffffffe;
        long double fpu_val_7_125 = *(dest_2 + 0x644);
        *(context + 0x19c) = 0xfffffff7;
        context_val = param_2;
        context[0x35] = 60.0 / fpu_val_7_125 * 30.0 / 3;
        int32_t data_57;
        int32_t temp_22;
        temp_22 = HIGHD(0x66666667 * 60.0 / *(dest_2 + 0x644) * 30.0);
        data_57 = LOWD(0x66666667 * 60.0 / *(dest_2 + 0x644) * 30.0);
        int32_t temp_23 = temp_22 >> 2;
        result = temp_23 >> 0x1f;
        context[0x34] = temp_23 + result;
    }

    *(context + 0x134) = *context_val;
    result = *context_val;

    if (!result)
        context[0x29] = 0;
    else
    {
        long double fpu_val_7_132 = context[0x29] + 0.0222222228f;
        context[0x29] = fpu_val_7_132;
        long double f1_1 = 1.0f;
        fpu_val_7_132 - f1_1;
        result = (fpu_val_7_132 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_132, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_132 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            context[0x29] = 0x3f800000;
    }

    return result;
}
