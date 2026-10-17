// Original IGI.EXE function: Sys_FreeMemory_8 (VA 0x004B23B0; static CFG gate PASS, CFG score 0.889).
#include "Sys_FreeMemory_8.h"
int32_t Sys_FreeMemory_8(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

{
    *a1 = Sys_ReadFileBlock_3();
    int32_t* v_30;
    __builtin_memset(&v_30, 0, 0x30);
    int32_t v_18 = a4;
    int32_t v_2c = a2;
    v_30 = a1;
    int32_t v_10 = a6;
    int32_t v_24 = a3;
    int32_t v_14 = a5;
    int32_t v_c = a8;
    int32_t v_4 = a9;
    int32_t v_8 = g_943b3c;
    int32_t v_28 = a7;
    (*((g_546fa8 << 2) + &g_a94e84))(&v_30);
    return (*((g_546fb0 << 2) + &g_a94e84))(&v_30);
}
