// IGI native provenance: Sys_PushStack_14 - 0x004B4BE0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B4BE0-Sys_PushStack_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_14.h"
int32_t Sys_PushStack_14(float context, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15, float param_16, int32_t param_17, int32_t param_18, int32_t param_19, int32_t param_20, int32_t param_21, int32_t param_22, int32_t param_23)

{
    float item_78 = param_5 * 0.0078125f;
    float item_54 = param_8 * 0.0078125f;
    float item_30 = param_11 * 0.0078125f;
    float item_90 = context;
    float item_c = param_14 * 0.0078125f;
    int32_t item_84 = 0;
    int32_t item_80 = 0;
    int32_t item_60 = 0x3f800000;
    int32_t item_5c = 0;
    int32_t item_3c = 0;
    int32_t item_38 = 0x3f800000;
    float item_74 = param_6 * 0.0078125f;
    int32_t item_18 = 0x3f800000;
    int32_t item_14 = 0x3f800000;
    int32_t* item_94 = &item_90;
    float item_50 = param_9 * 0.0078125f;
    float item_2c = param_12 * 0.0078125f;
    float item_8 = param_15 * 0.0078125f;
    float item_70 = param_7 * 0.0078125f;
    float item_4c = param_10 * 0.0078125f;
    float item_28 = param_13 * 0.0078125f;
    float item_4 = param_16 * 0.0078125f;
    long double fpu_val_7_25 = context + param_3;
    float item_6c = fpu_val_7_25;
    long double fpu_val_6_1 = param_2 + param_4;
    float item_a8 = fpu_val_6_1;
    float item_44 = fpu_val_6_1;
    float item_24 = fpu_val_7_25;
    int32_t item_a4 = 0;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&item_a4, item_a8, item_a4, param_22, param_23,
        4, item_94, item_90, param_2, param_21, item_84, item_80, param_17, item_78, item_74, item_70, item_6c,
        param_2, param_21, item_60, item_5c, param_18, item_54, item_50, item_4c, context, item_44, param_21, item_3c,
        item_38, param_19, item_30, item_2c, item_28, item_24, item_a8, param_21, item_18, item_14, param_20, item_c,
        item_8, item_4);
    return result;
}
