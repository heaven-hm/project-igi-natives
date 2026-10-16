#include "004244B0-MenuWindow_Setup.h"
/* 0x004244b0 MenuWindow_Setup full linked: callers=0 callees=0 */
int32_t MenuWindow_Setup(void* a1)

{
    void* edi = a1;
    char var_18 = 0;
    char var_17 = 0;
    void* var_4 = edi;
    int32_t result = *(edi + 0x38);

    if (result)
    {
        int32_t* eax = *(edi + 8);
        int32_t esi_1 = *eax;
        int32_t esi_2 = -(esi_1);
        int32_t ebx_1 = 0;
        int32_t* i = (esi_2 - esi_2) & eax;
        void* ecx_1 = nullptr;
        int32_t ebp_1 = 0;
        a1 = nullptr;

        if (i)
        {
            do
            {
                int32_t eax_1 = 0;
                int32_t ecx_2 = 0;
                eax_1 = g_53b921;
                char var_24 = 0;
                ecx_2 = i[7];
                int32_t eax_5 = *(((eax_1 * 0x180 + ecx_2) << 2) + &g_a96ae0);

                if (eax_5)
                {
                    eax_5(i, &var_24);

                    if (var_24)
                    {
                        int32_t var_20;
                        ebx_1 += var_20;
                        int32_t var_1c;
                        a1 += var_1c;
                        ebp_1 += 1;
                    }
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);

            ecx_1 = a1;
        }

        result = *(edi + 0x38) - 1;

        switch (result)
        {
            case 0:
            {
                result = *(edi + 0x34);
                int32_t result_4 = result;
                int32_t var_10_1 = *(edi + 0x24) + result;
                char var_17_1 = 1;
                break;
            }
            case 1:
            {
                char var_17_2 = 1;
                result = (*(edi + 0x2c) - ecx_1) / (ebp_1 + 1);
                int32_t result_5 = result;
                int32_t var_10_2 = *(edi + 0x24) + result;
                break;
            }
            case 2:
            {
                int32_t eax_13 = *(edi + 0x34);
                int32_t var_8_1 = eax_13;
                result = eax_13 * ebp_1;
                char var_17_3 = 1;
                void* var_10_3 = *(edi + 0x2c) - result + *(edi + 0x24) - ecx_1;
                break;
            }
            case 3:
            {
                result = *(edi + 0x30);
                int32_t result_1 = result;
                int32_t var_14_1 = *(edi + 0x20) + result;
                var_18 = 1;
                break;
            }
            case 4:
            {
                result = (*(edi + 0x28) - ebx_1) / (ebp_1 + 1);
                int32_t result_2 = result;
                int32_t var_14_2 = *(edi + 0x20) + result;
                var_18 = 1;
                break;
            }
            case 5:
            {
                int32_t eax_22 = *(edi + 0x30);
                int32_t var_c_1 = eax_22;
                result = eax_22 * ebp_1;
                int32_t var_14_3 = *(edi + 0x28) - result + *(edi + 0x20) - ebx_1;
                var_18 = 1;
                break;
            }
            case 6:
            {
                int32_t eax_14 = *(edi + 0x34);
                int32_t var_10_4 = *(edi + 0x24) + eax_14;
                int32_t ecx_9 = ebp_1 - 1;

                if (ecx_9 < 1)
                    ecx_9 = 1;

                char var_17_4 = 1;
                result = (*(edi + 0x2c) - eax_14 * 2 - a1) / ecx_9;
                int32_t result_6 = result;
                break;
            }
            case 7:
            {
                int32_t eax_23 = *(edi + 0x30);
                int32_t ecx_16 = ebp_1 - 1;
                int32_t var_14_4 = *(edi + 0x20) + eax_23;

                if (ecx_16 < 1)
                    ecx_16 = 1;

                result = (*(edi + 0x28) - eax_23 * 2 - ebx_1) / ecx_16;
                int32_t result_3 = result;
                var_18 = 1;
                break;
            }
        }
    }

    int32_t* i_1 = *(edi + 8);
    int32_t ecx_17;

    if (!*i_1 || !i_1)
        ecx_17 = g_afa7e0;
    else
    {
        ecx_17 = g_afa7e0;

        do
        {
            int32_t* esi_5 = *i_1;
            void* eax_32;

            if (!esi_5)
                eax_32 = nullptr;
            else
            {
                int32_t eax_29 = *esi_5;
                int32_t eax_30 = -(eax_29);
                eax_32 = (eax_30 - eax_30) & esi_5;
            }

            *((ecx_17 << 2) + &g_afa6e0) = eax_32;
            uint32_t eax_34 = *g_53b920;
            int32_t ecx_18 = ecx_17 + 1;
            int32_t esi_6 = 0;
            g_afa7e0 = ecx_18;
            esi_6 = i_1[7];
            result = *(((eax_34 * 0x180 + esi_6) << 2) + &g_a96ae0);

            if (result)
            {
                result = result(i_1, &var_18);
                ecx_18 = g_afa7e0;
            }

            i_1 = *((ecx_18 << 2) + &g_afa6dc);
            ecx_17 = ecx_18 - 1;
            g_afa7e0 = ecx_17;
        } while (i_1);
    }

    int32_t* i_3 = *(edi + 8);

    if (*i_3)
    {
        int32_t* i_2 = i_3;

        if (i_2)
        {
            int32_t edi_1 = g_53b910;

            do
            {
                int32_t* esi_7 = *i_2;
                void* eax_41;

                if (!esi_7)
                    eax_41 = nullptr;
                else
                {
                    int32_t eax_38 = *esi_7;
                    int32_t eax_39 = -(eax_38);
                    eax_41 = (eax_39 - eax_39) & esi_7;
                }

                *((ecx_17 << 2) + &g_afa6e0) = eax_41;
                int32_t ecx_19 = ecx_17 + 1;
                int32_t eax_42 = 0;
                g_afa7e0 = ecx_19;
                eax_42 = i_2[7];
                result = *(((eax_42 + edi_1 * 0x180) << 2) + &g_a96ae0);

                if (result)
                {
                    result = result(i_2);
                    ecx_19 = g_afa7e0;
                    edi_1 = g_53b910;
                }

                i_2 = *((ecx_19 << 2) + &g_afa6dc);
                ecx_17 = ecx_19 - 1;
                g_afa7e0 = ecx_17;
            } while (i_2);
        }
    }

    return result;
}
