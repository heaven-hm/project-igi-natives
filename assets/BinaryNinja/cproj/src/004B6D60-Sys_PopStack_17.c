#include "gi_platform.h"
#include "004B6D60-Sys_PopStack_17.h"
int32_t* Sys_PopStack_17(void* a1, int32_t a2)

{
    if (a2)
    {
        int32_t valA = 0;
        valA = (*(int32_t*)(uintptr_t)(a1 + 0x14));
        int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 8)) + valA * 0x24 + 4;
        *result |= 0x10000;
        return result;
    }

    int32_t valA2 = 0;
    valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    int32_t tmpD = valA2 * 9;
    int32_t valA3 = (*(int32_t*)(uintptr_t)(a1 + 8));
    *(valA3 + (tmpD << 2) + 4) &= 0xfffeffff;
    return valA3 + (tmpD << 2) + 4;
}
