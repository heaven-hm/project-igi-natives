#include "AI_CombatTarget_23.h"
int32_t AI_CombatTarget_23(void* a1, void* a2)

{
    float v_108 = 0f;
    float v_104 = 0f;
    long double x87_r7_1 = *(a2 + 0x4f8) + *(a1 + 0x120);
    float v_100 = 0f;
    float v_130 = 0f;
    float v_fc = x87_r7_1;
    float v_10c = *(a2 + 0x508) + *(a1 + 0x12c);
    long double x87_r7_4 = *(a1 + 0x1b4);
    long double f0 = 0f;
    x87_r7_4 - f0;

    if (!(*(&((x87_r7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0) ? 1 : 0) << 0xa
        | (x87_r7_4 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_6 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        v_fc = *(a1 + 0x1bc) * *(a1 + 0x1b4) * (x87_r7_6 + x87_r7_6) + v_fc;
        long double x87_r7_10 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        v_130 = *(a1 + 0x1bc) * *(a1 + 0x1b4) * (x87_r7_10 + x87_r7_10);
        long double x87_r7_14 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        v_10c = *(a1 + 0x1bc) * *(a1 + 0x1b4) * (x87_r7_14 + x87_r7_14) + v_10c;
    }

    Sys_ReadFileBlock_12(a1 + 0xf8, v_fc, v_130, v_10c);
    double v_124;
    AI_MoveToNode_23(&v_124, a2);
    long double x87_r7_17 = *(a1 + 0x1a4);
    float tmpD1 = *(a1 + 0x1a0);
    float v_128 = x87_r7_17;
    long double x87_r6_12 = *(a1 + 0x1b4);
    long double f1 = 0f;
    x87_r6_12 - f1;
    v_130 = *(a1 + 0x19c);

    if (!(*(&((x87_r6_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, f1) ? 1 : 0) << 0xa
        | (x87_r6_12 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double x87_r7_20 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        v_130 = *(a1 + 0x1b8) * *(a1 + 0x1b4) * (x87_r7_20 + x87_r7_20) + v_130;
        long double x87_r7_24 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        x87_r7_17 = (x87_r7_24 + x87_r7_24) * *(a1 + 0x1b8) * *(a1 + 0x1b4) + v_128;
        long double x87_r6_19 = *(a1 + 0x1b4);
        long double f3_1 = 0f;
        x87_r6_19 - f3_1;

        if (!(*(&((x87_r6_19 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, f3_1) ? 1 : 0) << 0xa
            | (x87_r6_19 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_22 = *(a1 + 0x1b4);
            long double f6_1 = 0f;
            x87_r6_22 - f6_1;

            if (!(*(&((x87_r6_22 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_22, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_24 = *(a1 + 0x1b4) - *(a1 + 0x1c0);
                *(a1 + 0x1b4) = x87_r6_24;
                long double f9_1 = 0f;
                x87_r6_24 - f9_1;

                if (*(&((x87_r6_24 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_24, f9_1) ? 1 : 0) << 0xa
                        | (x87_r6_24 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(a1 + 0x1b4) = 0;
            }
        }
        else
        {
            long double x87_r6_21 = *(a1 + 0x1c0) + *(a1 + 0x1b4);
            *(a1 + 0x1b4) = x87_r6_21;
            long double f7_1 = 0f;
            x87_r6_21 - f7_1;

            if (!(*(&((x87_r6_21 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_21, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_21 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(a1 + 0x1b4) = 0;
        }
    }

    long double x87_r6_25 = *(a1 + 0x1c4);
    long double f2 = 0f;
    x87_r6_25 - f2;

    if (!(*(&((x87_r6_25 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, f2) ? 1 : 0) << 0xa
        | (x87_r6_25 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double fp0_6;
        bool c1_1;
        bool c2_7;
        fp0_6 = __fsin(*(a1 + 0x1c8));
        x87_r7_17 = x87_r7_17 + *(a1 + 0x1c4) * fp0_6;
        v_100 = *(a1 + 0x1c4) * 0.074999999999999997 * fp0_6;
        long double x87_r6_30 = *(a1 + 0x1c8) + 0.209439516f;
        *(a1 + 0x1c8) = x87_r6_30;
        long double f5_1 = 3.14159274f;
        x87_r6_30 - f5_1;

        if (!(*(&((x87_r6_30 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_30, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_30 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            *(a1 + 0x1c4) = 0;
    }

    long double x87_r6_31 = v_130;
    long double f4 = 0f;
    x87_r6_31 - f4;
    double v_11c;
    double v_114;
    double v_b0;
    double v_a8;
    double v_a0;
    double v_88;
    void v_70;
    int32_t v_18;

    if (!(*(&((x87_r6_31 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_31, f4) ? 1 : 0) << 0xa
        | (x87_r6_31 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_464e9e:
        long double x87_r6_35 = tmpD1 * *(a1 + 0xfc) + v_130 * *(a1 + 0xf8);
        long double x87_r5_9 = tmpD1 * *(a1 + 0x108);
        long double x87_r4_2 = v_130 * *(a1 + 0x104);
        memcpy(&v_88, &v_124, 0x18);
        float v_12c_1 = x87_r5_9 + x87_r4_2;
        v_b0 = x87_r6_35 + v_124;
        void* v_12c_2 = a2;
        v_a8 = v_12c_1 + v_11c;
        v_a0 = x87_r7_17 + v_114;
        char valA13 = Level_LoadObjects_4();
        World_TraceBatch(Level_StartMission_4(), &v_70, &v_88, &v_b0, 1, valA13, &v_130,
            0xffffffff, 1);

        if (!v_18)
            memcpy(&v_124, &v_b0, 0x18);
        else
        {
            double v_68;
            double v_c8 = v_68 - v_88;
            double v_80;
            double v_60;
            double v_c0_1 = v_60 - v_80;
            double v_78;
            double v_58;
            double v_b8_1 = v_58 - v_78;
            v_fc = Sys_OpenFileStream_11(&v_c8);
            Sys_FreeMemory_11(&v_c8);
            long double x87_r7_36 = v_fc - 204.80000000000001;
            long double f11_1 = 0.0;
            x87_r7_36 - f11_1;

            if (*(&((x87_r7_36 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_36, f11_1) ? 1 : 0) << 0xa
                    | (x87_r7_36 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_36 = 0.0;

            v_c8 = x87_r7_36 * v_c8;
            double v_c0_2 = x87_r7_36 * v_c0_1;
            v_124 = v_c8 + v_88;
            v_11c = v_c0_2 + v_80;
            v_114 = x87_r7_36 * v_b8_1 + v_78;
        }
    }
    else
    {
        long double x87_r6_32 = tmpD1;
        long double f8_1 = 0f;
        x87_r6_32 - f8_1;

        if (!(*(&((x87_r6_32 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_32, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_32 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;

        long double f10_1 = 0f;
        x87_r7_17 - f10_1;

        if (!(*(&((x87_r7_17 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;
    }

    memcpy(a1 + 0xe0, &v_124, 0x18);

    if (*(a1 + 0xd9))
    {
        long double x87_r7_42 = *(a1 + 0xfc) * 2048f;
        long double x87_r6_48 = *(a1 + 0x108) * 2048f;
        v_130 = a1 + 0x100;
        float v_12c_3 = x87_r6_48;
        long double x87_r6_50 = *(a1 + 0x114) * 2048f;
        memcpy(&v_88, &v_124, 0x18);
        float v_128_1 = x87_r6_50;
        v_b0 = x87_r7_42 + v_124;
        void* v_12c_4 = a2;
        v_a8 = v_12c_3 + v_11c;
        v_a0 = v_128_1 + v_114;
        char valA19 = Level_LoadObjects_4();
        DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_88, &v_b0, 1, valA19, &v_130,
            0xffffffff);
        double v_10;

        if (!v_18)
            *(a1 + 0x320) = 0;
        else
            *(a1 + 0x320) = -((2048.0 - v_10));
        long double x87_r7_51 = *(a1 + 0x320);
        long double f19_1 = 0f;
        x87_r7_51 - f19_1;
        long double x87_r7_52 = *(a1 + 0x324);
        long double f20_1 = *(a1 + 0x320);
        x87_r7_52 - f20_1;
        int16_t valA22 = (x87_r7_52 < f20_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_52, f20_1) ? 1 : 0) << 0xa
            | (x87_r7_52 == f20_1 ? 1 : 0) << 0xe;

        if (!(*(&((x87_r7_51 < f19_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_51, f19_1) ? 1 : 0) << 0xa
            | (x87_r7_51 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double x87_r7_57 = *(a1 + 0x324);

            if (!(*(&valA22 + 1) & 1))
            {
                long double f22_1 = *(a1 + 0x320);
                x87_r7_57 - f22_1;

                if (!(*(&((x87_r7_57 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_57, f22_1) ? 1 : 0) << 0xa
                    | (x87_r7_57 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_60 = *(a1 + 0x324) - 113.777779f;
                    *(a1 + 0x324) = x87_r7_60;
                    long double f26_1 = *(a1 + 0x320);
                    x87_r7_60 - f26_1;

                    if (*(&((x87_r7_60 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_60, f26_1) ? 1 : 0) << 0xa
                            | (x87_r7_60 == f26_1 ? 1 : 0) << 0xe) + 1) & 1)
                        *(a1 + 0x324) = *(a1 + 0x320);
                }
            }
            else
            {
                long double x87_r7_58 = x87_r7_57 + 113.777779f;
                *(a1 + 0x324) = x87_r7_58;
                long double f23_1 = *(a1 + 0x320);
                x87_r7_58 - f23_1;

                if (!(*(&((x87_r7_58 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_58, f23_1) ? 1 : 0) << 0xa
                        | (x87_r7_58 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    *(a1 + 0x324) = *(a1 + 0x320);
            }
        }
        else
        {
            long double x87_r7_53 = *(a1 + 0x324);

            if (!(*(&valA22 + 1) & 1))
            {
                long double f24_1 = *(a1 + 0x320);
                x87_r7_53 - f24_1;

                if (!(*(&((x87_r7_53 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_53, f24_1) ? 1 : 0) << 0xa
                    | (x87_r7_53 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_56 = *(a1 + 0x324) - 75.8518524f;
                    *(a1 + 0x324) = x87_r7_56;
                    long double f27_1 = *(a1 + 0x320);
                    x87_r7_56 - f27_1;

                    if (*(&((x87_r7_56 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_56, f27_1) ? 1 : 0) << 0xa
                            | (x87_r7_56 == f27_1 ? 1 : 0) << 0xe) + 1) & 1)
                        *(a1 + 0x324) = *(a1 + 0x320);
                }
            }
            else
            {
                long double x87_r7_54 = x87_r7_53 + 75.8518524f;
                *(a1 + 0x324) = x87_r7_54;
                long double f25_1 = *(a1 + 0x320);
                x87_r7_54 - f25_1;

                if (!(*(&((x87_r7_54 < f25_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_54, f25_1) ? 1 : 0) << 0xa
                        | (x87_r7_54 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    *(a1 + 0x324) = *(a1 + 0x320);
            }
        }

        float tmpD4 = *(a1 + 0x324);
        v_104 = tmpD4 * *(a1 + 0x108);
        v_108 = tmpD4 * *(a1 + 0xfc);
        v_100 = tmpD4 * *(a1 + 0x114) + v_100;
    }

    int32_t result = AI_CheckSector_22(a1);

    if (!result)
    {
        long double x87_r7_65 = *(a1 + 0x1cc);
        long double f12_1 = *(a1 + 0x1d0);
        x87_r7_65 - f12_1;
        result = (x87_r7_65 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_65, f12_1) ? 1 : 0) << 0xa
            | (x87_r7_65 == f12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_68 = *(a1 + 0x1cc);
            long double f13_1 = *(a1 + 0x1d0);
            x87_r7_68 - f13_1;
            result = (x87_r7_68 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_68, f13_1) ? 1 : 0) << 0xa
                | (x87_r7_68 == f13_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_70 = *(a1 + 0x1cc) - *(a1 + 0x1d4);
                *(a1 + 0x1cc) = x87_r7_70;
                long double f16_1 = *(a1 + 0x1d0);
                x87_r7_70 - f16_1;
                result = (x87_r7_70 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_70, f16_1) ? 1 : 0) << 0xa
                    | (x87_r7_70 == f16_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    *(a1 + 0x1cc) = *(a1 + 0x1d0);
            }
        }
        else
        {
            long double x87_r7_67 = *(a1 + 0x1d4) + *(a1 + 0x1cc);
            *(a1 + 0x1cc) = x87_r7_67;
            long double f14_1 = *(a1 + 0x1d0);
            x87_r7_67 - f14_1;
            result = (x87_r7_67 < f14_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_67, f14_1) ? 1 : 0) << 0xa
                | (x87_r7_67 == f14_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
                *(a1 + 0x1cc) = *(a1 + 0x1d0);
        }

        long double x87_r7_71 = *(a1 + 0x1d8);
        long double f15_1 = *(a1 + 0x1dc);
        x87_r7_71 - f15_1;
        result = (x87_r7_71 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_71, f15_1) ? 1 : 0) << 0xa
            | (x87_r7_71 == f15_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_74 = *(a1 + 0x1d8);
            long double f17_1 = *(a1 + 0x1dc);
            x87_r7_74 - f17_1;
            result = (x87_r7_74 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_74, f17_1) ? 1 : 0) << 0xa
                | (x87_r7_74 == f17_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_76 = *(a1 + 0x1d8) - *(a1 + 0x1e0);
                *(a1 + 0x1d8) = x87_r7_76;
                long double f21_1 = *(a1 + 0x1dc);
                x87_r7_76 - f21_1;
                result = (x87_r7_76 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_76, f21_1) ? 1 : 0) << 0xa
                    | (x87_r7_76 == f21_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    *(a1 + 0x1d8) = *(a1 + 0x1dc);
            }
        }
        else
        {
            long double x87_r7_73 = *(a1 + 0x1e0) + *(a1 + 0x1d8);
            *(a1 + 0x1d8) = x87_r7_73;
            long double f18_1 = *(a1 + 0x1dc);
            x87_r7_73 - f18_1;
            result = (x87_r7_73 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_73, f18_1) ? 1 : 0) << 0xa
                | (x87_r7_73 == f18_1 ? 1 : 0) << 0xe;

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

    float v_f0;
    Sys_ReadFileBlock_12(&v_f0, *(a1 + 0x1cc), 0f, *(a1 + 0x1d8));

    if (*(a1 + 0x1ec))
        Sys_CloseFileStream_12(&v_f0, -1.57079637f);

    float v_e4;
    float v_d8;
    v_b0 = v_e4 * *(a1 + 0xfc) + v_f0 * *(a1 + 0xf8) + v_d8 * *(a1 + 0x100);
    float v_ec;
    float v_e0;
    float v_d4;
    *(&v_b0 + 4) = v_e0 * *(a1 + 0xfc) + v_ec * *(a1 + 0xf8) + v_d4 * *(a1 + 0x100);
    float v_e8;
    float v_dc;
    float v_d0;
    v_a8 = v_dc * *(a1 + 0xfc) + v_e8 * *(a1 + 0xf8) + v_d0 * *(a1 + 0x100);
    *(&v_a8 + 4) = v_e4 * *(a1 + 0x108) + v_d8 * *(a1 + 0x10c) + v_f0 * *(a1 + 0x104);
    v_a0 = v_e0 * *(a1 + 0x108) + v_d4 * *(a1 + 0x10c) + v_ec * *(a1 + 0x104);
    *(&v_a0 + 4) = v_dc * *(a1 + 0x108) + v_d0 * *(a1 + 0x10c) + v_e8 * *(a1 + 0x104);
    float v_98_1 = v_d8 * *(a1 + 0x118) + v_f0 * *(a1 + 0x110) + v_e4 * *(a1 + 0x114);
    float v_94_1 = v_d4 * *(a1 + 0x118) + v_ec * *(a1 + 0x110) + v_e0 * *(a1 + 0x114);
    int32_t v_cc;
    int32_t v_8c_1 = *(a1 + 0x11c) + v_cc + 1;
    long double x87_r7_112 =
        v_d0 * *(a1 + 0x118) + v_e8 * *(a1 + 0x110) + v_dc * *(a1 + 0x114);
    *(a1 + 0xda) = 1;
    float v_90_1 = x87_r7_112;
    memcpy(a1 + 0x78, &v_b0, 0x28);
    Render_TransformVertices_5(a1 + 0x1f0, a1 + 0x1fc, a1 + 0x68);
    *(a1 + 0x20c) = 0xffffffff;
    Render_ClipMesh_5(a1 + 0x208, a1 + 0x68);
    int32_t valA29 = *(a1 + 0x20c);

    if (valA29 != 0xffffffff)
    {
        long double x87_r7_116 = *(a1 + 0x80) * *(a1 + 0x220) + *(a1 + 0x7c) * *(a1 + 0x21c)
            + *(a1 + 0x218) * *(a1 + 0x78);
        long double x87_r6_98 = *(a1 + 0x8c) * *(a1 + 0x220) + *(a1 + 0x88) * *(a1 + 0x21c)
            + *(a1 + 0x84) * *(a1 + 0x218);
        float v_12c_6 = x87_r6_98;
        long double x87_r6_102 = *(a1 + 0x98) * *(a1 + 0x220) + *(a1 + 0x94) * *(a1 + 0x21c)
            + *(a1 + 0x90) * *(a1 + 0x218);
        float v_128_2 = x87_r6_102;
        v_124 = x87_r7_116 + *(a1 + 0x20);
        v_11c = v_12c_6 + *(a1 + 0x28);
        v_114 = v_128_2 + *(a1 + 0x30);
        SoundSys_EvaluateTrigger_15(valA29, a1, &v_124);
    }

    AI_FireWeapon_23(&v_124, *(a2 + 0x4ec));
    float valA31 = *(a1 + 0xa0);
    long double x87_r7_125 = *(a1 + 0x80) * *(a1 + 0x1f8) + *(a1 + 0x7c) * *(a1 + 0x1f4)
        + *(a1 + 0x78) * *(a1 + 0x1f0);
    long double x87_r6_110 = *(a1 + 0x8c) * *(a1 + 0x1f8) + *(a1 + 0x88) * *(a1 + 0x1f4)
        + *(a1 + 0x84) * *(a1 + 0x1f0);
    long double x87_r6_114 = *(a1 + 0x98) * *(a1 + 0x1f8) + *(a1 + 0x94) * *(a1 + 0x1f4)
        + *(a1 + 0x90) * *(a1 + 0x1f0);
    double v_11c_1 = x87_r6_110 + v_11c;
    double v_114_1 = x87_r6_114 + v_114;
    v_124 = v_108 + x87_r7_125 + v_124;
    double v_11c_2 = v_104 + v_11c_1;
    double v_114_2 = v_100 + v_114_1;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_124, valA31);
}
