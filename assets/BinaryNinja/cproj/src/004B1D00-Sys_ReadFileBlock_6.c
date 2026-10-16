#include "gi_platform.h"
#include "004B1D00-Sys_ReadFileBlock_6.h"
int32_t Sys_ReadFileBlock_6(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436e0) = a2;
    return result;
}
