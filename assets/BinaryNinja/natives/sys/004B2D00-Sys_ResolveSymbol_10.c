// IGI native provenance: Sys_ResolveSymbol_10 - 0x004B2D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2D00-Sys_ResolveSymbol_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_10.h"
float* Sys_ResolveSymbol_10(float* context, float* param_2, float* param_3)

{
    long double fpu7 = *context;
    long double f0 = 0.0f;
    fpu7 - f0;
    float* data_val;
    data_val = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 0x40)
        *param_3 = 0.0f;
    else
    {
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fpatan(*context, context[1]);
        data_val = param_3;
        *data_val = fp1_1;
    }

    long double fpu_val_7_3 = context[2];
    long double fpu_val_6_2 = context[1];
    long double fpu5 = *context;
    long double fpu_val_4_4 = sqrtl(fpu5 * fpu5 + fpu_val_6_2 * fpu_val_6_2 + fpu_val_7_3 * fpu_val_7_3);
    long double f1 = 0.0f;
    fpu_val_4_4 - f1;
    data_val = (fpu_val_4_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_4, f1) ? 1 : 0) << 0xa
        | (fpu_val_4_4 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&data_val + 1) & 0x40)
    {
        *param_2 = 0.0f;
        return data_val;
    }

    float* item_4 = context;
    *param_2 = -(Sys_PushStack_9(context[2] / fpu_val_4_4));
    return param_2;
}
