#include "004B1D60-Sys_DispatchOpcode_6.h"
/* 0x004b1d60 Sys_DispatchOpcode_6 full linked: callers=1 callees=0 */
int32_t sub_4b1d60(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436e4) = a2;
    return result;
}
