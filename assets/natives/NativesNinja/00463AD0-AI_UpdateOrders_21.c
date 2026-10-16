#include "00463AD0-AI_UpdateOrders_21.h"
/* 0x00463ad0 AI_UpdateOrders_21 full linked: callers=6 callees=32 */
void* sub_463ad0(void* a1, int32_t* a2, int32_t a3)

{
    void* result = Config_GetActivePlayerProfileRecord();

    if (*(result + 8))
    {
        float var_f4 = *a2;
        long double x87_r7_1 = var_f4;
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;
        float var_f0_1 = a2[1];
        float var_ec_1 = a2[2];

        if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_463b37:
            long double x87_r7_4 = var_ec_1;
            long double x87_r6_1 = var_f0_1;
            long double x87_r5_1 = var_f4;
            long double x87_r7_6 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
            var_f4 = var_f4 * x87_r7_6;
            var_f0_1 = var_f0_1 * x87_r7_6;
            var_ec_1 = var_ec_1 * x87_r7_6;
        }
        else
        {
            long double x87_r7_2 = var_f0_1;
            long double temp3_1 = 0f;
            x87_r7_2 - temp3_1;

            if (!(*(&((x87_r7_2 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_463b37;

            long double x87_r7_3 = var_ec_1;
            long double temp4_1 = 0f;
            x87_r7_3 - temp4_1;

            if (!(*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_463b37;
        }

        double var_b4_1 = var_ec_1;
        long double x87_r7_9 = var_f4 * 12288.0;
        double var_90;
        memcpy(&var_90, a3 + 8, 0x18);
        double var_bc_2 = var_f0_1 * 12288.0;
        double var_b4_2 = var_b4_1 * 12288.0;
        void* var_74_1 = a1;
        double var_c4 = var_90 + x87_r7_9;
        double var_88;
        double var_bc_3 = var_88 + var_bc_2;
        double var_80;
        double var_b4_3 = var_80 + var_b4_2;
        char eax_3 = Level_LoadObjects_4();
        void var_78;
        void* var_70;
        sub_4cc2a0(Level_StartMission_4(), &var_70, &var_90, &var_c4, 1, eax_3, &var_78,
            0x20000000);
        void* var_24;
        int32_t var_20;
        int32_t var_18;

        if (var_18 && var_24 && !var_20 && *(*(var_24 + 0x258) + 0x58))
        {
            float var_d4_1 = (sub_4b4770(Level_SetMission_5()) + 1f) * 614.400024f;
            uint32_t eax_10 = sub_4b47c0(Level_SetMission_5(), 2);
            float eax_13;

            if (!eax_10)
                eax_13 = g_5bdb08 + 0x18;
            else if (eax_10 != 1)
                eax_13 = var_d4_1;
            else
                eax_13 = g_5bdb10 + 0x18;

            int32_t* var_a0 = &var_70;
            float var_98_1 = eax_13;
            int32_t var_9c_1 = 0;
            float var_94_1 = var_d4_1;
            char eax_14 = sub_47e6f0();
            void* ecx_7 = var_70;
            int32_t edx_4 = 0;
            edx_4 = *(ecx_7 + 0x1c);
            int32_t eax_19 = *(((eax_14 * 0x180 + edx_4) << 2) + &g_a96ae0);

            if (eax_19)
                eax_19(ecx_7, &var_a0);
        }

        int32_t* eax_20 = *(a1 + 0x838);
        int32_t var_e8 = 0;
        int32_t var_e4_1 = 0;
        int32_t var_e0_1 = 0;
        int32_t var_d0 = 0x42fe0000;
        int32_t var_cc_1 = 0x42fe0000;
        int32_t var_c8_1 = 0x42fe0000;
        int32_t var_dc = 0x4499999a;
        int32_t var_d8_1 = 0x4499999a;
        struct status_msg* ebp_1;

        if (eax_20)
            ebp_1 = *eax_20;

        if (!eax_20 || !ebp_1)
        {
            void* ecx_8 = g_5bdad4;
            int32_t temp0_1 = 0xf / *(*(ecx_8 + 0x24) + 4);
            void* eax_24 = Level_StartMission_4();
            ebp_1 = sub_4fdf00(sub_4f0ee0(), eax_24, ecx_8 + 0x18, &var_e8, &var_d0, &var_dc,
                0x48c80000, 0x1080000, temp0_1, 0, 0, 2, 0);
            int32_t* eax_27 = *(a1 + 0x838);

            if (eax_27)
                Qtask_UpdateList(eax_27);

            *(a1 + 0x838) = QTask_LinkEventHandler_2(ebp_1);
        }

        memcpy(&var_90, a3 + 8, 0x18);
        int32_t var_ac = 0;
        int32_t var_a8 = 0;
        int32_t var_a4_1 = 0;
        sub_4fe120(ebp_1, &var_90, &var_ac, 0x3f800000, 0, 0, 0x3f800000, 0xf, 0);
        var_e8 = 0;
        int32_t var_e4_2 = 0;
        void** eax_29 = *(a1 + 0x83c);
        int32_t var_e0_2 = 0xc16ddf15;
        var_d0 = 0x42fe0000;
        int32_t var_cc_2 = 0x42fe0000;
        int32_t var_c8_2 = 0x42fe0000;
        var_dc = 0x42cccccd;
        int32_t var_d8_2 = 0x42cccccd;
        struct status_msg* esi_4;

        if (eax_29)
            esi_4 = *eax_29;

        if (!eax_29 || !esi_4)
        {
            uint32_t edx_7 = g_5bdad0 + 0x18;
            void* eax_30 = Level_StartMission_4();
            esi_4 = sub_4fdf00(sub_4f0ee0(), eax_30, edx_7, &var_e8, &var_d0, &var_dc, 0x48c80000,
                0x80000, 0, 0, 0, 0xa, sub_4640b0);
            int32_t* eax_33 = *(a1 + 0x83c);

            if (eax_33)
                Qtask_UpdateList(eax_33);

            *(a1 + 0x83c) = QTask_LinkEventHandler_2(esi_4);
        }

        int32_t i_3 = sub_4b47c0(Level_SetMission_5(), 3) + 3;

        if (i_3 > 0)
        {
            int32_t i_2 = i_3;
            int32_t i;

            do
            {
                int32_t ecx_10;
                long double st0_2;
                st0_2 = sub_4b4770(Level_SetMission_5());
                long double x87_r7_19 = st0_2 - 0.5f;
                int32_t var_114_2 = ecx_10;
                sub_4fe210(esi_4, a3 + 8, &var_f4, 0.174532935f, 379f, 606f, 0x3f800000,
                    (x87_r7_19 + x87_r7_19) * 0.052359879f + 0.0127990814f, 0, 0x3f800000, 0x1e, 7);
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
        }

        float edx_8 = a2[1];
        float eax_39 = a2[2];
        var_f4 = *a2;
        long double x87_r7_23 = var_f4;
        long double temp7_1 = 0f;
        x87_r7_23 - temp7_1;
        float var_ec_2 = eax_39;
        float var_f0_2 = edx_8;

        if (!(*(&((x87_r7_23 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_463fb5:
            long double x87_r6_19 = var_ec_2;
            long double x87_r5_3 = var_f0_2;
            long double x87_r7_24 =
                1.0 / sqrtl(x87_r7_23 * x87_r7_23 + x87_r5_3 * x87_r5_3 + x87_r6_19 * x87_r6_19);
            x87_r7_23 = x87_r7_23 * x87_r7_24;
            var_f0_2 = var_f0_2 * x87_r7_24;
            var_ec_2 = var_ec_2 * x87_r7_24;
        }
        else
        {
            long double x87_r6_17 = var_f0_2;
            long double temp8_1 = 0f;
            x87_r6_17 - temp8_1;

            if (!(*(&((x87_r6_17 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_17, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r6_17 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_463fb5;

            long double x87_r6_18 = var_ec_2;
            long double temp10_1 = 0f;
            x87_r6_18 - temp10_1;

            if (!(*(&((x87_r6_18 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_18, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r6_18 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_463fb5;
        }

        var_f4 = -(x87_r7_23);
        float var_f0_3 = -(var_f0_2);
        float var_ec_3 = -(var_ec_2);
        var_e8 = 0;
        int32_t var_e4_3 = 0;
        int32_t var_e0_3 = 0xc232674f;
        result = sub_4b47c0(Level_SetMission_5(), 3) + 2;

        if (result > 0)
        {
            void* edi_3 = result;
            void* i_1;

            do
            {
                int32_t ecx_12;
                long double st0_3;
                st0_3 = sub_4b4770(Level_SetMission_5());
                long double x87_r7_31 = st0_3 - 0.5f;
                int32_t var_114_4 = ecx_12;
                result = sub_4fe210(esi_4, a3 + 8, &var_f4, 1.22173047f, 37f, 113f, 0x3f800000,
                    (x87_r7_31 + x87_r7_31) * 0.052359879f + 0.0127990814f, 0, 0x3f800000, 0x1e, 7);
                i_1 = edi_3;
                edi_3 -= 1;
            } while (i_1 != 1);
        }
    }

    return result;
}
