// IGI native provenance: Sys_ResolveSymbol_14 - 0x004B4E00 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B4E00-Sys_ResolveSymbol_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_14.h"
int32_t Sys_ResolveSymbol_14(int32_t* context, int32_t param_2, float param_3, float param_4, float param_5, float param_6, int32_t param_7, int32_t param_8, int32_t param_9)

{
    long double fpu_val_7_1 = param_4 * 0.0078125f;
    int32_t* data_2 = context[2] + param_7 * 0x24;
    int32_t item_34 = 0x3f800000;
    int32_t item_10 = 0x3f800000;
    int32_t item_40 = 0x3f800000;
    int32_t item_1c = 0x3f800000;
    int32_t temp_1 = data_2[5];
    int32_t temp_2 = data_2[6];
    int32_t temp_3 = data_2[7];
    int32_t temp_4 = data_2[8];
    float item_30 = fpu_val_7_1;
    float item_c = fpu_val_7_1;
    long double fpu_val_7_3 = param_5 * 0.0078125f;
    float item_2c = fpu_val_7_3;
    float item_8 = fpu_val_7_3;
    long double fpu_val_7_5 = param_6 * 0.0078125f;
    float item_28 = fpu_val_7_5;
    float item_4 = fpu_val_7_5;
    float item_48 = data_2[2] + param_2;
    float item_44 = *(data_2 + 0xa) + param_3;
    float item_24 = data_2[3] + data_2[2] + param_2;
    long double fpu_val_7_14 = *(data_2 + 0xe) + *(data_2 + 0xa);
    float* item_4c = &item_48;
    int32_t item_5c = 0;
    int32_t item_50 = 2;
    float item_20 = fpu_val_7_14 + param_3;
    g_a84a50 = *data_2;
    int32_t data_4 = g_a84a54;
    g_a84a58 = *context;
    return (*((data_4 << 2) + &g_a94e84))(&item_5c, item_5c, param_8, param_9, item_50, item_4c, item_48,
        item_44, item_40, temp_1, temp_2, item_34, item_30, item_2c, item_28, item_24, item_20, item_1c,
        temp_3, temp_4, item_10, item_c, item_8, item_4);
}
