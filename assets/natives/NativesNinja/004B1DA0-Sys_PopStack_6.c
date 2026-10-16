#include "004B1DA0-Sys_PopStack_6.h"
/* 0x004b1da0 Sys_PopStack_6 full linked: callers=1 callees=0 */
int32_t sub_4b1da0(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436ec) = a2;
    return result;
}
