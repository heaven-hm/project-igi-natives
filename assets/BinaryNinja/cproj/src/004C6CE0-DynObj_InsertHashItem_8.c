#include "gi_platform.h"
#include "004C6CE0-DynObj_InsertHashItem_8.h"
void* DynObj_InsertHashItem_8(void* a1, void* a2)

{
    void* result = (*(int32_t*)(uintptr_t)(a2 + 0x58));

    if (a2 != (*(int32_t*)(uintptr_t)(a1 + 0x2c)))
    {
        void* objC1 = (*(int32_t*)(uintptr_t)(a2 + 0x54));

        if (result)
            *(result + 0x54) = objC1;

        if (objC1)
            *(objC1 + 0x58) = result;
    }
    else
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = result;

        if (result)
            *(result + 0x54) = 0;
    }

    return result;
}
