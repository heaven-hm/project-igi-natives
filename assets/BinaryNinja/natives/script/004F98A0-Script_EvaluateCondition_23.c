// IGI native provenance: Script_EvaluateCondition_23 - 0x004F98A0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F98A0-Script_EvaluateCondition_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_EvaluateCondition_23.h"
void* Script_EvaluateCondition_23(float* context, void* param_2, char param_3)

{
    float* dest_val;

    if (!param_3)
    {
        dest_val = context;
        *dest_val = 1.0f;
        dest_val[1] = 0;
        dest_val[2] = 0;
        dest_val[3] = 0;
        dest_val[4] = 0x3f800000;
        dest_val[5] = 0;
        dest_val[6] = 0;
        dest_val[7] = 0;
        dest_val[8] = 0x3f800000;
        dest_val[9] = 0;
    }
    else
    {
        dest_val = context;
        Sys_DispatchOpcode_12(dest_val, *(param_2 + 0x20));
    }

    void* result = *(param_2 + 0x134);

    if (*(result + 0x64))
    {
        void* data_1 = *(result + 0x14);
        float item_28 = *dest_val * *(data_1 + 0x70) + dest_val[2] * *(data_1 + 0x88) + *(data_1 + 0x7c) * dest_val[1];
        float item_24_1 =
            *dest_val * *(data_1 + 0x74) + *(data_1 + 0x8c) * dest_val[2] + *(data_1 + 0x80) * dest_val[1];
        float item_20_1 =
            dest_val[2] * *(data_1 + 0x90) + *(data_1 + 0x78) * *dest_val + *(data_1 + 0x84) * dest_val[1];
        float item_1c_1 =
            *(data_1 + 0x88) * dest_val[5] + dest_val[4] * *(data_1 + 0x7c) + dest_val[3] * *(data_1 + 0x70);
        float item_18_1 =
            *(data_1 + 0x8c) * dest_val[5] + *(data_1 + 0x80) * dest_val[4] + dest_val[3] * *(data_1 + 0x74);
        float item_14_1 =
            dest_val[4] * *(data_1 + 0x84) + *(data_1 + 0x78) * dest_val[3] + *(data_1 + 0x90) * dest_val[5];
        float item_10_1 =
            dest_val[6] * *(data_1 + 0x70) + dest_val[8] * *(data_1 + 0x88) + *(data_1 + 0x7c) * dest_val[7];
        float item_c_1 =
            dest_val[6] * *(data_1 + 0x74) + *(data_1 + 0x8c) * dest_val[8] + *(data_1 + 0x80) * dest_val[7];
        result = *(data_1 + 0x94) + dest_val[9] + 1;
        void* result_1 = result;
        float item_8_1 =
            dest_val[8] * *(data_1 + 0x90) + *(data_1 + 0x78) * dest_val[6] + *(data_1 + 0x84) * dest_val[7];
        memcpy(dest_val, &item_28, 0x28);
    }

    return result;
}
