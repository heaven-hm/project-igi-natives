// IGI native provenance: Qsprite_Register4Az - 0x004B53B0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B53B0-Qsprite_Register4Az.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qsprite_Register4Az.h"
int32_t Qsprite_Register4Az(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9, float param_10, float param_11, float param_12, int32_t param_13, int32_t param_14, int32_t param_15, int32_t param_16, int32_t param_17)

// Sig: void Qsprite_Register4Az(/*14 args*/)
// Note: Registers a QUAD-SPRITE with full transform data: 14 args, float
// parameters scaled by constant 0x534AB0, writes sprite tables
// 0xA84A50/0xA84A58 (verified). Low-level renderer API - map arg layout from
// callers before use.
{
    int32_t* data_4 = context[2] + param_15 * 0x24;
    long double fpu_val_7_1 = param_10 * 0.0078125f;
    int32_t temp_3 = data_4[5];
    int32_t temp_4 = data_4[6];
    int32_t temp_5 = data_4[7];
    int32_t temp_6 = data_4[6];
    int32_t temp_7 = data_4[5];
    int32_t temp_8 = data_4[8];
    int32_t temp_9 = data_4[7];
    int32_t temp_10 = data_4[8];
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
    g_a84a50 = *data_4;
    g_a84a58 = *context;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&item_a4, item_a4, param_16, param_17, item_98,
        item_94, item_90, param_3, param_13, temp_3, temp_4, param_14, item_78, item_74, item_70, param_4, param_5,
        param_13, temp_5, temp_6, param_14, item_54, item_50, item_4c, param_6, param_7, param_13, temp_7, temp_8, param_14,
        item_30, item_2c, item_28, param_8, param_9, param_13, temp_9, temp_10, param_14, item_c, item_8, item_4);
    return result;
}
