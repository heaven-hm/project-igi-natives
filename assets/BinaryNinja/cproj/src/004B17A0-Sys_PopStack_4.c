#include "gi_platform.h"
#include "004B17A0-Sys_PopStack_4.h"
int32_t Sys_PopStack_4(int32_t* a1)

{
    int32_t objC = *a1;
    return ((int(*)())(uintptr_t)(*(objC * 0x8c + &g_9436e0)))(objC, a1);
}
