#include "004DEA80-Sector_Cleanup_6.h"
/* 0x004dea80 Sector_Cleanup_6 full linked: callers=0 callees=3 */
int32_t sub_4dea80(void* a1, int32_t a2)

{
    sub_4de040(a1);
    void* eax = *(a1 + 0x148);
    int32_t result;

    if (!eax)
        result = g_afa7e0;
    else
    {
        int32_t* i_2 = *(eax + 8);

        if (!*i_2)
            result = g_afa7e0;
        else
        {
            int32_t* i = i_2;

            if (!i)
                result = g_afa7e0;
            else
            {
                result = g_afa7e0;

                do
                {
                    int32_t* edx_1 = *i;
                    void* ecx_4;

                    if (!edx_1)
                        ecx_4 = nullptr;
                    else
                    {
                        int32_t ecx_1 = *edx_1;
                        int32_t ecx_2 = -(ecx_1);
                        ecx_4 = (ecx_2 - ecx_2) & edx_1;
                    }

                    *((result << 2) + &g_afa6e0) = ecx_4;
                    g_afa7e0 = result + 1;
                    uint32_t eax_3 = sub_4cea20();
                    int32_t ecx_5 = 0;
                    ecx_5 = i[7];
                    int32_t eax_7 = *(((eax_3 * 0x180 + ecx_5) << 2) + &g_a96ae0);

                    if (eax_7)
                        eax_7(i, a2);

                    result = g_afa7e0 - 1;
                    g_afa7e0 = result;
                    i = *((result << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    void* ecx_6 = *(a1 + 0xe8);

    if (ecx_6)
    {
        int32_t* i_1 = *(ecx_6 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* edx_2 = *i_1;
                void* ecx_10;

                if (!edx_2)
                    ecx_10 = nullptr;
                else
                {
                    int32_t ecx_7 = *edx_2;
                    int32_t ecx_8 = -(ecx_7);
                    ecx_10 = (ecx_8 - ecx_8) & edx_2;
                }

                *((result << 2) + &g_afa6e0) = ecx_10;
                g_afa7e0 = result + 1;
                uint32_t eax_11 = sub_4cea20();
                int32_t eax_12 = 0;
                eax_12 = i_1[7];
                int32_t eax_13 = *(((eax_11 * 0x180 + eax_12) << 2) + &g_a96ae0);

                if (eax_13)
                    eax_13(i_1, a2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
