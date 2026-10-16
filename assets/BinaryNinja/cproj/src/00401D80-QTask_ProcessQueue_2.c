#include "gi_platform.h"
#include "00401D80-QTask_ProcessQueue_2.h"
int32_t QTask_ProcessQueue_2(void* a1, int32_t a2, int32_t a3)

{
    int32_t valA4 = g_afa7e0;
    *((valA4 << 2) + &g_afa6e0) = a1;
    int32_t valA = valA4 + 1;
    int32_t tmpD = 0;
    g_afa7e0 = valA;
    tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    int32_t objC5 = (*(int32_t*)(uintptr_t)(((a2 * 0x180 + tmpD) << 2) + &g_a96ae0));

    if (objC5)
    {
        objC5(a1, a3);
        valA = g_afa7e0;
    }

    if (a1 == (*(int32_t*)(uintptr_t)((valA << 2) + &g_afa6dc)))
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i && i)
        {
            do
            {
                int32_t* srcS1 = *i;
                void* tmpD4;

                if (!srcS1)
                    tmpD4 = nullptr;
                else
                {
                    int32_t tmpD1 = *srcS1;
                    int32_t tmpD2 = -(tmpD1);
                    tmpD4 = (tmpD2 - tmpD2) & srcS1;
                }

                (*(int32_t*)(uintptr_t)((valA << 2) + &g_afa6e0)) = tmpD4;
                g_afa7e0 = valA + 1;
                QTask_ProcessQueue_2(i, a2, a3);
                valA = g_afa7e0 - 1;
                g_afa7e0 = valA;
                i = (*(int32_t*)(uintptr_t)((valA << 2) + &g_afa6e0));
            } while (i);
        }
    }

    g_afa7e0 = valA - 1;
    return valA - 1;
}
