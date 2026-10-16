#include "gi_platform.h"
#include "004B1780-Sys_PushStack_4.h"
int32_t Sys_PushStack_4(int32_t* a1)

{
    int32_t objC = *a1;
    return ((int(*)())(uintptr_t)(*(objC * 0x8c + &g_9436d0)))(objC, a1);
}
