#include "gi_platform.h"
#include "004B1730-Sys_ExecuteBytecode_4.h"
int32_t Sys_ExecuteBytecode_4(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t objC = *a1;
    return ((int(*)())(uintptr_t)(*(objC * 0x8c + &g_9436c8)))(objC, a1, a2, a3);
}
