#include "gi_platform.h"
#include "004B7570-Sys_FreeMemory_20.h"
int32_t Sys_FreeMemory_20(void* a1)

{
    if (!a1)
        return 0;

    return (*(int32_t*)(uintptr_t)(a1 + 0x10));
}
