// IGI native provenance: Sys_DispatchOpcode_13 - 0x004B45A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B45A0-Sys_DispatchOpcode_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_13.h"
float* Sys_DispatchOpcode_13(float* context, float param_2, float param_3, float param_4)

{
    long double fpu_val_7_1 = param_2 * 0.5f;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(fpu_val_7_1);
    context[4] = 0;
    float item_8 = fp0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(fpu_val_7_1);
    long double fpu_val_6_3 = param_3 * 0.5f;
    long double fp0_2;
    bool c1_2;
    bool c2_2;
    fp0_2 = __fsin(fpu_val_6_3);
    float item_c = fp0_2;
    long double fp0_3;
    bool c1_3;
    bool c2_3;
    fp0_3 = __fcos(fpu_val_6_3);
    long double fpu_val_5_3 = param_4 * 0.5f;
    long double fp0_4;
    bool c1_4;
    bool c2_4;
    fp0_4 = __fsin(fpu_val_5_3);
    param_3 = fp0_4;
    long double fp0_5;
    bool c1_5;
    bool c2_5;
    fp0_5 = __fcos(fpu_val_5_3);
    param_2 = fp0_5;
    float item_4 = fp0_3 * item_8;
    param_4 = item_c * fp0_1;
    long double fpu_val_7_3 = fp0_1 * fp0_3;
    long double fpu_val_6_6 = item_c * item_8;
    *context = item_4 * param_2 - param_4 * param_3;
    context[1] = param_4 * param_2 + item_4 * param_3;
    context[2] = fpu_val_7_3 * param_3 - fpu_val_6_6 * param_2;
    context[3] = fpu_val_7_3 * param_2 + fpu_val_6_6 * param_3;
    return context;
}
