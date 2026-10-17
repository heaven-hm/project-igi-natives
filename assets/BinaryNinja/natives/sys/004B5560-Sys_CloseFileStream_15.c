// IGI native provenance: Sys_CloseFileStream_15 - 0x004B5560 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B5560-Sys_CloseFileStream_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_15.h"
int32_t Sys_CloseFileStream_15(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9, int32_t param_10, int32_t param_11, int32_t param_12, int32_t param_13, int32_t param_14, int32_t param_15, int32_t param_16, int32_t param_17, float param_18, float param_19, float param_20, int32_t param_21, int32_t param_22, int32_t param_23, int32_t param_24, int32_t a25)

{
    int32_t item_a4 = 0;
    long double fpu_val_7_1 = param_18 * 0.0078125f;
    float item_78 = fpu_val_7_1;
    float item_54 = fpu_val_7_1;
    float item_30 = fpu_val_7_1;
    float item_c = fpu_val_7_1;
    long double fpu_val_7_3 = param_19 * 0.0078125f;
    float item_74 = fpu_val_7_3;
    float item_50 = fpu_val_7_3;
    float item_2c = fpu_val_7_3;
    float item_8 = fpu_val_7_3;
    int32_t item_90 = param_2;
    long double fpu_val_7_5 = param_20 * 0.0078125f;
    int32_t* item_94 = &item_90;
    float item_70 = fpu_val_7_5;
    float item_4c = fpu_val_7_5;
    float item_28 = fpu_val_7_5;
    float item_4 = fpu_val_7_5;
    int32_t item_98 = 4;
    g_a84a50 = *(context[2] + param_23 * 0x24);
    g_a84a58 = *context;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&item_a4, item_a4, param_24, a25, item_98,
        item_94, item_90, param_3, param_21, param_10, param_11, param_22, item_78, item_74, item_70, param_4, param_5,
        param_21, param_12, param_13, param_22, item_54, item_50, item_4c, param_6, param_7, param_21, param_14, param_15, param_22,
        item_30, item_2c, item_28, param_8, param_9, param_21, param_16, param_17, param_22, item_c, item_8, item_4);
    return result;
}
