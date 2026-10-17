// IGI native provenance: AI_CheckVisibility_4 - 0x00452930 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00452930-AI_CheckVisibility_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility_4.h"
float* AI_CheckVisibility_4(long double context , int32_t param_2, float* param_3, float param_4, double* param_5, float param_6)

{
    float item_78 = param_4;
    param_6 = param_6 * 30.0f;
    double item_68;
    AI_UpdatePatrol_3(&item_68, item_78);
    long double fpu_val_7_3 = item_68 - *param_5;
    item_68 = fpu_val_7_3;
    double item_60;
    long double fpu_val_6_1 = item_60 - param_5[1];
    double item_60_1 = fpu_val_6_1;
    double item_58;
    long double fpu_val_5_1 = item_58 - param_5[2];
    double item_58_1 = fpu_val_5_1;
    double item_50 =
        *(param_4 + 0x50) * fpu_val_7_3 + *(param_4 + 0x5c) * fpu_val_6_1 + *(param_4 + 0x68) * fpu_val_5_1;
    double item_48 =
        *(param_4 + 0x60) * fpu_val_6_1 + *(param_4 + 0x6c) * fpu_val_5_1 + *(param_4 + 0x54) * fpu_val_7_3;
    double item_40 =
        *(param_4 + 0x64) * fpu_val_6_1 + *(param_4 + 0x70) * fpu_val_5_1 + *(param_4 + 0x58) * fpu_val_7_3;
    void item_8c;
    memcpy(&item_8c, &item_50, 0x18);
    WeaponType_InitType();
    float item_28;
    Sys_CloseFileStream_12(&item_28, context);
    float item_1c;
    float item_10;
    item_50 = item_28 * *(param_4 + 0x50) + item_10 * *(param_4 + 0x58) + item_1c * *(param_4 + 0x54);
    int32_t data_1 = *(param_4 + 0x74);
    float item_24;
    float item_18;
    float item_c;
    *(&item_50 + 4) = item_24 * *(param_4 + 0x50) + item_c * *(param_4 + 0x58) + item_18 * *(param_4 + 0x54);
    int32_t item_4;
    int32_t item_2c = data_1 + item_4 + 1;
    float item_20;
    float item_14;
    float item_8;
    item_48 = item_20 * *(param_4 + 0x50) + item_8 * *(param_4 + 0x58) + item_14 * *(param_4 + 0x54);
    *(&item_48 + 4) = item_10 * *(param_4 + 0x64) + item_1c * *(param_4 + 0x60) + item_28 * *(param_4 + 0x5c);
    item_40 = item_c * *(param_4 + 0x64) + item_18 * *(param_4 + 0x60) + item_24 * *(param_4 + 0x5c);
    *(&item_40 + 4) = item_8 * *(param_4 + 0x64) + item_14 * *(param_4 + 0x60) + item_20 * *(param_4 + 0x5c);
    float item_38 = item_10 * *(param_4 + 0x70) + item_1c * *(param_4 + 0x6c) + item_28 * *(param_4 + 0x68);
    float item_34 = item_c * *(param_4 + 0x70) + item_18 * *(param_4 + 0x6c) + item_24 * *(param_4 + 0x68);
    float item_30 = item_8 * *(param_4 + 0x70) + item_14 * *(param_4 + 0x6c) + item_20 * *(param_4 + 0x68);
    memcpy(param_2, &item_50, 0x28);
    double item_60_2 = item_60_1 * 1.1000000000000001;
    double item_58_2 = item_58_1 * 1.1000000000000001;
    *param_3 = item_68 * 1.1000000000000001 / param_6;
    param_3[1] = item_60_2 / param_6;
    param_3[2] = item_58_2 / param_6 + param_6 * 22.300444444444445;
    return param_3;
}
