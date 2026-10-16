#include "gi_platform.h"
#include "00495DA0-Display_OpenDevice_10.h"
int32_t* Display_OpenDevice_10()

{
    int32_t* result;
    result = g_5ca1b4;

    if (result)
    {
        result = g_5ca194;

        if (result)
        {
            Sys_ReadFileBlock_4(result);
            int32_t* valA = g_5ca190;
            g_5ca194 = 0;
            ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 0x48))))(valA);
            int32_t* valA1 = g_5ca190;
            result = ((int(*)())(uintptr_t)(*(*valA1 + 8)))(valA1);
            g_5ca190 = 0;
        }
    }

    return result;
}
