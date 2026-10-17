// Original IGI.EXE function: DynObj_RegisterSymbol_4 (VA 0x004C1530; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RegisterSymbol_4.h"
int32_t DynObj_RegisterSymbol_4(void* a1, int32_t a2)

{
    if (a2 < *(a1 + 8))
    {
        int32_t objC1 = *(*(a1 + 0x10) + (a2 << 2));

        if (objC1 < *(a1 + 0xc))
            return *(a1 + 0x14) + objC1;
    }

    return 0;
}
