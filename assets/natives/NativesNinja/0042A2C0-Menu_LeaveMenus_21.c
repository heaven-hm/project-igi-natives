#include "0042A2C0-Menu_LeaveMenus_21.h"
/* 0x0042a2c0 Menu_LeaveMenus_21 full linked: callers=4 callees=15 */
char* Menu_LeaveMenus_21(void* a1, int32_t a2)

{
    int32_t* i = QTask_DeleteTask_2(a1, g_57bcb8);
    bool cond:0 = !*(a1 + 0x880);
    float var_2b8 = *(a1 + 0x770) * 4096f;
    float var_2b4 = *(a1 + 0x774) * 4096f;
    float var_264;

    if (cond:0)
        var_264 = -(*(a1 + 0x74c));
    else
        var_264 = *(a1 + 0x74c);

    if (i)
    {
        int32_t* esi_1 = &var_264;

        do
        {
            esi_1 = &esi_1[1];
            long double x87_r7_6 = i[0x1d3];

            if (!*(a1 + 0x880))
                x87_r7_6 = -(x87_r7_6);

            int16_t edx_1 = g_57bcb8;
            *esi_1 = x87_r7_6;
            i = QTask_TriggerEvent_2(i, edx_1);
        } while (i);
    }

    int32_t* var_2e0_2 = &var_264;
    char var_2c9;
    double var_210;
    char* result = sub_4fec10(*(a1 + 0x77c), nullptr, &var_210, &var_2c9, *(a1 + 0x768),
        *(a1 + 0x778) + 1, nullptr);
    result = var_2c9;

    if (result)
    {
        memcpy(a1 + 0x6c0, a1 + 0x20, 0x18);
        memcpy(a1 + 0x694, a1 + 0x70, 0x28);
        double var_2a4;
        double var_29c;
        double var_1f8;
        long double x87_r7_30;

        if (sub_4b3360(&var_210, &var_1f8))
        {
            *(a1 + 0x70) = 1f;
            *(a1 + 0x80) = 0x3f800000;
            *(a1 + 0x90) = 0x3f800000;
            memcpy(&var_2a4, &var_210, 0x18);
            double var_294;
            x87_r7_30 = var_294;
            *(a1 + 0x74) = 0;
            *(a1 + 0x78) = 0;
            *(a1 + 0x7c) = 0;
            *(a1 + 0x84) = 0;
            *(a1 + 0x88) = 0;
            *(a1 + 0x8c) = 0;
            *(a1 + 0x94) = 0;
        }
        else
        {
            float var_2c8 = var_1f8 - var_210;
            double var_208;
            double var_1f0;
            float var_2c4_1 = var_1f0 - var_208;
            double var_200;
            double var_1e8;
            float var_2c0_1 = var_1e8 - var_200;
            sub_4b4010(a1 + 0x70, &var_2c8);
            var_2c8 = *(a1 + 0x88);
            float edx_5 = *(a1 + 0x8c);
            float ecx_6 = *(a1 + 0x90);
            float esi_4 = *(a1 + 0x70);
            var_2c8 = -(var_2c8);
            *(a1 + 0x88) = esi_4;
            int32_t edx_7 = *(a1 + 0x78);
            *(a1 + 0x8c) = *(a1 + 0x74);
            float var_2c4_3 = -(edx_5);
            *(a1 + 0x90) = edx_7;
            int32_t eax_3 = *(a1 + 0x88);
            float var_2c0_3 = -(ecx_6);
            long double x87_r7_20 = var_1f8 - var_210;
            *(a1 + 0x70) = var_2c8;
            int32_t var_284_1 = eax_3;
            int32_t eax_4 = *(a1 + 0x8c);
            *(a1 + 0x74) = var_2c4_3;
            long double x87_r7_21 = x87_r7_20 * *(a1 + 0x748);
            *(a1 + 0x78) = var_2c0_3;
            int32_t edx_11 = *(a1 + 0x7c);
            float var_28c = *(a1 + 0x70);
            int32_t var_288_1 = edx_11;
            int32_t var_280_1 = *(a1 + 0x74);
            int32_t var_27c_1 = *(a1 + 0x80);
            int32_t edx_13 = *(a1 + 0x84);
            int32_t var_274_1 = *(a1 + 0x78);
            int32_t var_278_1 = eax_4;
            int32_t eax_5 = *(a1 + 0x90);
            int32_t var_268_1 = *(a1 + 0x94);
            var_2a4 = x87_r7_21 + var_210;
            int32_t var_270_1 = edx_13;
            int32_t var_26c_1 = eax_5;
            memcpy(a1 + 0x70, &var_28c, 0x28);
            var_29c = (var_1f0 - var_208) * *(a1 + 0x748) + var_208;
            x87_r7_30 = (var_1e8 - var_200) * *(a1 + 0x748) + var_200;
        }

        float var_2ac_1 = var_2b4 * *(a1 + 0x84) + var_2b8 * *(a1 + 0x80);
        float var_2a8_1 = var_2b8 * *(a1 + 0x8c) + var_2b4 * *(a1 + 0x90);
        var_2a4 = var_2b8 * *(a1 + 0x74) + var_2b4 * *(a1 + 0x78) + var_2a4;
        double var_29c_1 = var_2ac_1 + var_29c;
        double var_294_1 = var_2a8_1 + x87_r7_30;
        long double x87_r7_32 = *(a1 + 0x9c);
        long double x87_r6_9 = *(a1 + 0xa0);
        x87_r6_9 - x87_r7_32;
        long double x87_r7_33;

        if (!(*(&((x87_r6_9 < x87_r7_32 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_9, x87_r7_32) ? 1 : 0) << 0xa
                | (x87_r6_9 == x87_r7_32 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_33 = *(a1 + 0xa0);
        else
            x87_r7_33 = *(a1 + 0x9c);

        long double x87_r6_10 = *(a1 + 0x98);
        x87_r6_10 - x87_r7_33;
        long double x87_r7_35;

        if (*(&((x87_r6_10 < x87_r7_33 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_10, x87_r7_33) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_33 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_36 = *(a1 + 0x9c);
            long double x87_r6_11 = *(a1 + 0xa0);
            x87_r6_11 - x87_r7_36;

            if (!(*(&((x87_r6_11 < x87_r7_36 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_11, x87_r7_36) ? 1 : 0) << 0xa
                    | (x87_r6_11 == x87_r7_36 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_35 = *(a1 + 0xa0);
            else
                x87_r7_35 = *(a1 + 0x9c);
        }
        else
            x87_r7_35 = *(a1 + 0x98);

        int32_t* edx_14 = *(a1 + 0x6c);
        float var_2bc = x87_r7_35;
        float var_2e0_6 = sub_4d0950(edx_14) * var_2bc;
        sub_4c6940(Level_StartMission_4(), a1, &var_2a4, var_2e0_6);
        int32_t* i_1;

        if (!a2)
        {
            i_1 = *(a1 + 8);
            var_2bc = a1 + 0x20;
            float* var_2b8_1 = a1 + 0x70;
        }

        if (a2 || !*i_1 || !i_1)
            result = g_afa7e0;
        else
        {
            result = g_afa7e0;

            do
            {
                int32_t* edx_15 = *i_1;
                void* ecx_16;

                if (!edx_15)
                    ecx_16 = nullptr;
                else
                {
                    int32_t ecx_13 = *edx_15;
                    int32_t ecx_14 = -(ecx_13);
                    ecx_16 = (ecx_14 - ecx_14) & edx_15;
                }

                *((result << 2) + &g_afa6e0) = ecx_16;
                g_afa7e0 = &result[1];
                uint32_t eax_11 = sub_4c5800();
                int32_t edx_16 = 0;
                edx_16 = i_1[7];
                int32_t eax_12 = *(((eax_11 * 0x180 + edx_16) << 2) + &g_a96ae0);

                if (eax_12)
                    eax_12(i_1, &var_2bc);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }

        void* ecx_20 = *(a1 + 0xe8);

        if (ecx_20)
        {
            float* var_2ac_2 = a1 + 0x70;
            void* var_2b0 = a1 + 0x20;
            void* var_2a8_2 = a1;
            int32_t* i_2 = *(ecx_20 + 8);

            if (*i_2 && i_2)
            {
                do
                {
                    int32_t* edx_18 = *i_2;
                    void* ecx_24;

                    if (!edx_18)
                        ecx_24 = nullptr;
                    else
                    {
                        int32_t ecx_21 = *edx_18;
                        int32_t ecx_22 = -(ecx_21);
                        ecx_24 = (ecx_22 - ecx_22) & edx_18;
                    }

                    *((result << 2) + &g_afa6e0) = ecx_24;
                    g_afa7e0 = &result[1];
                    uint32_t eax_16 = MagicObj_GetEventId();
                    int32_t eax_17 = 0;
                    eax_17 = i_2[7];
                    int32_t eax_18 = *(((eax_16 * 0x180 + eax_17) << 2) + &g_a96ae0);

                    if (eax_18)
                        eax_18(i_2, &var_2b0);

                    result = g_afa7e0 - 1;
                    g_afa7e0 = result;
                    i_2 = *((result << 2) + &g_afa6e0);
                } while (i_2);
            }
        }

        result = var_2c9;

        if (result)
            return Menu_UpdateLanguage_21(a1, &var_1f8, a2);
    }

    return result;
}
