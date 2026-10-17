// Original IGI.EXE function: Sys_AllocateMemory_15 (VA 0x004B50B0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_AllocateMemory_15.h"
int32_t Sys_AllocateMemory_15(int32_t* context, float param_2, float param_3, float param_4, float param_5, float param_6, int32_t param_7, int32_t param_8, int32_t param_9, int32_t param_10, int32_t param_11)

{
    long double fpu_val_7_1 = param_4 * 0.0078125f;
    int32_t* data_4 = context[2] + param_9 * 0x24;
    int32_t temp_2 = data_4[5];
    int32_t temp_3 = data_4[6];
    int32_t temp_4 = data_4[7];
    int32_t temp_5 = data_4[8];
    float item_30 = fpu_val_7_1;
    float item_c = fpu_val_7_1;
    long double fpu_val_7_3 = param_5 * 0.0078125f;
    float item_2c = fpu_val_7_3;
    float item_8 = fpu_val_7_3;
    long double fpu_val_7_5 = param_6 * 0.0078125f;
    float item_28 = fpu_val_7_5;
    float item_4 = fpu_val_7_5;
    float item_48 = data_4[2] + param_2;
    float item_44 = *(data_4 + 0xa) + param_3;
    float item_24 = data_4[3] + data_4[2] + param_2;
    long double fpu_val_7_14 = *(data_4 + 0xe) + *(data_4 + 0xa);
    float* item_4c = &item_48;
    int32_t item_5c = 0;
    int32_t item_50 = 2;
    float item_20 = fpu_val_7_14 + param_3;
    g_a84a50 = *data_4;
    int32_t data_6 = g_a84a54;
    g_a84a58 = *context;
    return (*((data_6 << 2) + &g_a94e84))(&item_5c, item_5c, param_10, param_11, item_50, item_4c, item_48,
        item_44, param_8, temp_2, temp_3, param_7, item_30, item_2c, item_28, item_24, item_20, param_8, temp_4,
        temp_5, param_7, item_c, item_8, item_4);
}
