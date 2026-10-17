// Original IGI.EXE function: DynObj_FindSymbol (VA 0x004C0170; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol.h"
int32_t DynObj_FindSymbol(void* a1)

{
    char* tmpD = *(a1 + 0x14);
    char objC = *tmpD;

    if (objC >= 0x30 && objC <= 0x39)
        return 1;

    if (objC == 0x24)
    {
        char valA1 = tmpD[1];

        if ((valA1 >= 0x30 && valA1 <= 0x39) || (valA1 >= 0x61 && valA1 <= 0x66))
            return 1;

        if (valA1 >= 0x41 && valA1 <= 0x46)
            return 1;
    }

    if ((objC != 0x30 || tmpD[1] != 0x78) && tmpD[1] != 0x58)
        return 0;

    return 1;
}
