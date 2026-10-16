#include "gi_platform.h"
#include "004B1D60-Sys_DispatchOpcode_6.h"
int32_t Sys_DispatchOpcode_6(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436e4) = a2;
    return result;
}
