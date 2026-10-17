// Original IGI.EXE function: Sys_ExecuteBytecode_11 (VA 0x004B31F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_11.h"
long double Sys_ExecuteBytecode_11(double* context, double* param_2)

{
    if (Sys_PopStack_11(context))
        return 0.0;

    if (Sys_PopStack_11(param_2))
        return 0.0;

    double item_8 = context[2] * param_2[2] + context[1] * param_2[1] + *context * *param_2;
    double item_10 = Sys_OpenFileStream_11(context);
    long double fpu_val_7_9 = item_8 / (Sys_OpenFileStream_11(param_2) * item_10);
    long double f0 = 1.0;
    fpu_val_7_9 - f0;

    if (!(*(&((fpu_val_7_9 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_9 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return 0.0;

    long double f1 = -1.0;
    fpu_val_7_9 - f1;

    if (!(*(&((fpu_val_7_9 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_9 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return Terrain_ConnectGraphNode_3(fpu_val_7_9);

    return 3.1415926535897944;
}
