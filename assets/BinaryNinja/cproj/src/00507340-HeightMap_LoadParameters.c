#include "gi_platform.h"
#include "00507340-HeightMap_LoadParameters.h"
void* HeightMap_LoadParameters(void* a1)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0xe0)))
    {
        void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xc0));

        if (valA1 != 0xffffffff && !*(valA1 + 0xb81920))
        {
            Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(*(*(a1 + 0x68) + 0xdd0) + valA1 * 0xc)));
            (*(int32_t*)(uintptr_t)(*(*(a1 + 0x68) + 0xdd0) + *(a1 + 0xc0) * 0xc)) = 0;
            (*(int32_t*)(uintptr_t)(*(*(a1 + 0x68) + 0xdd0) + *(a1 + 0xc0) * 0xc)) = 0;
        }

        int32_t valA7 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));

        if (valA7 != 0xffffffff)
        {
            int32_t objC6 = g_a7b250;

            if (valA7 != objC6 - 1)
            {
                void* objC7 = *((objC6 << 2) + &g_a7ad0c);
                *((valA7 << 2) + &g_a7ad10) = objC7;
                *(objC7 + 0xf8) = valA7;
            }

            g_a7b250 -= 1;
        }
    }

    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
