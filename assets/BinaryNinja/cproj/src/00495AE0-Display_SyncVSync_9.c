#include "gi_platform.h"
#include "00495AE0-Display_SyncVSync_9.h"
int32_t Display_SyncVSync_9()

{
    void* valA5 = g_6840f0;

    if (valA5)
    {
        Sys_ExecuteBytecode_2(valA5);
        g_6840f0 = 0;
        g_6840f8 = 0;
        g_6840f4 = 0;
    }

    int32_t result = g_67a498;

    if (!result)
        return result;

    if (g_6840ea)
    {
        int32_t* valA1 = g_67a49c;
        ((int(*)())(uintptr_t)(*(*valA1 + 8)))(valA1);
    }

    int32_t* valA2 = g_5ca154;
    ((int(*)())(uintptr_t)(*(*valA2 + 0x48)))(valA2);
    int32_t* valA3 = g_5ca154;
    ((int(*)())(uintptr_t)(*(*valA3 + 8)))(valA3);
    int32_t* valA4 = g_67a498;
    return ((int(*)())(uintptr_t)(*(*valA4 + 8)))(valA4);
}
