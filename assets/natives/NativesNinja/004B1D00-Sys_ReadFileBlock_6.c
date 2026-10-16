#include "004B1D00-Sys_ReadFileBlock_6.h"
/* 0x004b1d00 Sys_ReadFileBlock_6 full linked: callers=1 callees=0 */
int32_t sub_4b1d00(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436e0) = a2;
    return result;
}
