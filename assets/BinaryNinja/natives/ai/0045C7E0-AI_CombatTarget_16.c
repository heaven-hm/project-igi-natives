#include "AI_CombatTarget_16.h"
int32_t AI_CombatTarget_16(void* a1, void* a2)

{
    int32_t result = *(a1 + 8);

    if (!(result & 4))
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t valA1 = *(objC1 + 0x74);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (result & 0x10000)
    {
        void* objC2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA4 = *(objC2 + 0x78);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (result & 0x20000)
    {
        void* objC3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA7 = *(objC3 + 0x80);
        *(a1 + 0x14) = valA7;
        return valA7(a1, a2);
    }

    if (!(result & 0xfd81fe1) && *(a2 + 0xd0c) != 0xffffffff)
        return result;

    FX_DebrisSpawn_15(a2);
    int32_t* objC4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA10 = *objC4;
    *(a1 + 0x14) = valA10;
    return valA10(a1, a2);
}
