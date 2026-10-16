#include "004B74D0-Sys_CheckHeap_19.h"
/* 0x004b74d0 Sys_CheckHeap_19 full linked: callers=34 callees=0 */
void* sub_4b74d0(void* a1, void* a2)

{
    if (a2 && a1)
    {
        int32_t esi_1 = *(a2 + 8);

        if ((~(esi_1 - 1) & esi_1) != esi_1)
            g_a43e5c = 1;
        else
        {
            void* eax_5 = a1 - a2;

            if (eax_5 >= *(a2 + 4))
                g_a43e5c = 1;
            else
            {
                int32_t ecx_2 = *(a1 + 8);

                if ((~(ecx_2 - 1) & ecx_2) != ecx_2 || ecx_2 > esi_1)
                    g_a43e5c = 1;
                else if (*(a1 + 4))
                    return ((ecx_2 + eax_5 + 0xf) & ~(ecx_2 - 1)) + a2;
            }
        }
    }

    return 0;
}
