#include "004B23B0-Sys_FreeMemory_8.h"
/* 0x004b23b0 Sys_FreeMemory_8 full linked: callers=7 callees=2 */
int32_t sub_4b23b0(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

{
    *a1 = sub_4b0f80();
    int32_t* var_30;
    __builtin_memset(&var_30, 0, 0x30);
    int32_t var_18 = a4;
    int32_t var_2c = a2;
    var_30 = a1;
    int32_t var_10 = a6;
    int32_t var_24 = a3;
    int32_t var_14 = a5;
    int32_t var_c = a8;
    int32_t var_4 = a9;
    int32_t var_8 = g_943b3c;
    int32_t var_28 = a7;
    (*((g_546fa8 << 2) + &g_a94e84))(&var_30);
    return (*((g_546fb0 << 2) + &g_a94e84))(&var_30);
}
