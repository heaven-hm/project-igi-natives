#include "gi_platform.h"
#include "00495C80-Display_RestoreDevice_9.h"
int32_t* Display_RestoreDevice_9()

{
    int32_t* result = g_5ca194;

    if (!result)
        return result;

    Sys_ReadFileBlock_4(result);
    int32_t* valA = g_5ca190;
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 0x48))))(valA);
    int32_t* valA1 = g_5ca190;
    return ((int(*)())(uintptr_t)(*(*valA1 + 8)))(valA1);
}
