// Original IGI.EXE function: Gun_Fire (VA 0x00478BA0; static CFG gate PASS, CFG score 0.965).
#include "Gun_Fire.h"
struct status_msg* Gun_Fire(double* a1, char* a2)

{
    char* ctxB = a2;
    char valA = *ctxB;
    int32_t srcS = *(ctxB + 4);
    void* tmpD = a1[0x25];
    void* v_124 = tmpD;
    char v_132 = valA;
    char v_131 = valA;

    if (!srcS)
    {
        WeaponType_UpdateAnim(&a1[0x2a], a1, 2);
        tmpD = v_124;
        a1[0x2a] = a1[4] + a1[0x2a];
        a1[0x2b] = a1[5] + a1[0x2b];
        a1[0x2c] = a1[6] + a1[0x2c];
    }
    else
        memcpy(&a1[0x2a], srcS, 0x18);

    void* valA1 = *(ctxB + 8);

    if (!valA1)
    {
        int32_t valA4 = a1[0x10];
        a1[0x2d] = *(a1 + 0x74);
        int32_t objC1 = *(a1 + 0x8c);
        *(a1 + 0x16c) = valA4;
        a1[0x2e] = objC1;
    }
    else
    {
        a1[0x2d] = *(valA1 + 4);
        *(a1 + 0x16c) = *(*(ctxB + 8) + 0x10);
        a1[0x2e] = *(*(ctxB + 8) + 0x1c);
    }

    if (!v_132)
        a1[0x28] = 0;
    else if (a1[0x28] == *(tmpD + 0x64c))
    {
        v_132 = 0;
        v_131 = 0;
    }

    if (*(a1 + 0x13c))
        v_132 = 0;

    struct status_msg* result = *(a1 + 0x12c);

    if (result)
    {
        result = *(a1 + 0x144);

        if (!result)
        {
            v_132 = 0;
            v_131 = 0;
        }
    }

    if (*(tmpD + 0x64c) <= 1)
    {
        result = v_132;

        if (result)
        {
            char* v_148_7;

            if (!(Sys_CheckHeap_13(Level_SetMission_5()) & 1))
                v_148_7 = v_124 + 0x6c0;
            else
                v_148_7 = v_124 + 0x6b0;

            result = SoundSys_SetMasterVolume_7(Script_FormatString(), v_148_7);

            if (result)
                result = SoundSys_StopSoundSample_7(result, &a1[4]);
        }
    }
    else
    {
        result = *(a1 + 0x194);

        if (!v_131)
        {
            if (result)
            {
                uint32_t valA11 = result->head[0];

                if (valA11)
                    SoundSys_SetFrequency_7(valA11);

                Qtask_UpdateList(*(a1 + 0x194));
                *(a1 + 0x194) = 0;
                result = SoundSys_SetMasterVolume_7(Script_FormatString(), v_124 + 0x6c0);

                if (result)
                    result = SoundSys_StopSoundSample_7(result, &a1[4]);
            }
        }
        else if (result)
        {
            result = result->head[0];

            if (result)
                result = SoundSys_StopSoundSample_7(result, &a1[4]);
        }
        else
        {
            result = SoundSys_SetMasterVolume_7(Script_FormatString(), tmpD + 0x6b0);

            if (result)
            {
                int32_t* valA10 = QTask_LinkEventHandler_2(result);
                *(a1 + 0x194) = valA10;
                result = SoundSys_StopSoundSample_7(*valA10, &a1[4]);
            }
        }
    }

    result = v_132;
    ctxB[1] = result;

    if (result)
    {
        float v_80;
        WeaponType_SetCategory(&v_80, &a1[0x2d]);
        int32_t* valA20 = *(ctxB + 0xc);
        void v_28;
        memcpy(&v_28, &v_80, 0x28);
        float v_b4;
        float v_b0_1;
        int32_t* v_ac_1;

        if (!valA20)
        {
            v_b4 = 0f;
            v_b0_1 = 0f;
            v_ac_1 = nullptr;
        }
        else
        {
            v_b4 = *valA20;
            v_b0_1 = valA20[1];
            v_ac_1 = valA20[2];
        }

        long double x87_r7_7;

        if (a1[0x28] > 3)
            x87_r7_7 = *(v_124 + 0x668);
        else
            x87_r7_7 = *(v_124 + 0x664);

        long double x87_r7_8 = x87_r7_7 * 0.0174532924f;
        long double f2_1 = 0f;
        x87_r7_8 - f2_1;

        if (*(&((x87_r7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_8 = -(x87_r7_8);

        void* dstD2 = v_124;
        int32_t i = 0;
        float v_114_1 = x87_r7_8;
        float v_130;
        float v_104;
        float v_100;
        float v_fc;
        float v_f8;
        float v_f4;
        float v_f0;
        float v_ec;
        float v_e8;
        float v_e4;

        if (*(dstD2 + 0x640) > 0)
        {
            do
            {
                long double x87_r7_9 = v_114_1;
                long double f3_1 = 0f;
                x87_r7_9 - f3_1;

                if (!(*(&((x87_r7_9 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    float v_108_1 = 1f;
                    int32_t j_1 = 3;
                    int32_t j;

                    do
                    {
                        j = j_1;
                        j_1 -= 1;
                        v_108_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * v_108_1;
                    } while (j != 1);
                    int32_t objC7;
                    long double fp0_2;
                    fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                    int32_t v_150_3 = objC7;
                    Sys_ReadFileBlock_12(&v_104, v_108_1 * v_114_1, fp0_2 * 6.28318548f, 0f);
                    float v_7c;
                    float v_78;
                    float v_dc = v_ec * v_78 + v_f8 * v_7c + v_104 * v_80;
                    float v_d8_1 = v_e8 * v_78 + v_f4 * v_7c + v_100 * v_80;
                    float v_d4_1 = v_e4 * v_78 + v_f0 * v_7c + v_fc * v_80;
                    float v_74;
                    float v_70;
                    float v_6c;
                    float v_d0 = v_6c * v_ec + v_70 * v_f8 + v_74 * v_104;
                    float v_cc_1 = v_6c * v_e8 + v_70 * v_f4 + v_74 * v_100;
                    float v_c8_1 = v_6c * v_e4 + v_70 * v_f0 + v_74 * v_fc;
                    int32_t v_e0;
                    int32_t v_5c;
                    int32_t v_b8_1 = v_e0 + v_5c + 1;
                    float v_68;
                    float v_64;
                    float v_60;
                    float v_c4_1 = v_60 * v_ec + v_64 * v_f8 + v_68 * v_104;
                    float v_c0_1 = v_60 * v_e8 + v_64 * v_f4 + v_68 * v_100;
                    float v_bc_1 = v_60 * v_e4 + v_64 * v_f0 + v_68 * v_fc;
                    memcpy(&v_28, &v_dc, 0x28);

                    if (v_e0 + v_5c + 1 > 0x3e8)
                    {
                        long double x87_r7_52 = v_dc;
                        long double f5_1 = 0f;
                        x87_r7_52 - f5_1;
                        float v_a0_1 = v_d4_1;
                        float v_a8 = v_dc;
                        float v_a4_1 = v_d8_1;

                        if (!(*(&((x87_r7_52 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_52, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_52 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_479106:
                            long double x87_r7_55 = v_d4_1;
                            long double x87_r6_37 = v_d8_1;
                            long double x87_r5_1 = v_dc;
                            long double x87_r7_57 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                + x87_r6_37 * x87_r6_37 + x87_r7_55 * x87_r7_55);
                            v_a8 = v_dc * x87_r7_57;
                            v_a4_1 = v_a4_1 * x87_r7_57;
                            v_a0_1 = v_a0_1 * x87_r7_57;
                        }
                        else
                        {
                            long double x87_r7_53 = v_d8_1;
                            long double f6_1 = 0f;
                            x87_r7_53 - f6_1;

                            if (!(*(&((x87_r7_53 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_53, f6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_53 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479106;

                            long double x87_r7_54 = v_d4_1;
                            long double f8_1 = 0f;
                            x87_r7_54 - f8_1;

                            if (!(*(&((x87_r7_54 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_54, f8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_54 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479106;
                        }

                        v_130 = v_c0_1 * v_d4_1 - v_bc_1 * v_d8_1;
                        float v_9c_1 = v_130;
                        float v_12c_1 = -((v_c4_1 * v_d4_1 - v_bc_1 * v_dc));
                        float v_128_1 = v_c4_1 * v_d8_1 - v_c0_1 * v_dc;
                        float v_120_1 = v_128_1 * v_a4_1 - v_12c_1 * v_a0_1;
                        float v_90_1 = v_120_1;
                        float v_11c_1 = -((v_128_1 * v_a8 - v_130 * v_a0_1));
                        float v_118_1 = v_12c_1 * v_a8 - v_130 * v_a4_1;
                        long double x87_r7_79 = v_130;
                        long double f7_1 = 0f;
                        x87_r7_79 - f7_1;

                        if (!(*(&((x87_r7_79 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_79, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_79 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_479280:
                            long double x87_r7_82 = v_130;
                            long double x87_r6_57 = v_12c_1;
                            long double x87_r5_3 = v_128_1;
                            long double x87_r7_84 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                                + x87_r6_57 * x87_r6_57 + x87_r7_82 * x87_r7_82);
                            float v_9c_2 = v_130 * x87_r7_84;
                            float v_98_2 = v_12c_1 * x87_r7_84;
                            float v_94_2 = v_128_1 * x87_r7_84;
                        }
                        else
                        {
                            long double x87_r7_80 = v_12c_1;
                            long double f9_1 = 0f;
                            x87_r7_80 - f9_1;

                            if (!(*(&((x87_r7_80 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_80, f9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_80 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479280;

                            long double x87_r7_81 = v_128_1;
                            long double f11_1 = 0f;
                            x87_r7_81 - f11_1;

                            if (!(*(&((x87_r7_81 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_81, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_81 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_479280;
                        }

                        long double x87_r7_86 = v_120_1;
                        long double f10_1 = 0f;
                        x87_r7_86 - f10_1;

                        if (!(*(&((x87_r7_86 < f10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_86, f10_1) ? 1 : 0) << 0xa
                            | (x87_r7_86 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47930c:
                            long double x87_r7_89 = v_118_1;
                            long double x87_r6_65 = v_11c_1;
                            long double x87_r5_5 = v_120_1;
                            long double x87_r7_91 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                                + x87_r6_65 * x87_r6_65 + x87_r7_89 * x87_r7_89);
                            float v_90_2 = v_120_1 * x87_r7_91;
                            float v_8c_2 = v_11c_1 * x87_r7_91;
                            float v_88_2 = v_118_1 * x87_r7_91;
                        }
                        else
                        {
                            long double x87_r7_87 = v_11c_1;
                            long double f12_1 = 0f;
                            x87_r7_87 - f12_1;

                            if (!(*(&((x87_r7_87 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_87, f12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_87 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47930c;

                            long double x87_r7_88 = v_118_1;
                            long double f13_1 = 0f;
                            x87_r7_88 - f13_1;

                            if (!(*(&((x87_r7_88 < f13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_88, f13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_88 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47930c;
                        }

                        memcpy(&v_dc, &v_a8, 0x28);
                        int32_t v_b8_2 = 0;
                    }

                    dstD2 = v_124;
                }

                HumanPlayer_CheckGround_11(a1, *(a1 + 0x14), &a1[0x2a], &a1[0xe], &v_b4,
                    &v_28, a1[0x25], *(a1 + 0x12c), *(a2 + 0x28));
                i += 1;
            } while (i < *(dstD2 + 0x640));
        }

        double v_58;
        WeaponType_UpdateAnim(&v_58, a1, 3);
        bool cond_4_1 = !*(dstD2 + 0x62c);
        v_58 = v_58 + a1[4];
        double v_50 = v_50 + a1[5];
        double v_48;
        double v_48_1 = v_48 + a1[6];

        if (!cond_4_1 && Level_InitTextures_5(0) == *(a1 + 0x14))
        {
            float v_114_2 = Sys_FreeMemory_14(Level_SetMission_5(), 0x1e) * 0.0174532924f;
            float v_12c_2 = 0f;
            float v_128_2 = 0f;
            v_130 = (Sys_FreeMemory_14(Level_SetMission_5(), 4) + 4) * 0x3e8000 / 0x1a5e0;
            Sys_ExecuteBytecode_12(&v_104, -(v_114_2));
            long double x87_r7_107 = v_fc * v_128_2 + v_100 * v_12c_2 + v_104 * v_130;
            long double x87_r6_80 = v_f0 * v_128_2 + v_f4 * v_12c_2 + v_f8 * v_130;
            long double x87_r5_14 = v_e4 * v_128_2 + v_e8 * v_12c_2 + v_ec * v_130;
            float v_120_2 =
                x87_r5_14 * a1[0xf] + x87_r6_80 * *(a1 + 0x74) + x87_r7_107 * a1[0xe];
            long double x87_r4_27 =
                x87_r5_14 * *(a1 + 0x84) + x87_r6_80 * a1[0x10] + x87_r7_107 * *(a1 + 0x7c);
            v_130 = v_120_2;
            float v_11c_2 = x87_r4_27;
            float v_118_2 =
                x87_r5_14 * a1[0x12] + x87_r6_80 * *(a1 + 0x8c) + x87_r7_107 * a1[0x11];
            v_130 = v_120_2 + v_b4;
            float v_12c_4 = v_11c_2 + v_b0_1;
            float v_128_4 = v_118_2 + v_ac_1;
            Weapon_EjectMagazine_5(Script_FormatString(), &v_58, &v_130, &a1[0xe], dstD2 + 0x62c);
        }

        double v_40;
        WeaponType_UpdateAnim(&v_40, a1, 2);
        int32_t* valA49 = a1[0x32];
        v_40 = v_40 + a1[4];
        double v_38;
        double v_38_1 = v_38 + a1[5];
        double v_30;
        double v_30_1 = v_30 + a1[6];

        if (valA49)
        {
            int32_t* valA50 = *valA49;

            if (valA50)
                QTask_FindType(valA50);

            Qtask_UpdateList(a1[0x32]);
            a1[0x32] = 0;
        }

        long double x87_r7_123 = 60.0 / *(dstD2 + 0x644);
        a1[0x28] += 1;
        *(a1 + 0x13c) = x87_r7_123 * 30.0;

        if (*(a1 + 0x12c))
        {
            int32_t valA53 = *(a1 + 0x144);

            if (valA53 > 0)
                *(a1 + 0x144) = valA53 - 1;
        }

        a1[0x27] = SoundSys_SetFrequency_9();
        a1[0x33] = 0x42700000;
        *(a1 + 0x1a4) = 0xfffffffe;
        long double x87_r7_125 = *(dstD2 + 0x644);
        *(a1 + 0x19c) = 0xfffffff7;
        ctxB = a2;
        a1[0x35] = 60.0 / x87_r7_125 * 30.0 / 3;
        int32_t valA57;
        int32_t tmpD22;
        tmpD22 = HIGHD(0x66666667 * 60.0 / *(dstD2 + 0x644) * 30.0);
        valA57 = LOWD(0x66666667 * 60.0 / *(dstD2 + 0x644) * 30.0);
        int32_t tmpD23 = tmpD22 >> 2;
        result = tmpD23 >> 0x1f;
        a1[0x34] = tmpD23 + result;
    }

    *(a1 + 0x134) = *ctxB;
    result = *ctxB;

    if (!result)
        a1[0x29] = 0;
    else
    {
        long double x87_r7_132 = a1[0x29] + 0.0222222228f;
        a1[0x29] = x87_r7_132;
        long double f1_1 = 1f;
        x87_r7_132 - f1_1;
        result = (x87_r7_132 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_132, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_132 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            a1[0x29] = 0x3f800000;
    }

    return result;
}
