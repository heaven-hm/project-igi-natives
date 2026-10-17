// IGI native provenance: Sys_PushStack_13 - 0x004B4660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B4660-Sys_PushStack_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_13.h"
float* Sys_PushStack_13(float* context, float* param_2, float param_3)

{
    long double fpu7 = param_3 * 0.5f;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(fpu7);
    *context = fp0 * *param_2;
    context[1] = fp0 * param_2[1];
    long double fpu_val_6_2 = fp0 * param_2[2];
    context[4] = 0;
    context[2] = fpu_val_6_2;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(fpu7);
    context[3] = fp0_1;
    return context;
}
