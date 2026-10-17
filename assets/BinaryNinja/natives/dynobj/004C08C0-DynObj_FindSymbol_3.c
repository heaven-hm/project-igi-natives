// Original IGI.EXE function: DynObj_FindSymbol_3 (VA 0x004C08C0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_3.h"
int32_t DynObj_FindSymbol_3(char* a1)

{
    char* tmpD = a1;
    int32_t result = 0;
    char i = *tmpD;

    while (i)
    {
        int32_t i_1 = i;
        int32_t objC;

        if (i_1 >= 0x30 && i_1 <= 0x39)
            objC = i_1 - 0x30;
        else if (i_1 < 0x41 || i_1 > 0x46)
            objC = i_1 - 0x57;
        else
            objC = i_1 - 0x37;

        result = result << 4 | objC;
        i = tmpD[1];
        tmpD = &tmpD[1];
    }

    return result;
}
