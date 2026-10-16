#include "gi_platform.h"
#include "004B0A10-Sys_CheckHeap.h"
int32_t Sys_CheckHeap(char* a1, int32_t a2, int32_t a3, int32_t a4)

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
                int32_t objC1 = g_9422e0;

                if (i >= (*(int32_t*)(uintptr_t)(objC1 + (a4 << 3) + 4)) - 1)
                    break;

                char* objC3 = (*(int32_t*)(uintptr_t)(objC1 + (a4 << 3))) + i;
                i = &i[1];
                (*(int32_t*)(uintptr_t)(i + a1 - 1)) = objC3[a3];
            } while (i < a2 - 1);
        }

        (*(int32_t*)(uintptr_t)(i + a1)) = 0;
        return 1;
    }

    return 0;
}
