#include "00401D80-QTask_ProcessQueue_2.h"
/* 0x00401d80 QTask_ProcessQueue_2 full linked: callers=5 callees=1 */
int32_t QTask_ProcessQueue_2(void* a1, int32_t a2, int32_t a3)

{
    int32_t eax_4 = g_afa7e0;
    *((eax_4 << 2) + &g_afa6e0) = a1;
    int32_t eax = eax_4 + 1;
    int32_t edx = 0;
    g_afa7e0 = eax;
    edx = *(a1 + 0x1c);
    int32_t ecx_5 = *(((a2 * 0x180 + edx) << 2) + &g_a96ae0);

    if (ecx_5)
    {
        ecx_5(a1, a3);
        eax = g_afa7e0;
    }

    if (a1 == *((eax << 2) + &g_afa6dc))
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            do
            {
                int32_t* esi_1 = *i;
                void* edx_4;

                if (!esi_1)
                    edx_4 = nullptr;
                else
                {
                    int32_t edx_1 = *esi_1;
                    int32_t edx_2 = -(edx_1);
                    edx_4 = (edx_2 - edx_2) & esi_1;
                }

                *((eax << 2) + &g_afa6e0) = edx_4;
                g_afa7e0 = eax + 1;
                QTask_ProcessQueue_2(i, a2, a3);
                eax = g_afa7e0 - 1;
                g_afa7e0 = eax;
                i = *((eax << 2) + &g_afa6e0);
            } while (i);
        }
    }

    g_afa7e0 = eax - 1;
    return eax - 1;
}
