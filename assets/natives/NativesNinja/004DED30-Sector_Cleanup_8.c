#include "004DED30-Sector_Cleanup_8.h"
/* 0x004ded30 Sector_Cleanup_8 full linked: callers=0 callees=4 */
int32_t sub_4ded30(void* a1, int32_t* a2)

{
    sub_4dcdd0(a1);
    sub_4c7560(*a2, a1);
    int32_t* i = *(a1 + 8);
    int32_t result;

    if (!*i || !i)
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
            int32_t edx_2 = 0;
            edx_2 = i[7];
            int32_t eax_4 = *(((eax_3 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (eax_4)
                eax_4(i, a2);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* ecx_8 = *(a1 + 0xe8);

    if (ecx_8)
    {
        int32_t* i_1 = *(ecx_8 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* edx_3 = *i_1;
                void* ecx_12;

                if (!edx_3)
                    ecx_12 = nullptr;
                else
                {
                    int32_t ecx_9 = *edx_3;
                    int32_t ecx_10 = -(ecx_9);
                    ecx_12 = (ecx_10 - ecx_10) & edx_3;
                }

                *((result << 2) + &g_afa6e0) = ecx_12;
                g_afa7e0 = result + 1;
                uint32_t eax_8 = sub_4cea20();
                int32_t ecx_13 = 0;
                ecx_13 = i_1[7];
                int32_t eax_12 = *(((eax_8 * 0x180 + ecx_13) << 2) + &g_a96ae0);

                if (eax_12)
                    eax_12(i_1, a2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
