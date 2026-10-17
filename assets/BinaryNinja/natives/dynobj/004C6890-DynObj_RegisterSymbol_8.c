// Original IGI.EXE function: DynObj_RegisterSymbol_8 (VA 0x004C6890; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RegisterSymbol_8.h"
void* DynObj_RegisterSymbol_8(void* a1, void* a2, int32_t a3)

{
    if (a3 == 0xffffffff)
    {
        void* objC = *(a1 + 0xd18);

        if (!objC)
        {
            *(a1 + 0xd18) = a2;
            *(a2 + 0x58) = 0;
            *(*(a1 + 0xd18) + 0x54) = 0;
            return a1;
        }

        *(objC + 0x54) = a2;
        void* objC1 = *(a1 + 0xd18);
        *(*(objC1 + 0x54) + 0x58) = objC1;
        void* objC3 = *(*(a1 + 0xd18) + 0x54);
        *(a1 + 0xd18) = objC3;
        *(objC3 + 0x54) = 0;
        return a1;
    }

    void* tmpD3 = *(a1 + (a3 << 2) + 0xd1c);

    if (!tmpD3)
    {
        *(a1 + (a3 << 2) + 0xd1c) = a2;
        *(a2 + 0x58) = 0;
        void* valA1 = *(a1 + (a3 << 2) + 0xd1c);
        *(valA1 + 0x54) = 0;
        return valA1;
    }

    *(tmpD3 + 0x54) = a2;
    void* tmpD4 = *(a1 + (a3 << 2) + 0xd1c);
    *(*(tmpD4 + 0x54) + 0x58) = tmpD4;
    void* tmpD6 = *(*(a1 + (a3 << 2) + 0xd1c) + 0x54);
    *(a1 + (a3 << 2) + 0xd1c) = tmpD6;
    *(tmpD6 + 0x54) = 0;
    return a3;
}
