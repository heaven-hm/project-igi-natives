#include "004B0D10-Sys_ExecuteBytecode_2.h"
/* 0x004b0d10 Sys_ExecuteBytecode_2 full linked: callers=214 callees=2 */
int32_t sub_4b0d10(void* a1)

{
    int32_t* eax = a1 - 4;
    eax &= 0xfc;
    g_942300 -= 1;
    int32_t* esi = *eax;
    int32_t* var_c = esi;
    return sub_4a6a50(sub_4af960(esi));
}
