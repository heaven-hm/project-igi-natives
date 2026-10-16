#include "004B22F0-Sys_CheckHeap_7.h"
/* 0x004b22f0 Sys_CheckHeap_7 full linked: callers=10 callees=2 */
int32_t Struct_Clear36(int32_t* a1)

{
    sub_4b1000(*a1, g_546fac, a1);
    __builtin_memset(a1, 0, 0x24);
    return 0;
}
