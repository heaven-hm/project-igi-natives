#include "004B2670-Sys_PushStack_8.h"
/* 0x004b2670 Sys_PushStack_8 full linked: callers=8 callees=0 */
int32_t __fastcall sub_4b2670(int32_t a1)

{
    int32_t result = a1;
    int32_t ecx = g_546fb4;
    result = 1;
    int32_t ecx_1 = *((ecx << 2) + &g_a94e84);

    if (!ecx_1)
        return 1;

    ecx_1(&result);
    return result;
}
