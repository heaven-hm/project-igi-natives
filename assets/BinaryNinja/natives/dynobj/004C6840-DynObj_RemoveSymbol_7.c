#include "DynObj_RemoveSymbol_7.h"
void* DynObj_RemoveSymbol_7(void* a1, void* a2, int32_t a3)

{
    void* result = a2;
    void* objC = *(result + 0x54);

    if (objC)
        *(objC + 0x58) = *(result + 0x58);
    else if (a3 != 0xffffffff)
        *(a1 + (a3 << 2) + 0xd1c) = *(result + 0x58);
    else
        *(a1 + 0xd18) = *(result + 0x58);

    void* objC3 = *(result + 0x58);

    if (objC3)
    {
        result = *(result + 0x54);
        *(objC3 + 0x54) = result;
    }

    return result;
}
