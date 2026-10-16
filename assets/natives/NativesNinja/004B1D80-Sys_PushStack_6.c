#include "004B1D80-Sys_PushStack_6.h"
/* 0x004b1d80 Sys_PushStack_6 full linked: callers=1 callees=0 */
int32_t sub_4b1d80(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436fc) = a2;
    return result;
}
