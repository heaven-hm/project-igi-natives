#include "004B7490-Sys_ResolveSymbol_19.h"
/* 0x004b7490 Sys_ResolveSymbol_19 full linked: callers=28 callees=0 */
void* sub_4b7490(void* a1)

{
    if (a1)
    {
        int32_t edx_1 = *(a1 + 4);

        if (edx_1)
        {
            int32_t eax_1 = *(a1 + 8);
            int32_t ecx_2 = ~(eax_1 - 1);

            if ((ecx_2 & eax_1) != eax_1)
                g_a43e5c = 1;
            else
            {
                void* eax_3 = (eax_1 + 0x13) & ecx_2;

                if (eax_3 < edx_1)
                    return eax_3 + a1;
            }
        }
    }

    return 0;
}
