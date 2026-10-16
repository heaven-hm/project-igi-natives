#include "AI_UpdateOrders_21.h"
void* AI_UpdateOrders_21(void* a1, int32_t* a2, int32_t a3)

{
    void* result = Config_GetActivePlayerProfileRecord();

    if (*(result + 8))
    {
        float v_f4 = *a2;
        long double x87_r7_1 = v_f4;
        long double f2_1 = 0f;
        x87_r7_1 - f2_1;
        float v_f0_1 = a2[1];
        float v_ec_1 = a2[2];

        if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_463b37:
            long double x87_r7_4 = v_ec_1;
            long double x87_r6_1 = v_f0_1;
            long double x87_r5_1 = v_f4;
            long double x87_r7_6 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
            v_f4 = v_f4 * x87_r7_6;
            v_f0_1 = v_f0_1 * x87_r7_6;
            v_ec_1 = v_ec_1 * x87_r7_6;
        }
        else
        {
            long double x87_r7_2 = v_f0_1;
            long double f3_1 = 0f;
            x87_r7_2 - f3_1;

            if (!(*(&((x87_r7_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_463b37;

            long double x87_r7_3 = v_ec_1;
            long double f4_1 = 0f;
            x87_r7_3 - f4_1;

            if (!(*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_463b37;
        }

        double v_b4_1 = v_ec_1;
        long double x87_r7_9 = v_f4 * 12288.0;
        double v_90;
        memcpy(&v_90, a3 + 8, 0x18);
        double v_bc_2 = v_f0_1 * 12288.0;
        double v_b4_2 = v_b4_1 * 12288.0;
        void* v_74_1 = a1;
        double v_c4 = v_90 + x87_r7_9;
        double v_88;
        double v_bc_3 = v_88 + v_bc_2;
        double v_80;
        double v_b4_3 = v_80 + v_b4_2;
        char valA3 = Level_LoadObjects_4();
        void v_78;
        void* v_70;
        DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_90, &v_c4, 1, valA3, &v_78,
            0x20000000);
        void* v_24;
        int32_t v_20;
        int32_t v_18;

        if (v_18 && v_24 && !v_20 && *(*(v_24 + 0x258) + 0x58))
        {
            float v_d4_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1f) * 614.400024f;
            uint32_t valA10 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
            float valA13;

            if (!valA10)
                valA13 = g_5bdb08 + 0x18;
            else if (valA10 != 1)
                valA13 = v_d4_1;
            else
                valA13 = g_5bdb10 + 0x18;

            int32_t* v_a0 = &v_70;
            float v_98_1 = valA13;
            int32_t v_9c_1 = 0;
            float v_94_1 = v_d4_1;
            char valA14 = Weapon_CheckAmmo_8();
            void* objC7 = v_70;
            int32_t tmpD4 = 0;
            tmpD4 = *(objC7 + 0x1c);
            int32_t valA19 = *(((valA14 * 0x180 + tmpD4) << 2) + &g_a96ae0);

            if (valA19)
                valA19(objC7, &v_a0);
        }

        int32_t* valA20 = *(a1 + 0x838);
        int32_t v_e8 = 0;
        int32_t v_e4_1 = 0;
        int32_t v_e0_1 = 0;
        int32_t v_d0 = 0x42fe0000;
        int32_t v_cc_1 = 0x42fe0000;
        int32_t v_c8_1 = 0x42fe0000;
        int32_t v_dc = 0x4499999a;
        int32_t v_d8_1 = 0x4499999a;
        struct status_msg* flagP1;

        if (valA20)
            flagP1 = *valA20;

        if (!valA20 || !flagP1)
        {
            void* objC8 = g_5bdad4;
            int32_t f0_1 = 0xf / *(*(objC8 + 0x24) + 4);
            void* valA24 = Level_StartMission_4();
            flagP1 = Script_FormatString_30(Script_FormatString(), valA24, objC8 + 0x18, &v_e8, &v_d0, &v_dc,
                0x48c80000, 0x1080000, f0_1, 0, 0, 2, 0);
            int32_t* valA27 = *(a1 + 0x838);

            if (valA27)
                Qtask_UpdateList(valA27);

            *(a1 + 0x838) = QTask_LinkEventHandler_2(flagP1);
        }

        memcpy(&v_90, a3 + 8, 0x18);
        int32_t v_ac = 0;
        int32_t v_a8 = 0;
        int32_t v_a4_1 = 0;
        Script_SpawnNewTask_31(flagP1, &v_90, &v_ac, 0x3f800000, 0, 0, 0x3f800000, 0xf, 0);
        v_e8 = 0;
        int32_t v_e4_2 = 0;
        void** valA29 = *(a1 + 0x83c);
        int32_t v_e0_2 = 0xc16ddf15;
        v_d0 = 0x42fe0000;
        int32_t v_cc_2 = 0x42fe0000;
        int32_t v_c8_2 = 0x42fe0000;
        v_dc = 0x42cccccd;
        int32_t v_d8_2 = 0x42cccccd;
        struct status_msg* srcS4;

        if (valA29)
            srcS4 = *valA29;

        if (!valA29 || !srcS4)
        {
            uint32_t tmpD7 = g_5bdad0 + 0x18;
            void* valA30 = Level_StartMission_4();
            srcS4 = Script_FormatString_30(Script_FormatString(), valA30, tmpD7, &v_e8, &v_d0, &v_dc, 0x48c80000,
                0x80000, 0, 0, 0, 0xa, AI_AlertAllies_21);
            int32_t* valA33 = *(a1 + 0x83c);

            if (valA33)
                Qtask_UpdateList(valA33);

            *(a1 + 0x83c) = QTask_LinkEventHandler_2(srcS4);
        }

        int32_t i_3 = Sys_FreeMemory_14(Level_SetMission_5(), 3) + 3;

        if (i_3 > 0)
        {
            int32_t i_2 = i_3;
            int32_t i;

            do
            {
                int32_t objC10;
                long double fp0_2;
                fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double x87_r7_19 = fp0_2 - 0.5f;
                int32_t v_114_2 = objC10;
                Script_ParseEnumInt32_31(srcS4, a3 + 8, &v_f4, 0.174532935f, 379f, 606f, 0x3f800000,
                    (x87_r7_19 + x87_r7_19) * 0.052359879f + 0.0127990814f, 0, 0x3f800000, 0x1e, 7);
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
        }

        float tmpD8 = a2[1];
        float valA39 = a2[2];
        v_f4 = *a2;
        long double x87_r7_23 = v_f4;
        long double f7_1 = 0f;
        x87_r7_23 - f7_1;
        float v_ec_2 = valA39;
        float v_f0_2 = tmpD8;

        if (!(*(&((x87_r7_23 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f7_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_463fb5:
            long double x87_r6_19 = v_ec_2;
            long double x87_r5_3 = v_f0_2;
            long double x87_r7_24 =
                1.0 / sqrtl(x87_r7_23 * x87_r7_23 + x87_r5_3 * x87_r5_3 + x87_r6_19 * x87_r6_19);
            x87_r7_23 = x87_r7_23 * x87_r7_24;
            v_f0_2 = v_f0_2 * x87_r7_24;
            v_ec_2 = v_ec_2 * x87_r7_24;
        }
        else
        {
            long double x87_r6_17 = v_f0_2;
            long double f8_1 = 0f;
            x87_r6_17 - f8_1;

            if (!(*(&((x87_r6_17 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_17, f8_1) ? 1 : 0) << 0xa
                    | (x87_r6_17 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_463fb5;

            long double x87_r6_18 = v_ec_2;
            long double f10_1 = 0f;
            x87_r6_18 - f10_1;

            if (!(*(&((x87_r6_18 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_18, f10_1) ? 1 : 0) << 0xa
                    | (x87_r6_18 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_463fb5;
        }

        v_f4 = -(x87_r7_23);
        float v_f0_3 = -(v_f0_2);
        float v_ec_3 = -(v_ec_2);
        v_e8 = 0;
        int32_t v_e4_3 = 0;
        int32_t v_e0_3 = 0xc232674f;
        result = Sys_FreeMemory_14(Level_SetMission_5(), 3) + 2;

        if (result > 0)
        {
            void* dstD3 = result;
            void* i_1;

            do
            {
                int32_t objC12;
                long double fp0_3;
                fp0_3 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double x87_r7_31 = fp0_3 - 0.5f;
                int32_t v_114_4 = objC12;
                result = Script_ParseEnumInt32_31(srcS4, a3 + 8, &v_f4, 1.22173047f, 37f, 113f, 0x3f800000,
                    (x87_r7_31 + x87_r7_31) * 0.052359879f + 0.0127990814f, 0, 0x3f800000, 0x1e, 7);
                i_1 = dstD3;
                dstD3 -= 1;
            } while (i_1 != 1);
        }
    }

    return result;
}
