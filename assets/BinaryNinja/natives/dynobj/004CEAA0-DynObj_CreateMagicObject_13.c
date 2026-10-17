// Original IGI.EXE function: DynObj_CreateMagicObject_13 (VA 0x004CEAA0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_CreateMagicObject_13.h"
void* DynObj_CreateMagicObject_13(void* a1, int32_t a2, int32_t* a3)

{
    int32_t valA = *(a1 + 4);
    int32_t* objC = a1 + 0xc;
    int32_t valA2 = *objC;

    if (a2
        != (((valA2 & 0xff0000) | valA2 >> 0x10) >> 8 | ((valA2 & 0xff00) | valA2 << 0x10) << 8))
    {
        int32_t valA6;

        do
        {
            int32_t valA4 = objC[1];
            objC = objC + (((((valA4 & 0xff0000) | valA4 >> 0x10) >> 8
                | ((valA4 & 0xff00) | valA4 << 0x10) << 8) + 3) & 0xfffffffc) + 8;

            if (objC >= (((valA & 0xff0000) | valA >> 0x10) >> 8 | (valA << 0x10 | (valA & 0xff00)) << 8)
                    + a1 + 8)
                return 0;

            valA6 = *objC;
        } while (a2 !=
            (((valA6 & 0xff0000) | valA6 >> 0x10) >> 8 | ((valA6 & 0xff00) | valA6 << 0x10) << 8));
    }

    if (a3)
    {
        int32_t valA8 = objC[1];
        *a3 = ((valA8 & 0xff0000) | valA8 >> 0x10) >> 8 | ((valA8 & 0xff00) | valA8 << 0x10) << 8;
    }

    return &objC[2];
}
