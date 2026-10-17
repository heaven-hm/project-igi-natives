// Original IGI.EXE function: Sys_CloseFileStream_13 (VA 0x004B44D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_13.h"
float* Sys_CloseFileStream_13(float context, float* param_2, float* param_3, float* param_4, float* param_5)

{
    char* source_val = context;
    *source_val = 0;
    long double fp0 = Sys_ExecuteBytecode_13(param_4, param_5);
    context = fp0;
    long double f0 = 0.0f;
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_1 = context;
        long double f2_1 = -9.99999994e-09.0f;
        fpu_val_7_1 - f2_1;

        if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
            context = 0.0f;
        else
        {
            context = -(context);
            *source_val = 1;
        }
    }

    long double fp0_1 = Sys_DispatchOpcode_9(context);
    float* result = param_2;
    *result = fp0_1;
    long double f1 = 0.0f;
    fp0_1 - f1;
    result = (fp0_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f1) ? 1 : 0) << 0xa
        | (fp0_1 == f1 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
        *param_3 = 1.0f;
        return result;
    }

    long double fp0_2;
    bool c1;
    bool c2_3;
    fp0_2 = __fsin(fp0_1);
    *param_3 = 1.0f / fp0_2;
    return result;
}
