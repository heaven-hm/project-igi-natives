#include "004B7CF0-Sys_PushStack_21.h"
/* 0x004b7cf0 Sys_PushStack_21 full linked: callers=8 callees=1 */
int32_t sub_4b7cf0(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t eax = sub_4b0f80();
    int32_t* var_c = a1;
    *a1 = eax;
    return (*((g_a84a48 << 2) + &g_a94e84))(&var_c, var_c, a3, a2);
}
