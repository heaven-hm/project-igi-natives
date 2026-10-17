// Original IGI.EXE function: Sys_ResolveSymbol_9 (VA 0x004B28A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_9.h"
int32_t Sys_ResolveSymbol_9(double a1) __location("fp0")

{
    long double fpu7 = a1;
    long double f0 = -1.0;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        return Terrain_ConnectGraphNode_3(-1.0);

    long double x87_r7_3 = a1;
    long double f1 = 1.0;
    x87_r7_3 - f1;

    if (!(*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        a1 = 0;
        *(&a1 + 4) = 0x3ff00000;
    }

    return Terrain_ConnectGraphNode_3(a1);
}
