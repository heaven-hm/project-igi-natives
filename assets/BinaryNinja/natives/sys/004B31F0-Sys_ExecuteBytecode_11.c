// Original IGI.EXE function: Sys_ExecuteBytecode_11 (VA 0x004B31F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_11.h"
long double Sys_ExecuteBytecode_11(double* a1, double* a2)

{
    if (Sys_PopStack_11(a1))
        return 0.0;

    if (Sys_PopStack_11(a2))
        return 0.0;

    double v_8 = a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2;
    double v_10 = Sys_OpenFileStream_11(a1);
    long double x87_r7_9 = v_8 / (Sys_OpenFileStream_11(a2) * v_10);
    long double f0 = 1.0;
    x87_r7_9 - f0;

    if (!(*(&((x87_r7_9 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f0) ? 1 : 0) << 0xa
            | (x87_r7_9 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return 0.0;

    long double f1 = -1.0;
    x87_r7_9 - f1;

    if (!(*(&((x87_r7_9 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f1) ? 1 : 0) << 0xa
            | (x87_r7_9 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return Terrain_ConnectGraphNode_3(x87_r7_9);

    return 3.1415926535897944;
}
