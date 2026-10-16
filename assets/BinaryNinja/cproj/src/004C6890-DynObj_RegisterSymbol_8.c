#include "gi_platform.h"
#include "004C6890-DynObj_RegisterSymbol_8.h"
void* DynObj_RegisterSymbol_8(void* a1, void* a2, int32_t a3)

{
    if (a3 == 0xffffffff)
    {
        void* objC = (*(int32_t*)(uintptr_t)(a1 + 0xd18));

        if (!objC)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0xd18)) = a2;
            (*(int32_t*)(uintptr_t)(a2 + 0x58)) = 0;
            (*(int32_t*)(uintptr_t)(*(a1 + 0xd18) + 0x54)) = 0;
            return a1;
        }

        *(objC + 0x54) = a2;
        void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xd18));
        *(*(objC1 + 0x54) + 0x58) = objC1;
        void* objC3 = (*(int32_t*)(uintptr_t)(*(a1 + 0xd18) + 0x54));
        (*(int32_t*)(uintptr_t)(a1 + 0xd18)) = objC3;
        *(objC3 + 0x54) = 0;
        return a1;
    }

    void* tmpD3 = (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0xd1c));

    if (!tmpD3)
    {
        (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0xd1c)) = a2;
        (*(int32_t*)(uintptr_t)(a2 + 0x58)) = 0;
        void* valA1 = (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0xd1c));
        *(valA1 + 0x54) = 0;
        return valA1;
    }

    *(tmpD3 + 0x54) = a2;
    void* tmpD4 = (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0xd1c));
    *(*(tmpD4 + 0x54) + 0x58) = tmpD4;
    void* tmpD6 = (*(int32_t*)(uintptr_t)(*(a1 + (a3 << 2) + 0xd1c) + 0x54));
    (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0xd1c)) = tmpD6;
    *(tmpD6 + 0x54) = 0;
    return a3;
}
