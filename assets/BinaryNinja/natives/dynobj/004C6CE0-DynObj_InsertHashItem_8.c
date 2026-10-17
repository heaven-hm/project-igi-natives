// Original IGI.EXE function: DynObj_InsertHashItem_8 (VA 0x004C6CE0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem_8.h"
void* DynObj_InsertHashItem_8(void* a1, void* a2)

{
    void* result = *(a2 + 0x58);

    if (a2 != *(a1 + 0x2c))
    {
        void* objC1 = *(a2 + 0x54);

        if (result)
            *(result + 0x54) = objC1;

        if (objC1)
            *(objC1 + 0x58) = result;
    }
    else
    {
        *(a1 + 0x2c) = result;

        if (result)
            *(result + 0x54) = 0;
    }

    return result;
}
