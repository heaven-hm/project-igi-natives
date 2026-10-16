#include "gi_platform.h"
#include "00505710-MenuItem_LoadParameters.h"
int32_t MenuItem_LoadParameters(void* a1, int32_t a2)

{
    char valA1 = 1;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x4d)))
        valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x4e));

    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
    (*(int32_t*)(uintptr_t)(a1 + 0x4e)) = valA1;

    if (!*i || !i)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x4d)) = 0;
        return valA1;
    }

    int32_t objC = g_afa7e0;
    int32_t valA11;

    do
    {
        int32_t* tmpD1 = *i;
        void* valA5;

        if (!tmpD1)
            valA5 = nullptr;
        else
        {
            int32_t valA2 = *tmpD1;
            int32_t valA3 = -(valA2);
            valA5 = (valA3 - valA3) & tmpD1;
        }

        *((objC << 2) + &g_afa6e0) = valA5;
        g_afa7e0 = objC + 1;
        uint32_t valA7 = Physics_EvaluateAreaCriteria_5();
        int32_t objC2 = 0;
        objC2 = i[7];
        valA11 = *(((valA7 * 0x180 + objC2) << 2) + &g_a96ae0);

        if (valA11)
            valA11 = valA11(i, a2);

        objC = g_afa7e0 - 1;
        g_afa7e0 = objC;
        i = *((objC << 2) + &g_afa6e0);
    } while (i);

    (*(int32_t*)(uintptr_t)(a1 + 0x4d)) = 0;
    return valA11;
}
