#include "gi_platform.h"
#include "004B0670-Sys_FreeMemory.h"
int32_t Sys_FreeMemory(int32_t a1, int32_t a2, int32_t a3)

{
    return (*(int32_t*)(uintptr_t)((a3 << 8) + a1 + a2));
}
