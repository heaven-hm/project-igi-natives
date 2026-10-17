// IGI native provenance: AI_CombatTarget_23 - 0x00464BD0 - CFG score 95.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 00464BD0-AI_CombatTarget_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_23.h"
int32_t AI_CombatTarget_23(void* context, void* param_2)

{
    float item_108 = 0.0f;
    float item_104 = 0.0f;
    long double fpu_val_7_1 = *(param_2 + 0x4f8) + *(context + 0x120);
    float item_100 = 0.0f;
    float item_130 = 0.0f;
    float item_fc = fpu_val_7_1;
    float item_10c = *(param_2 + 0x508) + *(context + 0x12c);
    long double fpu_val_7_4 = *(context + 0x1b4);
    long double f0 = 0.0f;
    fpu_val_7_4 - f0;

    if (!(*(&((fpu_val_7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_6 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        item_fc = *(context + 0x1bc) * *(context + 0x1b4) * (fpu_val_7_6 + fpu_val_7_6) + item_fc;
        long double fpu_val_7_10 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        item_130 = *(context + 0x1bc) * *(context + 0x1b4) * (fpu_val_7_10 + fpu_val_7_10);
        long double fpu_val_7_14 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        item_10c = *(context + 0x1bc) * *(context + 0x1b4) * (fpu_val_7_14 + fpu_val_7_14) + item_10c;
    }

    Sys_ReadFileBlock_12(context + 0xf8, item_fc, item_130, item_10c);
    double item_124;
    AI_MoveToNode_23(&item_124, param_2);
    long double fpu_val_7_17 = *(context + 0x1a4);
    float temp_1 = *(context + 0x1a0);
    float item_128 = fpu_val_7_17;
    long double fpu_val_6_12 = *(context + 0x1b4);
    long double f1 = 0.0f;
    fpu_val_6_12 - f1;
    item_130 = *(context + 0x19c);

    if (!(*(&((fpu_val_6_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, f1) ? 1 : 0) << 0xa
        | (fpu_val_6_12 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double fpu_val_7_20 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        item_130 = *(context + 0x1b8) * *(context + 0x1b4) * (fpu_val_7_20 + fpu_val_7_20) + item_130;
        long double fpu_val_7_24 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        fpu_val_7_17 = (fpu_val_7_24 + fpu_val_7_24) * *(context + 0x1b8) * *(context + 0x1b4) + item_128;
        long double fpu_val_6_19 = *(context + 0x1b4);
        long double f3_1 = 0.0f;
        fpu_val_6_19 - f3_1;

        if (!(*(&((fpu_val_6_19 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_19, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_6_19 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double fpu_val_6_22 = *(context + 0x1b4);
            long double f6_1 = 0.0f;
            fpu_val_6_22 - f6_1;

            if (!(*(&((fpu_val_6_22 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_22, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_22 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double fpu_val_6_24 = *(context + 0x1b4) - *(context + 0x1c0);
                *(context + 0x1b4) = fpu_val_6_24;
                long double f9_1 = 0.0f;
                fpu_val_6_24 - f9_1;

                if (*(&((fpu_val_6_24 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_24, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_24 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(context + 0x1b4) = 0;
            }
        }
        else
        {
            long double fpu_val_6_21 = *(context + 0x1c0) + *(context + 0x1b4);
            *(context + 0x1b4) = fpu_val_6_21;
            long double f7_1 = 0.0f;
            fpu_val_6_21 - f7_1;

            if (!(*(&((fpu_val_6_21 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_21, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_21 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(context + 0x1b4) = 0;
        }
    }

    long double fpu_val_6_25 = *(context + 0x1c4);
    long double f2 = 0.0f;
    fpu_val_6_25 - f2;

    if (!(*(&((fpu_val_6_25 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_25, f2) ? 1 : 0) << 0xa
        | (fpu_val_6_25 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double fp0_6;
        bool c1_1;
        bool c2_7;
        fp0_6 = __fsin(*(context + 0x1c8));
        fpu_val_7_17 = fpu_val_7_17 + *(context + 0x1c4) * fp0_6;
        item_100 = *(context + 0x1c4) * 0.074999999999999997 * fp0_6;
        long double fpu_val_6_30 = *(context + 0x1c8) + 0.209439516f;
        *(context + 0x1c8) = fpu_val_6_30;
        long double f5_1 = 3.14159274f;
        fpu_val_6_30 - f5_1;

        if (!(*(&((fpu_val_6_30 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_30, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_30 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            *(context + 0x1c4) = 0;
    }

    long double fpu_val_6_31 = item_130;
    long double f4 = 0.0f;
    fpu_val_6_31 - f4;
    double item_11c;
    double item_114;
    double item_b0;
    double item_a8;
    double item_a0;
    double item_88;
    void item_70;
    int32_t item_18;

    if (!(*(&((fpu_val_6_31 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_31, f4) ? 1 : 0) << 0xa
        | (fpu_val_6_31 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_464e9e:
        long double fpu_val_6_35 = temp_1 * *(context + 0xfc) + item_130 * *(context + 0xf8);
        long double fpu_val_5_9 = temp_1 * *(context + 0x108);
        long double fpu_val_4_2 = item_130 * *(context + 0x104);
        memcpy(&item_88, &item_124, 0x18);
        float item_12c_1 = fpu_val_5_9 + fpu_val_4_2;
        item_b0 = fpu_val_6_35 + item_124;
        void* item_12c_2 = param_2;
        item_a8 = item_12c_1 + item_11c;
        item_a0 = fpu_val_7_17 + item_114;
        char data_13 = Level_LoadObjects_4();
        World_TraceBatch(Level_StartMission_4(), &item_70, &item_88, &item_b0, 1, data_13, &item_130,
            0xffffffff, 1);

        if (!item_18)
            memcpy(&item_124, &item_b0, 0x18);
        else
        {
            double item_68;
            double item_c8 = item_68 - item_88;
            double item_80;
            double item_60;
            double item_c0_1 = item_60 - item_80;
            double item_78;
            double item_58;
            double item_b8_1 = item_58 - item_78;
            item_fc = Sys_OpenFileStream_11(&item_c8);
            Sys_FreeMemory_11(&item_c8);
            long double fpu_val_7_36 = item_fc - 204.80000000000001;
            long double f11_1 = 0.0;
            fpu_val_7_36 - f11_1;

            if (*(&((fpu_val_7_36 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_36, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_36 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_36 = 0.0;

            item_c8 = fpu_val_7_36 * item_c8;
            double item_c0_2 = fpu_val_7_36 * item_c0_1;
            item_124 = item_c8 + item_88;
            item_11c = item_c0_2 + item_80;
            item_114 = fpu_val_7_36 * item_b8_1 + item_78;
        }
    }
    else
    {
        long double fpu_val_6_32 = temp_1;
        long double f8_1 = 0.0f;
        fpu_val_6_32 - f8_1;

        if (!(*(&((fpu_val_6_32 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_32, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_6_32 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;

        long double f10_1 = 0.0f;
        fpu_val_7_17 - f10_1;

        if (!(*(&((fpu_val_7_17 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_17, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;
    }

    memcpy(context + 0xe0, &item_124, 0x18);

    if (*(context + 0xd9))
    {
        long double fpu_val_7_42 = *(context + 0xfc) * 2048.0f;
        long double fpu_val_6_48 = *(context + 0x108) * 2048.0f;
        item_130 = context + 0x100;
        float item_12c_3 = fpu_val_6_48;
        long double fpu_val_6_50 = *(context + 0x114) * 2048.0f;
        memcpy(&item_88, &item_124, 0x18);
        float item_128_1 = fpu_val_6_50;
        item_b0 = fpu_val_7_42 + item_124;
        void* item_12c_4 = param_2;
        item_a8 = item_12c_3 + item_11c;
        item_a0 = item_128_1 + item_114;
        char data_19 = Level_LoadObjects_4();
        DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_88, &item_b0, 1, data_19, &item_130,
            0xffffffff);
        double item_10;

        if (!item_18)
            *(context + 0x320) = 0;
        else
            *(context + 0x320) = -((2048.0 - item_10));
        long double fpu_val_7_51 = *(context + 0x320);
        long double f19_1 = 0.0f;
        fpu_val_7_51 - f19_1;
        long double fpu_val_7_52 = *(context + 0x324);
        long double f20_1 = *(context + 0x320);
        fpu_val_7_52 - f20_1;
        int16_t data_22 = (fpu_val_7_52 < f20_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_52, f20_1) ? 1 : 0) << 0xa
            | (fpu_val_7_52 == f20_1 ? 1 : 0) << 0xe;

        if (!(*(&((fpu_val_7_51 < f19_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_51, f19_1) ? 1 : 0) << 0xa
            | (fpu_val_7_51 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double fpu_val_7_57 = *(context + 0x324);

            if (!(*(&data_22 + 1) & 1))
            {
                long double f22_1 = *(context + 0x320);
                fpu_val_7_57 - f22_1;

                if (!(*(&((fpu_val_7_57 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_57, f22_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_57 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double fpu_val_7_60 = *(context + 0x324) - 113.777779f;
                    *(context + 0x324) = fpu_val_7_60;
                    long double f26_1 = *(context + 0x320);
                    fpu_val_7_60 - f26_1;

                    if (*(&((fpu_val_7_60 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_60, f26_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_60 == f26_1 ? 1 : 0) << 0xe) + 1) & 1)
                        *(context + 0x324) = *(context + 0x320);
                }
            }
            else
            {
                long double fpu_val_7_58 = fpu_val_7_57 + 113.777779f;
                *(context + 0x324) = fpu_val_7_58;
                long double f23_1 = *(context + 0x320);
                fpu_val_7_58 - f23_1;

                if (!(*(&((fpu_val_7_58 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_58, f23_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_58 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    *(context + 0x324) = *(context + 0x320);
            }
        }
        else
        {
            long double fpu_val_7_53 = *(context + 0x324);

            if (!(*(&data_22 + 1) & 1))
            {
                long double f24_1 = *(context + 0x320);
                fpu_val_7_53 - f24_1;

                if (!(*(&((fpu_val_7_53 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_53, f24_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_53 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double fpu_val_7_56 = *(context + 0x324) - 75.8518524f;
                    *(context + 0x324) = fpu_val_7_56;
                    long double f27_1 = *(context + 0x320);
                    fpu_val_7_56 - f27_1;

                    if (*(&((fpu_val_7_56 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_56, f27_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_56 == f27_1 ? 1 : 0) << 0xe) + 1) & 1)
                        *(context + 0x324) = *(context + 0x320);
                }
            }
            else
            {
                long double fpu_val_7_54 = fpu_val_7_53 + 75.8518524f;
                *(context + 0x324) = fpu_val_7_54;
                long double f25_1 = *(context + 0x320);
                fpu_val_7_54 - f25_1;

                if (!(*(&((fpu_val_7_54 < f25_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_54, f25_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_54 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    *(context + 0x324) = *(context + 0x320);
            }
        }

        float temp_4 = *(context + 0x324);
        item_104 = temp_4 * *(context + 0x108);
        item_108 = temp_4 * *(context + 0xfc);
        item_100 = temp_4 * *(context + 0x114) + item_100;
    }

    int32_t result = AI_CheckSector_22(context);

    if (!result)
    {
        long double fpu_val_7_65 = *(context + 0x1cc);
        long double f12_1 = *(context + 0x1d0);
        fpu_val_7_65 - f12_1;
        result = (fpu_val_7_65 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_65, f12_1) ? 1 : 0) << 0xa
            | (fpu_val_7_65 == f12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double fpu_val_7_68 = *(context + 0x1cc);
            long double f13_1 = *(context + 0x1d0);
            fpu_val_7_68 - f13_1;
            result = (fpu_val_7_68 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_68, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_7_68 == f13_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double fpu_val_7_70 = *(context + 0x1cc) - *(context + 0x1d4);
                *(context + 0x1cc) = fpu_val_7_70;
                long double f16_1 = *(context + 0x1d0);
                fpu_val_7_70 - f16_1;
                result = (fpu_val_7_70 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_70, f16_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_70 == f16_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    *(context + 0x1cc) = *(context + 0x1d0);
            }
        }
        else
        {
            long double fpu_val_7_67 = *(context + 0x1d4) + *(context + 0x1cc);
            *(context + 0x1cc) = fpu_val_7_67;
            long double f14_1 = *(context + 0x1d0);
            fpu_val_7_67 - f14_1;
            result = (fpu_val_7_67 < f14_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_67, f14_1) ? 1 : 0) << 0xa
                | (fpu_val_7_67 == f14_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
                *(context + 0x1cc) = *(context + 0x1d0);
        }

        long double fpu_val_7_71 = *(context + 0x1d8);
        long double f15_1 = *(context + 0x1dc);
        fpu_val_7_71 - f15_1;
        result = (fpu_val_7_71 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_71, f15_1) ? 1 : 0) << 0xa
            | (fpu_val_7_71 == f15_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double fpu_val_7_74 = *(context + 0x1d8);
            long double f17_1 = *(context + 0x1dc);
            fpu_val_7_74 - f17_1;
            result = (fpu_val_7_74 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_74, f17_1) ? 1 : 0) << 0xa
                | (fpu_val_7_74 == f17_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double fpu_val_7_76 = *(context + 0x1d8) - *(context + 0x1e0);
                *(context + 0x1d8) = fpu_val_7_76;
                long double f21_1 = *(context + 0x1dc);
                fpu_val_7_76 - f21_1;
                result = (fpu_val_7_76 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_76, f21_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_76 == f21_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    *(context + 0x1d8) = *(context + 0x1dc);
            }
        }
        else
        {
            long double fpu_val_7_73 = *(context + 0x1e0) + *(context + 0x1d8);
            *(context + 0x1d8) = fpu_val_7_73;
            long double f18_1 = *(context + 0x1dc);
            fpu_val_7_73 - f18_1;
            result = (fpu_val_7_73 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_73, f18_1) ? 1 : 0) << 0xa
                | (fpu_val_7_73 == f18_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                result = *(context + 0x1dc);
                *(context + 0x1d8) = result;
            }
        }
    }

    result = *(context + 0xd9);

    if (!result)
        return result;

    float item_f0;
    Sys_ReadFileBlock_12(&item_f0, *(context + 0x1cc), 0.0f, *(context + 0x1d8));

    if (*(context + 0x1ec))
        Sys_CloseFileStream_12(&item_f0, -1.57079637f);

    float item_e4;
    float item_d8;
    item_b0 = item_e4 * *(context + 0xfc) + item_f0 * *(context + 0xf8) + item_d8 * *(context + 0x100);
    float item_ec;
    float item_e0;
    float item_d4;
    *(&item_b0 + 4) = item_e0 * *(context + 0xfc) + item_ec * *(context + 0xf8) + item_d4 * *(context + 0x100);
    float item_e8;
    float item_dc;
    float item_d0;
    item_a8 = item_dc * *(context + 0xfc) + item_e8 * *(context + 0xf8) + item_d0 * *(context + 0x100);
    *(&item_a8 + 4) = item_e4 * *(context + 0x108) + item_d8 * *(context + 0x10c) + item_f0 * *(context + 0x104);
    item_a0 = item_e0 * *(context + 0x108) + item_d4 * *(context + 0x10c) + item_ec * *(context + 0x104);
    *(&item_a0 + 4) = item_dc * *(context + 0x108) + item_d0 * *(context + 0x10c) + item_e8 * *(context + 0x104);
    float item_98_1 = item_d8 * *(context + 0x118) + item_f0 * *(context + 0x110) + item_e4 * *(context + 0x114);
    float item_94_1 = item_d4 * *(context + 0x118) + item_ec * *(context + 0x110) + item_e0 * *(context + 0x114);
    int32_t item_cc;
    int32_t item_8c_1 = *(context + 0x11c) + item_cc + 1;
    long double fpu_val_7_112 =
        item_d0 * *(context + 0x118) + item_e8 * *(context + 0x110) + item_dc * *(context + 0x114);
    *(context + 0xda) = 1;
    float item_90_1 = fpu_val_7_112;
    memcpy(context + 0x78, &item_b0, 0x28);
    Render_TransformVertices_5(context + 0x1f0, context + 0x1fc, context + 0x68);
    *(context + 0x20c) = 0xffffffff;
    Render_ClipMesh_5(context + 0x208, context + 0x68);
    int32_t data_29 = *(context + 0x20c);

    if (data_29 != 0xffffffff)
    {
        long double fpu_val_7_116 = *(context + 0x80) * *(context + 0x220) + *(context + 0x7c) * *(context + 0x21c)
            + *(context + 0x218) * *(context + 0x78);
        long double fpu_val_6_98 = *(context + 0x8c) * *(context + 0x220) + *(context + 0x88) * *(context + 0x21c)
            + *(context + 0x84) * *(context + 0x218);
        float item_12c_6 = fpu_val_6_98;
        long double fpu_val_6_102 = *(context + 0x98) * *(context + 0x220) + *(context + 0x94) * *(context + 0x21c)
            + *(context + 0x90) * *(context + 0x218);
        float item_128_2 = fpu_val_6_102;
        item_124 = fpu_val_7_116 + *(context + 0x20);
        item_11c = item_12c_6 + *(context + 0x28);
        item_114 = item_128_2 + *(context + 0x30);
        SoundSys_EvaluateTrigger_15(data_29, context, &item_124);
    }

    AI_FireWeapon_23(&item_124, *(param_2 + 0x4ec));
    float data_31 = *(context + 0xa0);
    long double fpu_val_7_125 = *(context + 0x80) * *(context + 0x1f8) + *(context + 0x7c) * *(context + 0x1f4)
        + *(context + 0x78) * *(context + 0x1f0);
    long double fpu_val_6_110 = *(context + 0x8c) * *(context + 0x1f8) + *(context + 0x88) * *(context + 0x1f4)
        + *(context + 0x84) * *(context + 0x1f0);
    long double fpu_val_6_114 = *(context + 0x98) * *(context + 0x1f8) + *(context + 0x94) * *(context + 0x1f4)
        + *(context + 0x90) * *(context + 0x1f0);
    double item_11c_1 = fpu_val_6_110 + item_11c;
    double item_114_1 = fpu_val_6_114 + item_114;
    item_124 = item_108 + fpu_val_7_125 + item_124;
    double item_11c_2 = item_104 + item_11c_1;
    double item_114_2 = item_100 + item_114_1;
    return WorldObject_CommitTransform(Level_StartMission_4(), context, &item_124, data_31);
}
