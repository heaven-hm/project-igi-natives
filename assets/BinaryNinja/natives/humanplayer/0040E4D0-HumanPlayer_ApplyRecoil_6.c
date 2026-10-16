#include "HumanPlayer_ApplyRecoil_6.h"
int32_t HumanPlayer_ApplyRecoil_6(void* a1, void* a2)

{
    int32_t result = *(a1 + 8);

    if (result & 0x20000)
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2f;
        int32_t valA1 = *(objC1 + 0xbc);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (result & 0x10000)
    {
        void* objC2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2e;
        int32_t valA4 = *(objC2 + 0xb8);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (!(result & 1))
        return result;

    HumanPlayer_LoadParameters_6(a2);
    int32_t* objC3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA7 = *objC3;
    *(a1 + 0x14) = valA7;
    return valA7(a1, a2);
}
