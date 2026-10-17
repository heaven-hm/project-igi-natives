// IGI native provenance: Script_FormatString_29 - 0x004FC8E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FC8E0-Script_FormatString_29.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_29.h"
float Script_FormatString_29(float context, float* param_2, float param_3, float* param_4, float param_5, float param_6 ) {
    float source_val = context;
    float data_val = *(source_val + 4);
    float item_28;
    Sys_PushStack_12(&item_28, *(source_val + 0xc), *(source_val + 0x10), *(source_val + 0x14));
    float* temp_1 = param_3;
    long double fpu_val_7_2 = param_4[1] * temp_1[2] - temp_1[1] * param_4[2];
    long double fpu_val_6_5 = -((*param_4 * temp_1[2] - *temp_1 * param_4[2]));
    long double fpu_val_5_4 = temp_1[1] * *param_4 - *temp_1 * param_4[1];
    float item_34 = fpu_val_7_2 * *param_2 + fpu_val_5_4 * param_2[6] + fpu_val_6_5 * param_2[3];
    float item_30 = fpu_val_7_2 * param_2[1] + fpu_val_5_4 * param_2[7] + fpu_val_6_5 * param_2[4];
    long double fpu_val_7_6 = fpu_val_7_2 * param_2[2] + fpu_val_5_4 * param_2[8] + fpu_val_6_5 * param_2[5];
    float item_24;
    float item_20;
    float item_40 = item_20 * fpu_val_7_6 + item_24 * item_30 + item_28 * item_34;
    float item_1c;
    float item_18;
    float item_14;
    float item_3c = item_14 * fpu_val_7_6 + item_18 * item_30 + item_1c * item_34;
    float item_10;
    float item_c;
    float item_8;
    long double fpu_val_7_9 = fpu_val_7_6 * item_8 + item_c * item_30 + item_10 * item_34;
    float item_34_1 = item_3c * param_2[1] + item_40 * *param_2 + fpu_val_7_9 * param_2[2];
    float item_30_1 = item_3c * param_2[4] + item_40 * param_2[3] + fpu_val_7_9 * param_2[5];
    long double fpu_val_7_11 = item_3c * param_2[7] + item_40 * param_2[6] + fpu_val_7_9 * param_2[8];
    long double fpu_val_5_37 = -((item_34_1 * param_4[2] - fpu_val_7_11 * *param_4)) * temp_1[1]
        + (item_30_1 * param_4[2] - fpu_val_7_11 * param_4[1]) * *temp_1;
    long double fpu_val_7_16 = -(((param_6 + 1.0f) * param_5))
        / (fpu_val_5_37 + (item_34_1 * param_4[1] - item_30_1 * *param_4) * temp_1[2] + data_val);
    float item_40_3 = *temp_1 * fpu_val_7_16;
    float item_3c_2 = temp_1[1] * fpu_val_7_16;
    float item_38_1 = temp_1[2] * fpu_val_7_16;
    long double fpu_val_7_20 = item_38_1 * param_4[1] - item_3c_2 * param_4[2];
    long double fpu_val_6_56 = -((item_38_1 * *param_4 - item_40_3 * param_4[2]));
    long double fpu_val_5_44 = item_3c_2 * *param_4 - item_40_3 * param_4[1];
    float item_30_2 = fpu_val_5_44 * param_2[7] + fpu_val_6_56 * param_2[4] + fpu_val_7_20 * param_2[1];
    long double fpu_val_7_24 = fpu_val_7_20 * param_2[2] + fpu_val_5_44 * param_2[8] + fpu_val_6_56 * param_2[5];
    long double fpu_val_6_59 =
        fpu_val_5_44 * param_2[6] + fpu_val_6_56 * param_2[3] + fpu_val_7_20 * *param_2 + *(source_val + 0x30);
    param_3 = fpu_val_6_59;
    *(source_val + 0x30) = fpu_val_6_59;
    long double fpu_val_6_61 = item_30_2 + *(source_val + 0x34);
    context = fpu_val_6_61;
    *(source_val + 0x34) = fpu_val_6_61;
    long double fpu_val_7_25 = fpu_val_7_24 + *(source_val + 0x38);
    *(source_val + 0x38) = fpu_val_7_25;
    *(source_val + 0x48) = fpu_val_7_25 * item_20 + context * item_24 + param_3 * item_28;
    *(source_val + 0x4c) = fpu_val_7_25 * item_14 + context * item_18 + param_3 * item_1c;
    *(source_val + 0x50) = fpu_val_7_25 * item_8 + context * item_c + param_3 * item_10;
    long double fpu_val_7_36 =
        param_2[4] * *(source_val + 0x4c) + *(source_val + 0x50) * param_2[5] + *(source_val + 0x48) * param_2[3];
    long double fpu_val_7_39 = param_2[7] * *(source_val + 0x4c) + *(source_val + 0x50) * param_2[8];
    long double fpu_val_6_85 = *(source_val + 0x48) * param_2[6];
    *(source_val + 0x48) = param_2[1] * *(source_val + 0x4c) + *param_2 * *(source_val + 0x48) + param_2[2] * *(source_val + 0x50);
    *(source_val + 0x4c) = fpu_val_7_36;
    long double fpu_val_7_42 = item_40_3 * *(source_val + 4);
    long double fpu_val_6_87 = item_3c_2 * *(source_val + 4);
    *(source_val + 0x50) = fpu_val_7_39 + fpu_val_6_85;
    float item_34_5 = item_40_3;
    float item_2c_3 = item_38_1 * *(source_val + 4);
    float entity_5 = *(source_val + 0x20);
    long double fpu_val_7_45 = *(source_val + 0x1c) + fpu_val_6_87;
    *(source_val + 0x18) = *(source_val + 0x18) + fpu_val_7_42;
    *(source_val + 0x1c) = fpu_val_7_45;
    *(source_val + 0x20) = entity_5 + item_2c_3;
    return SoundSys_InitSoundSys_17(source_val);
}
