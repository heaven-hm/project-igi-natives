// IGI native provenance: Sys_OpenFileStream_8 - 0x004B2450 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B2450-Sys_OpenFileStream_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_8.h"
int32_t Sys_OpenFileStream_8(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7)

{
    int32_t item_30 = context;
    int32_t item_14 = param_5;
    int32_t item_18 = param_4;
    int32_t item_4 = param_7;
    int32_t item_10 = param_6;
    int32_t item_c = 0;
    int32_t item_8 = g_943b3c;
    return (*((g_546fb0 << 2) + &g_a94e84))(&item_30, item_30, param_2, 0, param_3);
}
