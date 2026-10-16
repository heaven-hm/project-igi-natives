#include "004B17F0-Sys_CheckHeap_4.h"
/* 0x004b17f0 Sys_CheckHeap_4 full linked: callers=1 callees=0 */
int32_t sub_4b17f0(int32_t* a1, int32_t a2)

{
    int32_t ecx = *a1;
    return (*(ecx * 0x8c + &g_9436e4))(ecx, a1, a2);
}
