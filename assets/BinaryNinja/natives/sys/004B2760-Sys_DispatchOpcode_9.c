// Original IGI.EXE function: Sys_DispatchOpcode_9 (VA 0x004B2760; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_9.h"
int32_t Sys_DispatchOpcode_9(float context) {
    long double fpu7 = context;
    long double f0 = -1.0;
    fpu7 - f0;
    double item_8 = fpu7;
    bool c1 = /* bool c1 = unknown  {fst qword [stack_ptr], fp0} */;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1)
            & 1)
        return Terrain_ConnectGraphNode_3(-1.0);

    long double f1 = 1.0;
    fpu7 - f1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        item_8 = 0;
        *(&item_8 + 4) = 0x3ff00000;
    }

    return Terrain_ConnectGraphNode_3(item_8);
}
