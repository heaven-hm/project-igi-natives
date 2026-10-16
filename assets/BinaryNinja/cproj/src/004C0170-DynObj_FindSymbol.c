#include "gi_platform.h"
#include "004C0170-DynObj_FindSymbol.h"
int32_t DynObj_FindSymbol(void* a1)

{
    char* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x14));
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
