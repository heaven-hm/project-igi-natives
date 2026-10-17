// Original IGI.EXE function: Sys_FreeMemory_12 (VA 0x004B3640; static CFG gate FAIL, CFG score 0.833).
#include "Sys_FreeMemory_12.h"
int32_t Sys_FreeMemory_12(int32_t context, float* param_2, float param_3)

{
    float item_50;
    Sys_ExecuteBytecode_12(&item_50, param_3);
    float item_44;
    float item_38;
    float item_28 = item_50 * *param_2 + item_38 * param_2[2] + item_44 * param_2[1];
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_4c * *param_2 + item_34 * param_2[2] + item_40 * param_2[1];
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_48 * *param_2 + item_30 * param_2[2] + item_3c * param_2[1];
    float item_1c = item_50 * param_2[3] + item_38 * param_2[5] + item_44 * param_2[4];
    float item_18 = item_4c * param_2[3] + item_34 * param_2[5] + item_40 * param_2[4];
    float item_14 = item_48 * param_2[3] + item_30 * param_2[5] + item_3c * param_2[4];
    float item_10 = item_50 * param_2[6] + item_38 * param_2[8] + item_44 * param_2[7];
    float item_c = item_4c * param_2[6] + item_34 * param_2[8] + item_40 * param_2[7];
    int32_t result;
    int32_t item_4 = param_2[9] + result + 1;
    float item_8 = item_48 * param_2[6] + item_30 * param_2[8] + item_3c * param_2[7];
    memcpy(context, &item_28, 0x28);
    return result;
}
