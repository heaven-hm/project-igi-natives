#include "004B2610-Sys_ExecuteBytecode_8.h"
/* 0x004b2610 Sys_ExecuteBytecode_8 full linked: callers=12 callees=0 */
int32_t sub_4b2610(int32_t a1)

{
    int32_t ecx = g_546fb8;
    a1 = a1;
    int32_t result = *((ecx << 2) + &g_a94e84);

    if (result)
        result = result(&a1);

    return result;
}
