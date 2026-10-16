#include "gi_platform.h"
#include "004B1000-Sys_DispatchOpcode_3.h"
int32_t Sys_DispatchOpcode_3(int32_t a1, int32_t a2, int32_t a3)

{
    return ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(((a2 + a1 * 0x82) << 2) + &g_a950a4))))(a3);
}
