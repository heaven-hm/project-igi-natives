#include "gi_platform.h"
#include "00442610-SCamera_Setup.h"
int32_t* SCamera_Setup(int80_t a1 , void* a2)

{
    int32_t* i = (*(int32_t*)(uintptr_t)(a2 + 8));
    int32_t* valA;

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            valA = *((valA5 << 2) + &g_a970e0);

            if (valA)
            {
                valA = valA(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    valA = (*(int32_t*)(uintptr_t)(a2 + 0x170));

    if (valA)
        (*(int32_t*)(uintptr_t)(a2 + 0x168)) = 0;
    else
    {
        valA = Script_FormatString_6(a2 + 0x174);

        if (valA)
        {
            int32_t valA6 = Script_SpawnNewTask_7(a2 + 0x174, a2);
            (*(int32_t*)(uintptr_t)(a2 + 0x168)) = a1;
            return valA6;
        }
    }

    return valA;
}
