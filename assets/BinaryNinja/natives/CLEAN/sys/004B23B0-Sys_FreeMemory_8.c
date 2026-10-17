// IGI native provenance: Sys_FreeMemory_8 - 0x004B23B0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B23B0-Sys_FreeMemory_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_8.h"
int32_t Sys_FreeMemory_8(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9)

{
    *context = Sys_ReadFileBlock_3();
    int32_t* item_30;
    memset(&item_30, 0, 0x30);
    int32_t item_18 = param_4;
    int32_t item_2c = param_2;
    item_30 = context;
    int32_t item_10 = param_6;
    int32_t item_24 = param_3;
    int32_t item_14 = param_5;
    int32_t item_c = param_8;
    int32_t item_4 = param_9;
    int32_t item_8 = g_943b3c;
    int32_t item_28 = param_7;
    (*((g_546fa8 << 2) + &g_a94e84))(&item_30);
    return (*((g_546fb0 << 2) + &g_a94e84))(&item_30);
}
