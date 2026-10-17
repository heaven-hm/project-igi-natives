// IGI native provenance: Sys_FreeMemory_15 - 0x004B51F0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B51F0-Sys_FreeMemory_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_15.h"
int32_t Sys_FreeMemory_15(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9, float param_10, float param_11, float param_12, int32_t param_13, int32_t param_14, int32_t param_15)

{
    int32_t item_7c = 0x3f800000;
    int32_t item_58 = 0x3f800000;
    int32_t item_34 = 0x3f800000;
    int32_t item_10 = 0x3f800000;
    int32_t* data_2 = context[2] + param_13 * 0x24;
    int32_t item_88 = 0x3f800000;
    int32_t item_64 = 0x3f800000;
    int32_t item_40 = 0x3f800000;
    int32_t item_1c = 0x3f800000;
    int32_t temp_1 = data_2[5];
    int32_t temp_2 = data_2[6];
    int32_t temp_3 = data_2[7];
    int32_t temp_4 = data_2[6];
    int32_t temp_5 = data_2[5];
    int32_t temp_6 = data_2[8];
    int32_t temp_7 = data_2[7];
    int32_t temp_8 = data_2[8];
    long double fpu_val_7_1 = param_10 * 0.0078125f;
    int32_t item_90 = param_2;
    float item_78 = fpu_val_7_1;
    float item_54 = fpu_val_7_1;
    float item_30 = fpu_val_7_1;
    float item_c = fpu_val_7_1;
    long double fpu_val_7_3 = param_11 * 0.0078125f;
    float item_74 = fpu_val_7_3;
    float item_50 = fpu_val_7_3;
    float item_2c = fpu_val_7_3;
    float item_8 = fpu_val_7_3;
    long double fpu_val_7_5 = param_12 * 0.0078125f;
    int32_t* item_94 = &item_90;
    float item_70 = fpu_val_7_5;
    float item_4c = fpu_val_7_5;
    float item_28 = fpu_val_7_5;
    float item_4 = fpu_val_7_5;
    int32_t item_a4 = 0;
    int32_t item_98 = 4;
    g_a84a50 = *data_2;
    int32_t data_4 = g_a84a54;
    g_a84a58 = *context;
    int32_t result = (*((data_4 << 2) + &g_a94e84))(&item_a4, item_a4, param_14, param_15, item_98,
        item_94, item_90, param_3, item_88, temp_1, temp_2, item_7c, item_78, item_74, item_70, param_4, param_5,
        item_64, temp_3, temp_4, item_58, item_54, item_50, item_4c, param_6, param_7, item_40, temp_5, temp_6,
        item_34, item_30, item_2c, item_28, param_8, param_9, item_1c, temp_7, temp_8, item_10, item_c, item_8,
        item_4);
    return result;
}
