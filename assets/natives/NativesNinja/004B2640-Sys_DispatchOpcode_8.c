#include "004B2640-Sys_DispatchOpcode_8.h"
/* 0x004b2640 Sys_DispatchOpcode_8 full linked: callers=1 callees=0 */
int32_t __fastcall sub_4b2640(int32_t a1)

{
    int32_t result = a1;
    int32_t ecx = g_546fbc;
    result = 0;
    int32_t ecx_1 = *((ecx << 2) + &g_a94e84);

    if (!ecx_1)
        return 0;

    ecx_1(&result);
    return result;
}
