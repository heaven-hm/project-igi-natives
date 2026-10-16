#include "gi_platform.h"
#include "004C1530-DynObj_RegisterSymbol_4.h"
int32_t DynObj_RegisterSymbol_4(void* a1, int32_t a2)

{
    if (a2 < (*(int32_t*)(uintptr_t)(a1 + 8)))
    {
        int32_t objC1 = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + (a2 << 2)));

        if (objC1 < (*(int32_t*)(uintptr_t)(a1 + 0xc)))
            return (*(int32_t*)(uintptr_t)(a1 + 0x14)) + objC1;
    }

    return 0;
}
