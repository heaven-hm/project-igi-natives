#include "gi_platform.h"
#include "004B1760-Sys_DispatchOpcode_4.h"
int32_t Sys_DispatchOpcode_4(int32_t* a1)

{
    int32_t objC = *a1;
    return ((int(*)())(uintptr_t)(*(objC * 0x8c + &g_9436d4)))(objC, a1);
}
