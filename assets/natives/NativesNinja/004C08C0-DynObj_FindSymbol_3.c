#include "004C08C0-DynObj_FindSymbol_3.h"
/* 0x004c08c0 DynObj_FindSymbol_3 full linked: callers=2 callees=0 */
int32_t sub_4c08c0(char* a1)

{
    char* edx = a1;
    int32_t result = 0;
    char i = *edx;

    while (i)
    {
        int32_t i_1 = i;
        int32_t ecx;

        if (i_1 >= 0x30 && i_1 <= 0x39)
            ecx = i_1 - 0x30;
        else if (i_1 < 0x41 || i_1 > 0x46)
            ecx = i_1 - 0x57;
        else
            ecx = i_1 - 0x37;

        result = result << 4 | ecx;
        i = edx[1];
        edx = &edx[1];
    }

    return result;
}
