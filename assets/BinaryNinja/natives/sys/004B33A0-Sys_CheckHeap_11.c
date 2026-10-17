// Original IGI.EXE function: Sys_CheckHeap_11 (VA 0x004B33A0; static CFG gate FAIL, CFG score 0.833).
#include "Sys_CheckHeap_11.h"
int32_t Sys_CheckHeap_11(int32_t context, float* param_2, float param_3, float param_4, float param_5)

{
    float item_50;
    Sys_ReadFileBlock_12(&item_50, param_3, param_4, param_5);
    float item_4c;
    float item_48;
    float item_28 = item_50 * *param_2 + item_48 * param_2[6] + item_4c * param_2[3];
    float item_24 = item_50 * param_2[1] + item_48 * param_2[7] + item_4c * param_2[4];
    float item_20 = item_50 * param_2[2] + item_48 * param_2[8] + item_4c * param_2[5];
    float item_44;
    float item_40;
    float item_3c;
    float item_1c = item_44 * *param_2 + item_3c * param_2[6] + item_40 * param_2[3];
    float item_18 = item_44 * param_2[1] + item_3c * param_2[7] + item_40 * param_2[4];
    float item_14 = item_44 * param_2[2] + item_3c * param_2[8] + item_40 * param_2[5];
    float item_38;
    float item_34;
    float item_30;
    float item_10 = item_38 * *param_2 + item_30 * param_2[6] + item_34 * param_2[3];
    float item_c = item_38 * param_2[1] + item_30 * param_2[7] + item_34 * param_2[4];
    int32_t item_2c;
    int32_t result = param_2[9] + item_2c + 1;
    int32_t result_1 = result;
    float item_8 = item_38 * param_2[2] + item_30 * param_2[8] + item_34 * param_2[5];
    memcpy(context, &item_28, 0x28);
    return result;
}
