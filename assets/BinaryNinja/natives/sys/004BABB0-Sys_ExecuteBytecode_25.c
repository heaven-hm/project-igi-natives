// Original IGI.EXE function: Sys_ExecuteBytecode_25 (VA 0x004BABB0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_25.h"
void** Sys_ExecuteBytecode_25(char* a1)

{
    if (!Sys_ReadFileBlock_25(a1, &a1))
        return 0;

    if (g_a43eb0 == &g_a43eb4)
        Sys_DispatchOpcode_25(0x400);

    void** result = Camera_ApplyBandFilter_33(&g_a43eb0);
    result[2] = a1;
    Camera_ApplyLineFilter_33(&g_a43e90, result);
    int32_t valA2 = g_a43e8c + 1;
    bool cond_0 = valA2 <= g_a43eac;
    g_a43e8c = valA2;

    if (!cond_0)
        g_a43eac = valA2;

    return result;
}
