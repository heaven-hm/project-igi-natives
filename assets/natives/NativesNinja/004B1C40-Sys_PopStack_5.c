#include "004B1C40-Sys_PopStack_5.h"
/* 0x004b1c40 Sys_PopStack_5 full linked: callers=1 callees=0 */
int32_t sub_4b1c40(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436bc) = a2;
    return result;
}
