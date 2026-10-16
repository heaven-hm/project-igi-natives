#include "0042A7C0-Menu_UpdateLanguage_21.h"
/* 0x0042a7c0 Menu_UpdateLanguage_21 full linked: callers=1 callees=13 */
int32_t* Menu_UpdateLanguage_21(void* a1, double* a2, int32_t a3)

{
    int32_t* result = QTask_DeleteTask_2(a1, g_57bcb8);
    int32_t* i = result;

    if (i)
    {
        double* var_84_1 = &a2[3];

        do
        {
            long double x87_r7_2 = i[0x1dc] * 4096f;
            memcpy(&i[0x1b0], &i[8], 0x18);
            float var_68_1 = x87_r7_2;
            float var_64_1 = i[0x1dd] * 4096f;
            memcpy(&i[0x1a5], &i[0x1c], 0x28);
            double var_48;
            double var_40;
            double var_38;
            double* edi_4;

            if (sub_4b3360(a2, var_84_1))
            {
                i[0x1c] = 0x3f800000;
                i[0x20] = 0x3f800000;
                i[0x24] = 0x3f800000;
                i[0x1d] = 0;
                i[0x1e] = 0;
                i[0x1f] = 0;
                i[0x21] = 0;
                i[0x22] = 0;
                i[0x23] = 0;
                i[0x25] = 0;
                memcpy(&var_48, a2, 0x18);
                edi_4 = var_84_1;
            }
            else
            {
                float var_78 = *var_84_1 - *a2;
                float var_74_1 = var_84_1[1] - var_84_1[-2];
                float var_70_1 = var_84_1[2] - var_84_1[-1];
                sub_4b4010(&i[0x1c], &var_78);
                var_78 = i[0x22];
                float edx_5 = i[0x23];
                float ecx_3 = i[0x24];
                var_78 = -(var_78);
                float var_74_3 = -(edx_5);
                float var_70_3 = -(ecx_3);
                i[0x22] = i[0x1c];
                int32_t edx_7 = i[0x1e];
                i[0x23] = i[0x1d];
                i[0x24] = edx_7;
                int32_t var_28_1 = i[0x22];
                int32_t eax_6 = i[0x23];
                i[0x1c] = var_78;
                int32_t var_1c_1 = eax_6;
                int32_t eax_7 = i[0x24];
                i[0x1d] = var_74_3;
                int32_t var_10_1 = eax_7;
                i[0x1e] = var_70_3;
                int32_t edx_11 = i[0x1f];
                float var_30 = i[0x1c];
                int32_t var_2c_1 = edx_11;
                int32_t var_24_1 = i[0x1d];
                int32_t var_20_1 = i[0x20];
                int32_t var_18_1 = i[0x1e];
                int32_t var_14_1 = i[0x21];
                int32_t var_c_1 = i[0x25];
                memcpy(&i[0x1c], &var_30, 0x28);
                edi_4 = var_84_1;
                var_48 = (*edi_4 - *a2) * i[0x1d2] + *a2;
                var_40 = (edi_4[1] - edi_4[-2]) * i[0x1d2] + edi_4[-2];
                var_38 = (edi_4[2] - edi_4[-1]) * i[0x1d2] + edi_4[-1];
            }

            long double x87_r7_31 = var_64_1 * i[0x1e] + var_68_1 * i[0x1d];
            float var_5c_1 = var_68_1 * i[0x20] + var_64_1 * i[0x21];
            float var_58 = var_64_1 * i[0x24] + var_68_1 * i[0x23];
            var_48 = x87_r7_31 + var_48;
            var_40 = var_5c_1 + var_40;
            var_38 = var_58 + var_38;
            long double x87_r7_37 = i[0x27];
            long double x87_r6_9 = i[0x28];
            x87_r6_9 - x87_r7_37;
            long double x87_r7_38;

            if (!(*(&((x87_r6_9 < x87_r7_37 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_9, x87_r7_37) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_37 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_38 = i[0x28];
            else
                x87_r7_38 = i[0x27];

            long double x87_r6_10 = i[0x26];
            x87_r6_10 - x87_r7_38;
            long double x87_r7_40;

            if (*(&((x87_r6_10 < x87_r7_38 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_10, x87_r7_38) ? 1 : 0) << 0xa
                | (x87_r6_10 == x87_r7_38 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_41 = i[0x27];
                long double x87_r6_11 = i[0x28];
                x87_r6_11 - x87_r7_41;

                if (!(*(&((x87_r6_11 < x87_r7_41 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_11, x87_r7_41) ? 1 : 0) << 0xa
                        | (x87_r6_11 == x87_r7_41 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_40 = i[0x28];
                else
                    x87_r7_40 = i[0x27];
            }
            else
                x87_r7_40 = i[0x26];

            float var_94_4 = sub_4d0950(i[0x1b]) * x87_r7_40;
            void* edx_15 = sub_4c6940(Level_StartMission_4(), i, &var_48, var_94_4);
            void* var_80;
            int32_t* j;

            if (!a3)
            {
                j = i[2];
                var_80 = &i[8];
                void* var_7c_1 = &i[0x1c];
            }

            int32_t eax_15;

            if (a3 || !*j || !j)
                eax_15 = g_afa7e0;
            else
            {
                eax_15 = g_afa7e0;

                do
                {
                    int32_t* edx_16 = *j;
                    void* ecx_13;

                    if (!edx_16)
                        ecx_13 = nullptr;
                    else
                    {
                        int32_t ecx_10 = *edx_16;
                        int32_t ecx_11 = -(ecx_10);
                        ecx_13 = (ecx_11 - ecx_11) & edx_16;
                    }

                    *((eax_15 << 2) + &g_afa6e0) = ecx_13;
                    g_afa7e0 = eax_15 + 1;
                    uint32_t eax_18 = sub_4c5800();
                    edx_15 = nullptr;
                    edx_15 = j[7];
                    int32_t eax_19 = *(((eax_18 * 0x180 + edx_15) << 2) + &g_a96ae0);

                    if (eax_19)
                        edx_15 = eax_19(j, &var_80);

                    eax_15 = g_afa7e0 - 1;
                    g_afa7e0 = eax_15;
                    j = *((eax_15 << 2) + &g_afa6e0);
                } while (j);
            }

            void* ecx_17 = i[0x3a];

            if (ecx_17)
            {
                int32_t* i_1 = i;
                void* var_54 = &i[8];
                edx_15 = &i[0x1c];
                void* var_50_1 = edx_15;
                int32_t* j_1 = *(ecx_17 + 8);

                if (*j_1 && j_1)
                {
                    do
                    {
                        int32_t* edx_18 = *j_1;
                        void* ecx_21;

                        if (!edx_18)
                            ecx_21 = nullptr;
                        else
                        {
                            int32_t ecx_18 = *edx_18;
                            int32_t ecx_19 = -(ecx_18);
                            ecx_21 = (ecx_19 - ecx_19) & edx_18;
                        }

                        *((eax_15 << 2) + &g_afa6e0) = ecx_21;
                        g_afa7e0 = eax_15 + 1;
                        uint32_t eax_23 = MagicObj_GetEventId();
                        int32_t eax_24 = 0;
                        eax_24 = j_1[7];
                        edx_15 = eax_23 * 0x180 + eax_24;
                        int32_t eax_25 = *((edx_15 << 2) + &g_a96ae0);

                        if (eax_25)
                            edx_15 = eax_25(j_1, &var_54);

                        eax_15 = g_afa7e0 - 1;
                        g_afa7e0 = eax_15;
                        j_1 = *((eax_15 << 2) + &g_afa6e0);
                    } while (j_1);
                }
            }

            edx_15 = g_57bcb8;
            result = QTask_TriggerEvent_2(i, edx_15);
            i = result;
            a2 = &a2[3];
            var_84_1 = &edi_4[3];
        } while (i);
    }

    return result;
}
