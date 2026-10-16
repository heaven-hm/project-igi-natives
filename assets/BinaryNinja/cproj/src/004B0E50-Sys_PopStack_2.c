#include "gi_platform.h"
#include "004B0E50-Sys_PopStack_2.h"
int32_t Sys_PopStack_2(int32_t a1)

{
    (*(int32_t*)(uintptr_t)(a1 * 0x208 + &g_a952a4)) = 0;
    return a1;
}
