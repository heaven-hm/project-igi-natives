#include "gi_platform.h"
#include "00464BD0-AI_CombatTarget_23.h"
int32_t AI_CombatTarget_23(void* a1, void* a2)

{
    float v_108 = 0.0f;
    float v_104 = 0.0f;
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a2 + 0x4f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x120));
    float v_100 = 0.0f;
    float v_130 = 0.0f;
    float v_fc = x87_r7_1;
    float v_10c = (*(int32_t*)(uintptr_t)(a2 + 0x508)) + (*(int32_t*)(uintptr_t)(a1 + 0x12c));
    long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
    long double f0 = 0.0f;
    x87_r7_4 - f0;

    if (!(*(&((x87_r7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0) ? 1 : 0) << 0xa
        | (x87_r7_4 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_6 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5.0f;
        v_fc = (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) * (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) * (x87_r7_6 + x87_r7_6) + v_fc;
        long double x87_r7_10 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5.0f;
        v_130 = (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) * (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) * (x87_r7_10 + x87_r7_10);
        long double x87_r7_14 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5.0f;
        v_10c = (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) * (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) * (x87_r7_14 + x87_r7_14) + v_10c;
    }

    Sys_ReadFileBlock_12(a1 + 0xf8, v_fc, v_130, v_10c);
    double v_124;
    AI_MoveToNode_23(&v_124, a2);
    long double x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0x1a4));
    float tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x1a0));
    float v_128 = x87_r7_17;
    long double x87_r6_12 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
    long double f1 = 0.0f;
    x87_r6_12 - f1;
    v_130 = (*(int32_t*)(uintptr_t)(a1 + 0x19c));

    if (!(*(&((x87_r6_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, f1) ? 1 : 0) << 0xa
        | (x87_r6_12 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double x87_r7_20 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5.0f;
        v_130 = (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) * (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) * (x87_r7_20 + x87_r7_20) + v_130;
        long double x87_r7_24 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5.0f;
        x87_r7_17 = (x87_r7_24 + x87_r7_24) * (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) * (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) + v_128;
        long double x87_r6_19 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
        long double f3_1 = 0.0f;
        x87_r6_19 - f3_1;

        if (!(*(&((x87_r6_19 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, f3_1) ? 1 : 0) << 0xa
            | (x87_r6_19 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_22 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
            long double f6_1 = 0.0f;
            x87_r6_22 - f6_1;

            if (!(*(&((x87_r6_22 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_22, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double x87_r6_24 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) - (*(int32_t*)(uintptr_t)(a1 + 0x1c0));
                (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = x87_r6_24;
                long double f9_1 = 0.0f;
                x87_r6_24 - f9_1;

                if (*(&((x87_r6_24 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_24, f9_1) ? 1 : 0) << 0xa
                        | (x87_r6_24 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0;
            }
        }
        else
        {
            long double x87_r6_21 = (*(int32_t*)(uintptr_t)(a1 + 0x1c0)) + (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
            (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = x87_r6_21;
            long double f7_1 = 0.0f;
            x87_r6_21 - f7_1;

            if (!(*(&((x87_r6_21 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_21, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_21 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0;
        }
    }

    long double x87_r6_25 = (*(int32_t*)(uintptr_t)(a1 + 0x1c4));
    long double f2 = 0.0f;
    x87_r6_25 - f2;

    if (!(*(&((x87_r6_25 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, f2) ? 1 : 0) << 0xa
        | (x87_r6_25 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double fp0_6;
        bool c1_1;
        bool c2_7;
        fp0_6 = __fsin((*(int32_t*)(uintptr_t)(a1 + 0x1c8)));
        x87_r7_17 = x87_r7_17 + (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) * fp0_6;
        v_100 = (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) * 0.074999999999999997 * fp0_6;
        long double x87_r6_30 = (*(int32_t*)(uintptr_t)(a1 + 0x1c8)) + 0.209439516.0f;
        (*(int32_t*)(uintptr_t)(a1 + 0x1c8)) = x87_r6_30;
        long double f5_1 = 3.14159274.0f;
        x87_r6_30 - f5_1;

        if (!(*(&((x87_r6_30 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_30, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_30 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) = 0;
    }

    long double x87_r6_31 = v_130;
    long double f4 = 0.0f;
    x87_r6_31 - f4;
    double v_11c;
    double v_114;
    double v_b0;
    double v_a8;
    double v_a0;
    double v_88;
    char v_70;
    int32_t v_18;

    if (!(*(&((x87_r6_31 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_31, f4) ? 1 : 0) << 0xa
        | (x87_r6_31 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_464e9e: ;
        long double x87_r6_35 = tmpD1 * (*(int32_t*)(uintptr_t)(a1 + 0xfc)) + v_130 * (*(int32_t*)(uintptr_t)(a1 + 0xf8));
        long double x87_r5_9 = tmpD1 * (*(int32_t*)(uintptr_t)(a1 + 0x108));
        long double x87_r4_2 = v_130 * (*(int32_t*)(uintptr_t)(a1 + 0x104));
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
        long double f8_1 = 0.0f;
        x87_r6_32 - f8_1;

        if (!(*(&((x87_r6_32 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_32, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_32 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;

        long double f10_1 = 0.0f;
        x87_r7_17 - f10_1;

        if (!(*(&((x87_r7_17 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_464e9e;
    }

    memcpy(a1 + 0xe0, &v_124, 0x18);

    if ((*(int32_t*)(uintptr_t)(a1 + 0xd9)))
    {
        long double x87_r7_42 = (*(int32_t*)(uintptr_t)(a1 + 0xfc)) * 2048.0f;
        long double x87_r6_48 = (*(int32_t*)(uintptr_t)(a1 + 0x108)) * 2048.0f;
        v_130 = a1 + 0x100;
        float v_12c_3 = x87_r6_48;
        long double x87_r6_50 = (*(int32_t*)(uintptr_t)(a1 + 0x114)) * 2048.0f;
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
            (*(int32_t*)(uintptr_t)(a1 + 0x320)) = 0;
        else
            (*(int32_t*)(uintptr_t)(a1 + 0x320)) = -((2048.0 - v_10));
        long double x87_r7_51 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
        long double f19_1 = 0.0f;
        x87_r7_51 - f19_1;
        long double x87_r7_52 = (*(int32_t*)(uintptr_t)(a1 + 0x324));
        long double f20_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
        x87_r7_52 - f20_1;
        int16_t valA22 = (x87_r7_52 < f20_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_52, f20_1) ? 1 : 0) << 0xa
            | (x87_r7_52 == f20_1 ? 1 : 0) << 0xe;

        if (!(*(&((x87_r7_51 < f19_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_51, f19_1) ? 1 : 0) << 0xa
            | (x87_r7_51 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double x87_r7_57 = (*(int32_t*)(uintptr_t)(a1 + 0x324));

            if (!(*(&valA22 + 1) & 1))
            {
                long double f22_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                x87_r7_57 - f22_1;

                if (!(*(&((x87_r7_57 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_57, f22_1) ? 1 : 0) << 0xa
                    | (x87_r7_57 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_60 = (*(int32_t*)(uintptr_t)(a1 + 0x324)) - 113.777779.0f;
                    (*(int32_t*)(uintptr_t)(a1 + 0x324)) = x87_r7_60;
                    long double f26_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                    x87_r7_60 - f26_1;

                    if (*(&((x87_r7_60 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_60, f26_1) ? 1 : 0) << 0xa
                            | (x87_r7_60 == f26_1 ? 1 : 0) << 0xe) + 1) & 1)
                        (*(int32_t*)(uintptr_t)(a1 + 0x324)) = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                }
            }
            else
            {
                long double x87_r7_58 = x87_r7_57 + 113.777779.0f;
                (*(int32_t*)(uintptr_t)(a1 + 0x324)) = x87_r7_58;
                long double f23_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                x87_r7_58 - f23_1;

                if (!(*(&((x87_r7_58 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_58, f23_1) ? 1 : 0) << 0xa
                        | (x87_r7_58 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    (*(int32_t*)(uintptr_t)(a1 + 0x324)) = (*(int32_t*)(uintptr_t)(a1 + 0x320));
            }
        }
        else
        {
            long double x87_r7_53 = (*(int32_t*)(uintptr_t)(a1 + 0x324));

            if (!(*(&valA22 + 1) & 1))
            {
                long double f24_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                x87_r7_53 - f24_1;

                if (!(*(&((x87_r7_53 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_53, f24_1) ? 1 : 0) << 0xa
                    | (x87_r7_53 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_56 = (*(int32_t*)(uintptr_t)(a1 + 0x324)) - 75.8518524.0f;
                    (*(int32_t*)(uintptr_t)(a1 + 0x324)) = x87_r7_56;
                    long double f27_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                    x87_r7_56 - f27_1;

                    if (*(&((x87_r7_56 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_56, f27_1) ? 1 : 0) << 0xa
                            | (x87_r7_56 == f27_1 ? 1 : 0) << 0xe) + 1) & 1)
                        (*(int32_t*)(uintptr_t)(a1 + 0x324)) = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                }
            }
            else
            {
                long double x87_r7_54 = x87_r7_53 + 75.8518524.0f;
                (*(int32_t*)(uintptr_t)(a1 + 0x324)) = x87_r7_54;
                long double f25_1 = (*(int32_t*)(uintptr_t)(a1 + 0x320));
                x87_r7_54 - f25_1;

                if (!(*(&((x87_r7_54 < f25_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_54, f25_1) ? 1 : 0) << 0xa
                        | (x87_r7_54 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    (*(int32_t*)(uintptr_t)(a1 + 0x324)) = (*(int32_t*)(uintptr_t)(a1 + 0x320));
            }
        }

        float tmpD4 = (*(int32_t*)(uintptr_t)(a1 + 0x324));
        v_104 = tmpD4 * (*(int32_t*)(uintptr_t)(a1 + 0x108));
        v_108 = tmpD4 * (*(int32_t*)(uintptr_t)(a1 + 0xfc));
        v_100 = tmpD4 * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + v_100;
    }

    int32_t result = AI_CheckSector_22(a1);

    if (!result)
    {
        long double x87_r7_65 = (*(int32_t*)(uintptr_t)(a1 + 0x1cc));
        long double f12_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1d0));
        x87_r7_65 - f12_1;
        result = (x87_r7_65 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_65, f12_1) ? 1 : 0) << 0xa
            | (x87_r7_65 == f12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_68 = (*(int32_t*)(uintptr_t)(a1 + 0x1cc));
            long double f13_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1d0));
            x87_r7_68 - f13_1;
            result = (x87_r7_68 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_68, f13_1) ? 1 : 0) << 0xa
                | (x87_r7_68 == f13_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_70 = (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) - (*(int32_t*)(uintptr_t)(a1 + 0x1d4));
                (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) = x87_r7_70;
                long double f16_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1d0));
                x87_r7_70 - f16_1;
                result = (x87_r7_70 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_70, f16_1) ? 1 : 0) << 0xa
                    | (x87_r7_70 == f16_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) = (*(int32_t*)(uintptr_t)(a1 + 0x1d0));
            }
        }
        else
        {
            long double x87_r7_67 = (*(int32_t*)(uintptr_t)(a1 + 0x1d4)) + (*(int32_t*)(uintptr_t)(a1 + 0x1cc));
            (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) = x87_r7_67;
            long double f14_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1d0));
            x87_r7_67 - f14_1;
            result = (x87_r7_67 < f14_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_67, f14_1) ? 1 : 0) << 0xa
                | (x87_r7_67 == f14_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
                (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) = (*(int32_t*)(uintptr_t)(a1 + 0x1d0));
        }

        long double x87_r7_71 = (*(int32_t*)(uintptr_t)(a1 + 0x1d8));
        long double f15_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1dc));
        x87_r7_71 - f15_1;
        result = (x87_r7_71 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_71, f15_1) ? 1 : 0) << 0xa
            | (x87_r7_71 == f15_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_74 = (*(int32_t*)(uintptr_t)(a1 + 0x1d8));
            long double f17_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1dc));
            x87_r7_74 - f17_1;
            result = (x87_r7_74 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_74, f17_1) ? 1 : 0) << 0xa
                | (x87_r7_74 == f17_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_76 = (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) - (*(int32_t*)(uintptr_t)(a1 + 0x1e0));
                (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = x87_r7_76;
                long double f21_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1dc));
                x87_r7_76 - f21_1;
                result = (x87_r7_76 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_76, f21_1) ? 1 : 0) << 0xa
                    | (x87_r7_76 == f21_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                    (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = (*(int32_t*)(uintptr_t)(a1 + 0x1dc));
            }
        }
        else
        {
            long double x87_r7_73 = (*(int32_t*)(uintptr_t)(a1 + 0x1e0)) + (*(int32_t*)(uintptr_t)(a1 + 0x1d8));
            (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = x87_r7_73;
            long double f18_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1dc));
            x87_r7_73 - f18_1;
            result = (x87_r7_73 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_73, f18_1) ? 1 : 0) << 0xa
                | (x87_r7_73 == f18_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                result = (*(int32_t*)(uintptr_t)(a1 + 0x1dc));
                (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = result;
            }
        }
    }

    result = (*(int32_t*)(uintptr_t)(a1 + 0xd9));

    if (!result)
        return result;

    float v_f0;
    Sys_ReadFileBlock_12(&v_f0, (*(int32_t*)(uintptr_t)(a1 + 0x1cc)), 0.0f, (*(int32_t*)(uintptr_t)(a1 + 0x1d8)));

    if ((*(int32_t*)(uintptr_t)(a1 + 0x1ec)))
        Sys_CloseFileStream_12(&v_f0, -1.57079637.0f);

    float v_e4;
    float v_d8;
    v_b0 = v_e4 * (*(int32_t*)(uintptr_t)(a1 + 0xfc)) + v_f0 * (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + v_d8 * (*(int32_t*)(uintptr_t)(a1 + 0x100));
    float v_ec;
    float v_e0;
    float v_d4;
    *(&v_b0 + 4) = v_e0 * (*(int32_t*)(uintptr_t)(a1 + 0xfc)) + v_ec * (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + v_d4 * (*(int32_t*)(uintptr_t)(a1 + 0x100));
    float v_e8;
    float v_dc;
    float v_d0;
    v_a8 = v_dc * (*(int32_t*)(uintptr_t)(a1 + 0xfc)) + v_e8 * (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + v_d0 * (*(int32_t*)(uintptr_t)(a1 + 0x100));
    *(&v_a8 + 4) = v_e4 * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + v_d8 * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + v_f0 * (*(int32_t*)(uintptr_t)(a1 + 0x104));
    v_a0 = v_e0 * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + v_d4 * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + v_ec * (*(int32_t*)(uintptr_t)(a1 + 0x104));
    *(&v_a0 + 4) = v_dc * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + v_d0 * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + v_e8 * (*(int32_t*)(uintptr_t)(a1 + 0x104));
    float v_98_1 = v_d8 * (*(int32_t*)(uintptr_t)(a1 + 0x118)) + v_f0 * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + v_e4 * (*(int32_t*)(uintptr_t)(a1 + 0x114));
    float v_94_1 = v_d4 * (*(int32_t*)(uintptr_t)(a1 + 0x118)) + v_ec * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + v_e0 * (*(int32_t*)(uintptr_t)(a1 + 0x114));
    int32_t v_cc;
    int32_t v_8c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x11c)) + v_cc + 1;
    long double x87_r7_112 =
        v_d0 * (*(int32_t*)(uintptr_t)(a1 + 0x118)) + v_e8 * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + v_dc * (*(int32_t*)(uintptr_t)(a1 + 0x114));
    (*(int32_t*)(uintptr_t)(a1 + 0xda)) = 1;
    float v_90_1 = x87_r7_112;
    memcpy(a1 + 0x78, &v_b0, 0x28);
    Render_TransformVertices_5(a1 + 0x1f0, a1 + 0x1fc, a1 + 0x68);
    (*(int32_t*)(uintptr_t)(a1 + 0x20c)) = 0xffffffff;
    Render_ClipMesh_5(a1 + 0x208, a1 + 0x68);
    int32_t valA29 = (*(int32_t*)(uintptr_t)(a1 + 0x20c));

    if (valA29 != 0xffffffff)
    {
        long double x87_r7_116 = (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a1 + 0x220)) + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x21c))
            + (*(int32_t*)(uintptr_t)(a1 + 0x218)) * (*(int32_t*)(uintptr_t)(a1 + 0x78));
        long double x87_r6_98 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * (*(int32_t*)(uintptr_t)(a1 + 0x220)) + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x21c))
            + (*(int32_t*)(uintptr_t)(a1 + 0x84)) * (*(int32_t*)(uintptr_t)(a1 + 0x218));
        float v_12c_6 = x87_r6_98;
        long double x87_r6_102 = (*(int32_t*)(uintptr_t)(a1 + 0x98)) * (*(int32_t*)(uintptr_t)(a1 + 0x220)) + (*(int32_t*)(uintptr_t)(a1 + 0x94)) * (*(int32_t*)(uintptr_t)(a1 + 0x21c))
            + (*(int32_t*)(uintptr_t)(a1 + 0x90)) * (*(int32_t*)(uintptr_t)(a1 + 0x218));
        float v_128_2 = x87_r6_102;
        v_124 = x87_r7_116 + (*(int32_t*)(uintptr_t)(a1 + 0x20));
        v_11c = v_12c_6 + (*(int32_t*)(uintptr_t)(a1 + 0x28));
        v_114 = v_128_2 + (*(int32_t*)(uintptr_t)(a1 + 0x30));
        SoundSys_EvaluateTrigger_15(valA29, a1, &v_124);
    }

    AI_FireWeapon_23(&v_124, (*(int32_t*)(uintptr_t)(a2 + 0x4ec)));
    float valA31 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    long double x87_r7_125 = (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f4))
        + (*(int32_t*)(uintptr_t)(a1 + 0x78)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f0));
    long double x87_r6_110 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f4))
        + (*(int32_t*)(uintptr_t)(a1 + 0x84)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f0));
    long double x87_r6_114 = (*(int32_t*)(uintptr_t)(a1 + 0x98)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x94)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f4))
        + (*(int32_t*)(uintptr_t)(a1 + 0x90)) * (*(int32_t*)(uintptr_t)(a1 + 0x1f0));
    double v_11c_1 = x87_r6_110 + v_11c;
    double v_114_1 = x87_r6_114 + v_114;
    v_124 = v_108 + x87_r7_125 + v_124;
    double v_11c_2 = v_104 + v_11c_1;
    double v_114_2 = v_100 + v_114_1;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_124, valA31);
}
