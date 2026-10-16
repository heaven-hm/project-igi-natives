#include "004C0170-DynObj_FindSymbol.h"
/* 0x004c0170 DynObj_FindSymbol full linked: callers=1 callees=0 */
int32_t sub_4c0170(void* a1)

{
    char* edx = *(a1 + 0x14);
    char ecx = *edx;

    if (ecx >= 0x30 && ecx <= 0x39)
        return 1;

    if (ecx == 0x24)
    {
        char eax_1 = edx[1];

        if ((eax_1 >= 0x30 && eax_1 <= 0x39) || (eax_1 >= 0x61 && eax_1 <= 0x66))
            return 1;

        if (eax_1 >= 0x41 && eax_1 <= 0x46)
            return 1;
    }

    if ((ecx != 0x30 || edx[1] != 0x78) && edx[1] != 0x58)
        return 0;

    return 1;
}
