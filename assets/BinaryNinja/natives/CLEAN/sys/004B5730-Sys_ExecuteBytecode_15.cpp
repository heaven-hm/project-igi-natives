// IGI native provenance: Sys_ExecuteBytecode_15 - 0x004B5730 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B5730-Sys_ExecuteBytecode_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_15.h"
int32_t Sys_ExecuteBytecode_15(float context, float param_2, int32_t param_3, float param_4, float param_5, int32_t param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, int32_t param_13, int32_t param_14, int32_t param_15)

{
    float item_30 = param_7 * 0.0078125f;
    float item_2c = param_8 * 0.0078125f;
    int32_t temp_2 = g_a84a54;
    float item_48;
    int32_t* item_4c = &item_48;
    float item_28 = param_9 * 0.0078125f;
    int32_t item_3c = 0;
    int32_t item_38 = 0;
    int32_t item_18 = 0;
    int32_t item_14 = 0;
    int32_t item_5c = 1;
    int32_t item_50 = 2;
    item_48 = context - 0.5f;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((temp_2 << 2) + &g_a94e84))(&item_5c, item_5c, param_14, param_15, item_50,
        item_4c, item_48, param_2 - 0.5f, param_3, item_3c, item_38, param_13, item_30, item_2c, item_28,
        param_4 - 0.5f, param_5 - 0.5f, param_6, item_18, item_14, param_13, param_10 * 0.0078125f,
        param_11 * 0.0078125f, param_12 * 0.0078125f);
    return result;
}
