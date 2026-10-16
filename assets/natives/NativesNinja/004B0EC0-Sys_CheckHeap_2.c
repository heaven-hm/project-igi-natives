#include "004B0EC0-Sys_CheckHeap_2.h"
/* 0x004b0ec0 Sys_CheckHeap_2 full linked: callers=61 callees=0 */
int32_t sub_4b0ec0(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t result = a2 + a1 * 0x82;
    *((result << 2) + &g_a950a4) = a3;
    return result;
}
