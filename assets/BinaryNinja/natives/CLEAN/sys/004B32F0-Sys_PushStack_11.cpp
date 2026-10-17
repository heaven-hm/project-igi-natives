// IGI native provenance: Sys_PushStack_11 - 0x004B32F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B32F0-Sys_PushStack_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_11.h"
long double Sys_PushStack_11(double* context, double* param_2)

{
    long double fpu_val_7_1 = *context - *param_2;
    long double fpu_val_6_1 = context[1] - param_2[1];
    long double fpu_val_5_1 = context[2] - param_2[2];
    return fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1;
}
