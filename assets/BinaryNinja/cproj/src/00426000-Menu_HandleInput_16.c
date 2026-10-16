#include "gi_platform.h"
#include "00426000-Menu_HandleInput_16.h"
int32_t Menu_HandleInput_16(void* a1)

{
    void* dstD = (*(int32_t*)(uintptr_t)(a1 + 0x4c));

    if (!(*(int32_t*)(uintptr_t)(dstD + 0x91d)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
        return 0;
    }

    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x74));

    if (valA1 && AI_FireWeapon_19(valA1))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
        return 0;
    }

    void* valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x4c));

    if (*(valA4 + 0x2ed0))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0x258;
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = *(valA4 + 0x2ed0);
        return 1;
    }

    int32_t* i_1 = (*(int32_t*)(uintptr_t)(dstD + 0xaa8));

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (*(i_1 + 0x29) && *i_1[2])
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0x258;
            (*(int32_t*)(uintptr_t)(a1 + 0x74)) = *i_1[2];
            return 1;
        }

        i_1 = i;
    }

    int32_t valA7 = (*(int32_t*)(uintptr_t)(a1 + 0x78));

    if (!valA7)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
        return 0;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = valA7 - 1;
    return 1;
}
