#include "gi_platform.h"
#include "004B64F0-Sys_AllocateMemory_17.h"
int32_t Sys_AllocateMemory_17(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

{
    return Sys_FreeMemory_8(a1[1] + a2 * 0x24, *a1, a4, a5, a6, a7, a8, a9, a3);
}
