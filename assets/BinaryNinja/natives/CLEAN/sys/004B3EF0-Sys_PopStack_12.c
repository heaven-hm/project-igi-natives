// IGI native provenance: Sys_PopStack_12 - 0x004B3EF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B3EF0-Sys_PopStack_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_12.h"
float* Sys_PopStack_12(float* context, float param_2, float param_3)

{
    long double fpu_val_7_1 = param_3 * 0.5f;
    float* data_val = param_2;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(fpu_val_7_1);
    float item_14 = fp0 * *data_val;
    float item_10 = fp0 * data_val[1];
    float item_c = fp0 * data_val[2];
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(fpu_val_7_1);
    long double fpu_val_6_4 = item_14 * item_14;
    long double fpu_val_6_7 = item_10 * item_14;
    param_3 = fpu_val_6_7 + fpu_val_6_7;
    long double fpu_val_6_10 = item_c * item_14;
    float item_2c = fpu_val_6_10 + fpu_val_6_10;
    long double fpu_val_6_13 = fp0_1 * item_14;
    float item_20 = fpu_val_6_13 + fpu_val_6_13;
    long double fpu_val_6_16 = item_10 * item_10;
    float item_1c = fpu_val_6_16 + fpu_val_6_16;
    long double fpu_val_6_19 = item_c * item_10;
    float item_24 = fpu_val_6_19 + fpu_val_6_19;
    long double fpu_val_6_22 = fp0_1 * item_10;
    float item_28 = fpu_val_6_22 + fpu_val_6_22;
    long double fpu_val_6_25 = item_c * item_c;
    param_2 = fpu_val_6_25 + fpu_val_6_25;
    long double fpu_val_7_3 = fp0_1 * item_c;
    long double fpu_val_7_4 = fpu_val_7_3 + fpu_val_7_3;
    *context = 1.0f - item_1c - param_2;
    context[1] = param_3 - fpu_val_7_4;
    context[2] = item_28 + item_2c;
    context[3] = fpu_val_7_4 + param_3;
    long double fpu_val_7_7 = 1.0f - (fpu_val_6_4 + fpu_val_6_4);
    context[4] = fpu_val_7_7 - param_2;
    context[5] = item_24 - item_20;
    context[9] = 0;
    context[6] = item_2c - item_28;
    context[7] = item_24 + item_20;
    context[8] = fpu_val_7_7 - item_1c;
    return context;
}
