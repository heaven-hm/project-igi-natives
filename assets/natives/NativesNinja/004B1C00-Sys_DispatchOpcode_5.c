#include "004B1C00-Sys_DispatchOpcode_5.h"
/* 0x004b1c00 Sys_DispatchOpcode_5 full linked: callers=1 callees=0 */
int32_t sub_4b1c00(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436b4) = a2;
    return result;
}
