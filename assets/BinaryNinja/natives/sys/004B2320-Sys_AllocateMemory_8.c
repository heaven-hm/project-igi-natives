// Original IGI.EXE function: Sys_AllocateMemory_8 (VA 0x004B2320; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_8.h"
int32_t Sys_AllocateMemory_8(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8)

{
    *context = Sys_ReadFileBlock_3();
    int32_t* item_30;
    memset(&item_30, 0, 0x30);
    int32_t item_2c = param_2;
    item_30 = context;
    int32_t item_24 = param_3;
    int32_t item_14 = param_5;
    int32_t item_18 = param_4;
    int32_t item_c = param_8;
    int32_t item_10 = param_6;
    int32_t item_8 = g_943b3c;
    int32_t item_4 = 0;
    int32_t item_28 = param_7;
    return (*((g_546fa8 << 2) + &g_a94e84))(&item_30);
}
