#include "gi_platform.h"
#include "00454880-AI_SelectTarget_6.h"
int32_t AI_SelectTarget_6(void* a1, void* a2)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!(result & 4))
    {
        void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 8;
        int32_t valA1 = *(objC1 + 0x20);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA1;
        return valA1(a1, a2);
    }

    if (result & 0x10000)
    {
        void* objC2 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 9;
        int32_t valA4 = *(objC2 + 0x24);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA4;
        return valA4(a1, a2);
    }

    if (result & 0x20000)
    {
        void* objC3 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xa;
        int32_t valA7 = *(objC3 + 0x28);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA7;
        return valA7(a1, a2);
    }

    if (!(result & 0x301fe1) && (*(int32_t*)(uintptr_t)(a2 + 0xd0c)) != 0xffffffff)
        return result;

    FX_DebrisSpawn_15(a2);
    int32_t* objC4 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    int32_t valA10 = *objC4;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA10;
    return valA10(a1, a2);
}
