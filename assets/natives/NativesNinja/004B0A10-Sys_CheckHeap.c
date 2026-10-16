#include "004B0A10-Sys_CheckHeap.h"
/* 0x004b0a10 Sys_CheckHeap full linked: callers=1 callees=0 */
int32_t sub_4b0a10(char* a1, int32_t a2, int32_t a3, int32_t a4)

{
    if (g_9422e4 <= a4)
    {
        if (a2)
            *a1 = 0;
    }
    else if (a2)
    {
        char* i = nullptr;

        if (a2 - 1 > 0)
        {
            do
            {
                int32_t ecx_1 = g_9422e0;

                if (i >= *(ecx_1 + (a4 << 3) + 4) - 1)
                    break;

                char* ecx_3 = *(ecx_1 + (a4 << 3)) + i;
                i = &i[1];
                *(i + a1 - 1) = ecx_3[a3];
            } while (i < a2 - 1);
        }

        *(i + a1) = 0;
        return 1;
    }

    return 0;
}
