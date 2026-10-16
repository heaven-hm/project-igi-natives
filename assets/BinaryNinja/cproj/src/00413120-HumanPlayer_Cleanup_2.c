#include "gi_platform.h"
#include "00413120-HumanPlayer_Cleanup_2.h"
void* HumanPlayer_Cleanup_2(void* a1, int32_t a2)

{
    void* flagP = *(Level_LoadLevel_6() + 0x5c);
    int32_t valA1 = g_c28b44;
    int32_t objC = g_c28b48;
    void* result;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0xde4)))
    {
        int32_t objC2 =
            ((int(*)())(uintptr_t)(*(((FX_DebrisSpawn_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0)))(a1, a2);
        float v_e0;
        float v_d4;
        float v_d0;
        float v_cc;
        float v_a8;

        if ((*(int32_t*)(uintptr_t)(a1 + 0xd68)))
        {
            float v_f8_1 = objC;
            int32_t v_120_1 = objC2;
            float v_f4_1 = valA1;
            int32_t v_124_1 = objC2;
            int32_t v_128_1 = objC2;
            int32_t v_12c_1 = objC2;
            Sys_ExecuteBytecode_14(v_f4_1 * 0.315625012.0f, v_f8_1 * 0.837499976.0f,
                (*(int32_t*)(uintptr_t)(a1 + 0xd64)) / (*(int32_t*)(uintptr_t)(a1 + 0xd60)) * v_f4_1 * 0.368750006.0f,
                v_f8_1 * 0.010416667.0f, 128.0f, 0.0f, 0.0f, 0x3f000000, 0x80000, 0);
            v_e0 = v_f8_1 * 0.0187500007.0f;
            float v_d8_1 = v_f4_1 * 0.375.0f;
            float v_f0_1 = v_f8_1 * 0.833333313.0f;
            float v_ec_1 = v_f4_1 * 0.3125.0f;
            Sys_ExecuteBytecode_14(v_ec_1, v_f0_1, v_d8_1, v_e0, 0.0f, 100.0f, 0.0f, 0x3f000000, 0x80000, 0);
            long double x87_r7_21 = v_ec_1;
            float v_ec_2 = x87_r7_21;
            int32_t v_90_1 = 0;
            int32_t v_8c_1 = 0x3f800000;
            int32_t v_88_1 = 0;
            int32_t v_94_1 = 0x3f800000;
            int32_t v_9c_1 = 0;
            float v_f4_2 = v_d8_1 + x87_r7_21;
            int32_t v_98_1 = 0;
            int32_t v_a0_1 = 0x3a83126f;
            int32_t v_6c_1 = 0;
            int32_t v_68_1 = 0x3f800000;
            float v_f0_2 = v_e0 + v_f0_1;
            v_a8 = x87_r7_21;
            float* v_c4_1 = &v_a8;
            float v_a4_1 = v_f0_1;
            float v_84_1 = v_f4_2;
            int32_t objC6 = g_a84a54;
            int32_t v_64_1 = 0;
            int32_t v_70_1 = 0x3f800000;
            int32_t v_78_1 = 0;
            int32_t v_74_1 = 0;
            int32_t v_7c_1 = 0x3a83126f;
            v_d4 = 1.40129846e-45.0f;
            v_cc = 0.0f;
            int32_t v_c8_1 = 2;
            v_d0 = 0.0f;
            float v_80_1 = v_f0_1;
            ((int(*)())(uintptr_t)(*((objC6 << 2) + &g_a94e84)))(&v_d4);
            v_a8 = v_ec_2;
            float v_a4_2 = v_f0_2;
            float v_84_2 = v_f4_2;
            float v_80_2 = v_f0_2;
            ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_d4);
            float v_a4_3 = v_f0_1;
            v_a8 = v_ec_2;
            float v_84_3 = v_ec_2;
            float v_80_3 = v_f0_2;
            ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_d4);
            v_a8 = v_f4_2;
            float v_a4_4 = v_f0_1;
            float v_84_4 = v_f4_2;
            float v_80_4 = v_f0_2 + 1.0f;
            objC2 = ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_d4);
        }

        if (SoundSys_SetFrequency_11())
        {
            void* v_dc_1 = a1;
            double v_38;
            AI_FireWeapon_23(&v_38, (*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
            AI_UpdateOrders_23(&v_d4, (*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
            double* v_10c_4 = &v_e0;
            double v_b8_2 = v_d0 * 4096000.0;
            double v_b0_2 = v_cc * 4096000.0;
            double v_c0 = v_38 + v_d4 * 4096000.0;
            double v_30;
            double v_b8_3 = v_30 + v_b8_2;
            double v_28;
            double v_b0_3 = v_28 + v_b0_2;
            char valA24 = Level_LoadObjects_4();
            DynObj_FindSymbol_11(Level_StartMission_4(), &v_a8, &v_38, &v_c0, 1, valA24, v_10c_4,
                0xffffffff);
            int32_t v_50;
            char v_20;

            if (!v_50)
                Game_DataSymbolLoad(&v_20, "RANGE: 1000+M\n");
            else
            {
                double v_48;
                v_10c_4 = v_48 * 0.000244140625;
                int32_t tmpD12 = Game_DataSymbolLoad(&v_20, "RANGE: %0.2fM\n");

                if (v_a8)
                {
                    int16_t valA28 = DynObj_LookupHashItem_5();
                    tmpD12 = *(v_a8 + 0x1c);

                    if (TaskType_IsDerivedFrom(tmpD12, valA28))
                    {
                        int32_t v_108_6 = *(v_a8 + 0x6c) + 0x14;
                        AI_CheckHearing_18(a1, "Model: %s\n");
                    }
                }
            }

            objC2 = AI_CheckHearing_18(a1, &v_20);
        }

        result = *(flagP + 0xe8);

        if (result == 1)
        {
            long double x87_r7_33 = (*(int32_t*)(uintptr_t)(a1 + 0xdcc));
            v_e0 = x87_r7_33;
            long double f0_1 = 0.0f;
            x87_r7_33 - f0_1;
            result = (x87_r7_33 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_33, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_33 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
    label_41364b: ;
                float objC17 = v_e0;
                float v_150_2 = objC17;
                float v_154_2 = objC17;
                result = Sys_PushStack_14(0.0f, 0.0f, valA1, objC, 255.0f, 0.0f, 0.0f, 255.0f, 0.0f, 0.0f, 255.0f, 0.0f, 0.0f,
                    255.0f, 0.0f, 0.0f, objC17, (*(int32_t*)(uintptr_t)(a1 + 0xdd8)), (*(int32_t*)(uintptr_t)(a1 + 0xdd0)), (*(int32_t*)(uintptr_t)(a1 + 0xdd4)), 0,
                    0x80000, 0);
            }
            else
            {
                long double x87_r7_34 = (*(int32_t*)(uintptr_t)(a1 + 0xdd0));
                long double f1_1 = 0.0f;
                x87_r7_34 - f1_1;
                result = (x87_r7_34 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_34, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_34 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;

                long double x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0xdd4));
                long double f3_1 = 0.0f;
                x87_r7_35 - f3_1;
                result = (x87_r7_35 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_35, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_35 == f3_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;

                long double x87_r7_36 = (*(int32_t*)(uintptr_t)(a1 + 0xdd8));
                long double f5_1 = 0.0f;
                x87_r7_36 - f5_1;
                result = (x87_r7_36 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_36, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_36 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;
            }

            long double x87_r7_39 = (*(int32_t*)(uintptr_t)(a1 + 0xddc));
            long double f2_1 = 0.0f;
            x87_r7_39 - f2_1;
            result = (x87_r7_39 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_39, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_39 == f2_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                float v_f8_3 = (*(int32_t*)(uintptr_t)(a1 + 0xddc));
                long double x87_r7_40 = v_f8_3;
                long double f4_1 = 0.0f;
                x87_r7_40 - f4_1;

                if (!(*(&((x87_r7_40 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_40, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_40 == f4_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_41 = v_f8_3;
                    long double f6_1 = 0.99000001.0f;
                    x87_r7_41 - f6_1;

                    if (!(*(&((x87_r7_41 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_41, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_41 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        v_f8_3 = 0.99000001.0f;
                }
                else
                    v_f8_3 = 0.0f;

                int32_t v_11c_3 = objC2;
                int32_t v_120_4 = objC2;
                return Sys_ExecuteBytecode_14(0.0f, 0.0f, valA1, objC, 255.0f, 255.0f, 255.0f, v_f8_3, 0x80000, 0);
            }
        }
    }
    else
    {
        result = Table_GetAt(a1 + 0x4c4, 0);

        if (result)
        {
            uint32_t valA4 = FX_DebrisSpawn_8();
            int32_t valA5 = 0;
            valA5 = *(result + 0x1c);
            return ((int(*)())(uintptr_t)(*(((valA4 * 0x180 + valA5) << 2) + &g_a96ae0)))(result, a2);
        }
    }

    return result;
}
