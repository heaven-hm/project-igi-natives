// IGI native provenance: Sys_ReadFileBlock_12 - 0x004B38E0 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B38E0-Sys_ReadFileBlock_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_12.h"
int32_t Sys_ReadFileBlock_12(float* context, float param_2, float param_3, float param_4)

{
    Sys_DispatchOpcode_12(context, param_4);
    float item_50;
    Sys_ExecuteBytecode_12(&item_50, param_3);
    float item_44;
    float item_38;
    float item_28 = item_50 * *context + item_38 * context[2] + item_44 * context[1];
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_4c * *context + item_34 * context[2] + item_40 * context[1];
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_48 * *context + item_30 * context[2] + item_3c * context[1];
    float item_1c = item_50 * context[3] + item_38 * context[5] + item_44 * context[4];
    float item_18 = item_4c * context[3] + item_34 * context[5] + item_40 * context[4];
    float item_14 = item_48 * context[3] + item_30 * context[5] + item_3c * context[4];
    float item_10 = item_50 * context[6] + item_38 * context[8] + item_44 * context[7];
    int32_t result;
    int32_t item_4 = result + context[9] + 1;
    float item_c = item_4c * context[6] + item_34 * context[8] + item_40 * context[7];
    float item_8 = item_48 * context[6] + item_30 * context[8] + item_3c * context[7];
    memcpy(context, &item_28, 0x28);
    Sys_CloseFileStream_12(&item_50, param_2);
    item_28 = item_50 * *context + item_38 * context[2] + item_44 * context[1];
    float item_24_1 = item_4c * *context + item_34 * context[2] + item_40 * context[1];
    float item_20_1 = item_48 * *context + item_30 * context[2] + item_3c * context[1];
    float item_1c_1 = item_50 * context[3] + item_38 * context[5] + item_44 * context[4];
    int32_t item_4_1 = result + context[9] + 1;
    float item_18_1 = item_4c * context[3] + item_34 * context[5] + item_40 * context[4];
    float item_14_1 = item_48 * context[3] + item_30 * context[5] + item_3c * context[4];
    float item_10_1 = item_50 * context[6] + item_38 * context[8] + item_44 * context[7];
    float item_c_1 = item_4c * context[6] + item_34 * context[8] + item_40 * context[7];
    float item_8_1 = item_48 * context[6] + item_30 * context[8] + item_3c * context[7];
    memcpy(context, &item_28, 0x28);
    context[9] = 0;
    return result;
}
