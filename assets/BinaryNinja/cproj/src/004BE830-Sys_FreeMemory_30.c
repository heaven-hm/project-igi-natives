#include "gi_platform.h"
#include "004BE830-Sys_FreeMemory_30.h"
int32_t Sys_FreeMemory_30(void* a1)

{
    Sys_PushStack_29(a1, 0);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x14)) + 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = result;
    return result;
}
