#include "AI_UpdateOrders_6.h"
int32_t AI_UpdateOrders_6(void* a1, void* a2)

{
    int32_t result = *(a1 + 8);

    if (!(result & 4))
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 8;
        int32_t valA1 = *(objC1 + 0x20);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (result & 0x20000)
    {
        void* objC2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xa;
        int32_t valA4 = *(objC2 + 0x28);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (!(result & 1))
        return result;

    FX_DebrisSpawn_15(a2);
    int32_t* objC3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA7 = *objC3;
    *(a1 + 0x14) = valA7;
    return valA7(a1, a2);
}
