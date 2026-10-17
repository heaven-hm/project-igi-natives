// Original IGI.EXE function: Script_ParseEnumInt32_23 (VA 0x004F93B0; static CFG gate FAIL, CFG score 0.667).
#include "Script_ParseEnumInt32_23.h"
int32_t Script_ParseEnumInt32_23(void* context, double* param_2)

{
    char data_val = *(context + 0x64);

    if (!data_val)
    {
        memcpy(context + 0x20, param_2, 0x18);
        return data_val;
    }

    void* data_1 = *(context + 0x14);
    long double fpu_val_7_1 = *param_2 - *(data_1 + 0x20);
    long double fpu_val_6_1 = param_2[1] - *(data_1 + 0x28);
    long double fpu_val_5_1 = param_2[2] - *(data_1 + 0x30);
    double item_18 =
        *(data_1 + 0x88) * fpu_val_5_1 + *(data_1 + 0x7c) * fpu_val_6_1 + *(data_1 + 0x70) * fpu_val_7_1;
    double item_10 =
        *(data_1 + 0x8c) * fpu_val_5_1 + *(data_1 + 0x80) * fpu_val_6_1 + *(data_1 + 0x74) * fpu_val_7_1;
    double item_8 =
        *(data_1 + 0x90) * fpu_val_5_1 + *(data_1 + 0x84) * fpu_val_6_1 + *(data_1 + 0x78) * fpu_val_7_1;
    memcpy(context + 0x20, &item_18, 0x18);
    return data_1;
}
