// IGI native provenance: Sys_DispatchOpcode_14 - 0x004B4AF0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B4AF0-Sys_DispatchOpcode_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_14.h"
int32_t Sys_DispatchOpcode_14(float context, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, int32_t param_8, int32_t param_9, int32_t param_10, int32_t param_11)

{
    long double fpu_val_7_1 = param_5 * 0.0078125f;
    float item_30 = fpu_val_7_1;
    float item_c = fpu_val_7_1;
    long double fpu_val_7_3 = param_6 * 0.0078125f;
    float item_2c = fpu_val_7_3;
    float item_8 = fpu_val_7_3;
    long double fpu_val_7_5 = param_7 * 0.0078125f;
    float item_48 = context;
    int32_t item_5c = 0;
    int32_t* item_4c = &item_48;
    float item_28 = fpu_val_7_5;
    float item_4 = fpu_val_7_5;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&item_5c, item_5c, param_10, param_11, 2,
        item_4c, item_48, param_2, param_9, 0, 0, param_8, item_30, item_2c, item_28, context + param_3, param_2 + param_4,
        param_9, 0x3f800000, 0x3f800000, param_8, item_c, item_8, item_4);
    return result;
}
