#include "gi_platform.h"
#include "004EE600-ScreenGrab_Setup.h"
int32_t* ScreenGrab_Setup(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    int16_t objC2;

    if (!result)
    {
        result = Mem_Alloc(0xb, 4);
        (*(int32_t*)(uintptr_t)(a1 + 0x20)) = result;
        *result = g_54dccc[0];
        result[1] = g_54dccc[4][0];
        objC2 = g_54dccc[8][0];
        result[2] = objC2;
        *(result + 0xa) = g_54dccc[0xa][0];
    }

    result = (*(int32_t*)(uintptr_t)(a1 + 0x24));

    if (result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x25));

        if (!result)
        {
            g_54dcbc = 0x186a0;
            g_a70c5b = 1;
        }

        result = (*(int32_t*)(uintptr_t)(a1 + 0x24));

        if (result)
        {
            objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
            (*(int32_t*)(uintptr_t)(a1 + 0x25)) = objC2;
            return result;
        }
    }

    g_a70c5b = 0;
    result = (*(int32_t*)(uintptr_t)(a1 + 0x24));
    (*(int32_t*)(uintptr_t)(a1 + 0x25)) = result;
    return result;
}
