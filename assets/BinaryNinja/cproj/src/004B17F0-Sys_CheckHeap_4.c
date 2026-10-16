#include "gi_platform.h"
#include "004B17F0-Sys_CheckHeap_4.h"
int32_t Sys_CheckHeap_4(int32_t* a1, int32_t a2)

{
    int32_t objC = *a1;
    return ((int(*)())(uintptr_t)(*(objC * 0x8c + &g_9436e4)))(objC, a1, a2);
}
