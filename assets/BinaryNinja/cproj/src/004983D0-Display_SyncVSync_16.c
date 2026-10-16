#include "gi_platform.h"
#include "004983D0-Display_SyncVSync_16.h"
int32_t Display_SyncVSync_16(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 8)) == g_bcaaa8)
    {
        g_bcaaa8 = 0;
        g_bcaaa4 = 0;
        g_bcaaa0 = 0;
    }

    int32_t result = Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 8)));
    (*(int32_t*)(uintptr_t)(a1 + 8)) = 0;
    return result;
}
