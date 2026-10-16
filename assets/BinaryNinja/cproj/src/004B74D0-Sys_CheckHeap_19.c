#include "gi_platform.h"
#include "004B74D0-Sys_CheckHeap_19.h"
void* Sys_CheckHeap_19(void* a1, void* a2)

{
    if (a2 && a1)
    {
        int32_t srcS1 = (*(int32_t*)(uintptr_t)(a2 + 8));

        if ((~(srcS1 - 1) & srcS1) != srcS1)
            g_a43e5c = 1;
        else
        {
            void* valA5 = a1 - a2;

            if (valA5 >= (*(int32_t*)(uintptr_t)(a2 + 4)))
                g_a43e5c = 1;
            else
            {
                int32_t objC2 = (*(int32_t*)(uintptr_t)(a1 + 8));

                if ((~(objC2 - 1) & objC2) != objC2 || objC2 > srcS1)
                    g_a43e5c = 1;
                else if ((*(int32_t*)(uintptr_t)(a1 + 4)))
                    return ((objC2 + valA5 + 0xf) & ~(objC2 - 1)) + a2;
            }
        }
    }

    return 0;
}
