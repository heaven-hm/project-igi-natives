#include "gi_platform.h"
#include "004BD3D0-Sys_AllocateMemory_29.h"
int32_t Sys_AllocateMemory_29(int32_t a1, int32_t a2, int32_t a3)

{
    (*(int32_t*)(uintptr_t)(((a2 + a1 * 6) << 2) + &g_a96108)) = a3;
    return a3;
}
