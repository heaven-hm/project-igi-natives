#include "gi_platform.h"
#include "0045C370-AI_UpdatePatrol_16.h"
int32_t AI_UpdatePatrol_16(void* a1, void* a2)

{
    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!(objC & 4))
    {
        void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1d;
        int32_t valA1 = *(objC1 + 0x74);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA1;
        return valA1(a1, a2);
    }

    if (objC & 0x20000)
    {
        void* objC2 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x22;
        int32_t valA4 = *(objC2 + 0x88);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA4;
        return valA4(a1, a2);
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0xd14));

    if (result <= 0x13)
    {
        result += 1;
        (*(int32_t*)(uintptr_t)(a2 + 0xd14)) = result;
    }
    else if (objC & 0x10000)
    {
        void* objC3 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1f;
        int32_t valA7 = *(objC3 + 0x7c);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA7;
        return valA7(a1, a2);
    }

    if (!(objC & 1))
        return result;

    FX_DebrisSpawn_15(a2);
    void* valA9 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1a;
    int32_t valA10 = *(valA9 + 0x68);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA10;
    return valA10(a1, a2);
}
