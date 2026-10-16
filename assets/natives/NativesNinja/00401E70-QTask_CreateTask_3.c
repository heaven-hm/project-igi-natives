#include "00401E70-QTask_CreateTask_3.h"
/* 0x00401e70 QTask_CreateTask_3 full linked: callers=2 callees=1 */
int32_t QTask_CreateTask_3(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t eax_4 = g_afa7e0;
    *((eax_4 << 2) + &g_afa6e0) = a1;
    int32_t eax = eax_4 + 1;
    g_afa7e0 = eax;
    int16_t ecx = *(a1 + 0x1c);

    if (ecx == a3)
    {
        int32_t ecx_2 = *(((a2 * 0x180 + ecx) << 2) + &g_a96ae0);

        if (ecx_2)
        {
            ecx_2(a1, a4);
            eax = g_afa7e0;
        }
    }

    if (a1 == *((eax << 2) + &g_afa6dc))
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            do
            {
                int32_t* esi_1 = *i;
                void* edx_9;

                if (!esi_1)
                    edx_9 = nullptr;
                else
                {
                    int32_t edx_6 = *esi_1;
                    int32_t edx_7 = -(edx_6);
                    edx_9 = (edx_7 - edx_7) & esi_1;
                }

                *((eax << 2) + &g_afa6e0) = edx_9;
                g_afa7e0 = eax + 1;
                QTask_CreateTask_3(i, a2, a3, a4);
                eax = g_afa7e0 - 1;
                g_afa7e0 = eax;
                i = *((eax << 2) + &g_afa6e0);
            } while (i);
        }
    }

    g_afa7e0 = eax - 1;
    return eax - 1;
}
