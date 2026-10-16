#include "gi_platform.h"
#include "004B1BE0-Sys_ExecuteBytecode_5.h"
int32_t Sys_ExecuteBytecode_5(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436b0) = a2;
    return result;
}
