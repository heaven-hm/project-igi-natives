// Original IGI.EXE function: Script_CallNativeHandler_23 (VA 0x004F9770; static CFG gate FAIL, CFG score 0.667).
#include "Script_CallNativeHandler_23.h"
double* Script_CallNativeHandler_23(double* context, void* param_2)

{
    void* data_val = *(param_2 + 0x134);

    if (!*(data_val + 0x64))
    {
        memcpy(context, param_2 + 8, 0x18);
        *context = *(*(param_2 + 0x134) + 0x20) + *context;
        context[1] = *(*(param_2 + 0x134) + 0x28) + context[1];
        context[2] = *(*(param_2 + 0x134) + 0x30) + context[2];
        return context;
    }

    void* temp_val = *(data_val + 0x14);
    memcpy(context, param_2 + 8, 0x18);
    *context = *(*(param_2 + 0x134) + 0x20) + *context;
    context[1] = *(*(param_2 + 0x134) + 0x28) + context[1];
    long double fpu_val_7_5 = *(*(param_2 + 0x134) + 0x30) + context[2];
    context[2] = fpu_val_7_5;
    double item_20 = *(temp_val + 0x78) * fpu_val_7_5 + *(temp_val + 0x74) * context[1] + *(temp_val + 0x70) * *context;
    double item_18 = *(temp_val + 0x84) * fpu_val_7_5 + *(temp_val + 0x80) * context[1] + *(temp_val + 0x7c) * *context;
    double item_10 = *(temp_val + 0x90) * fpu_val_7_5 + *(temp_val + 0x8c) * context[1] + *(temp_val + 0x88) * *context;
    memcpy(context, &item_20, 0x18);
    *context = *(temp_val + 0x20) + *context;
    context[1] = *(temp_val + 0x28) + context[1];
    context[2] = *(temp_val + 0x30) + context[2];
    return context;
}
