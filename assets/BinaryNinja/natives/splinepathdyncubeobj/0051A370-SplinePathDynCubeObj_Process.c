// Original IGI.EXE function: SplinePathDynCubeObj_Process (VA 0x0051A370; static CFG gate PASS, CFG score 1.000).
#include "SplinePathDynCubeObj_Process.h"
float* SplinePathDynCubeObj_Process(float* context, float param_2, float param_3, float param_4)

{
    long double fpu_val_7_1 = param_4 * param_4;
    void* data_val = *(param_2 + (param_3 << 2) + 0x68);
    void* entity_1 = *(param_2 + (param_3 << 2) + 0x6c);
    float item_10 = fpu_val_7_1 * 3.0f;
    float item_14 = item_10 - param_4 * 4.0f + 1.0f;
    long double fpu_val_6_7 = param_4 * 6.0f;
    param_2 = fpu_val_7_1 * -6.0f + fpu_val_6_7;
    long double fpu_val_6_10 = fpu_val_7_1 * 6.0f - fpu_val_6_7;
    long double fpu_val_6_13 = param_4;
    param_4 = item_10 - (fpu_val_6_13 + fpu_val_6_13);
    long double fpu_val_5_7 = *(entity_1 + 0x78);
    param_3 = fpu_val_5_7;
    long double fpu_val_5_9 = *(data_val + 0x78);
    param_3 = fpu_val_5_9;
    float item_c =
        fpu_val_6_10 * *(data_val + 0x20) + param_2 * *(entity_1 + 0x20) + fpu_val_5_7 * param_4 + fpu_val_5_9 * item_14;
    long double fpu_val_5_15 = *(entity_1 + 0x80);
    param_3 = fpu_val_5_15;
    long double fpu_val_5_17 = *(data_val + 0x80);
    param_3 = fpu_val_5_17;
    float item_8 =
        fpu_val_6_10 * *(data_val + 0x28) + param_2 * *(entity_1 + 0x28) + fpu_val_5_15 * param_4 + fpu_val_5_17 * item_14;
    long double fpu_val_7_7 = fpu_val_6_10 * *(data_val + 0x30) + param_2 * *(entity_1 + 0x30);
    long double fpu_val_6_34 = *(entity_1 + 0x88);
    param_2 = fpu_val_6_34;
    long double fpu_val_7_8 = fpu_val_7_7 + fpu_val_6_34 * param_4;
    long double fpu_val_6_36 = *(data_val + 0x88);
    param_4 = fpu_val_6_36;
    *context = item_c;
    context[1] = item_8;
    context[2] = fpu_val_7_8 + fpu_val_6_36 * item_14;
    return context;
}
