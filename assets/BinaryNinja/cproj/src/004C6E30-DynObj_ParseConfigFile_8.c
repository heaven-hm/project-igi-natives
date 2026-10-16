#include "gi_platform.h"
#include "004C6E30-DynObj_ParseConfigFile_8.h"
void* DynObj_ParseConfigFile_8(void* a1, void* a2)

{
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x2c));

    if (!objC)
    {
        (*(int32_t*)(uintptr_t)(a2 + 0x58)) = 0;
        (*(int32_t*)(uintptr_t)(a2 + 0x54)) = 0;
        (*(int32_t*)(uintptr_t)(a2 + 0x50)) = a1;
        (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = a2;
        return a2;
    }

    *(objC + 0x54) = a2;
    (*(int32_t*)(uintptr_t)(a2 + 0x58)) = objC;
    (*(int32_t*)(uintptr_t)(a2 + 0x54)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x50)) = a1;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = a2;
    return a2;
}
