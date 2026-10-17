// IGI native provenance: Sys_ExecuteBytecode_25 - 0x004BABB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BABB0-Sys_ExecuteBytecode_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_25.h"
void** Sys_ExecuteBytecode_25(char* context)

{
    if (!Sys_ReadFileBlock_25(context, &context))
        return 0;

    if (g_a43eb0 == &g_a43eb4)
        Sys_DispatchOpcode_25(0x400);

    void** result = Camera_ApplyBandFilter_33(&g_a43eb0);
    result[2] = context;
    Camera_ApplyLineFilter_33(&g_a43e90, result);
    int32_t data_2 = g_a43e8c + 1;
    bool flag_0 = data_2 <= g_a43eac;
    g_a43e8c = data_2;

    if (!flag_0)
        g_a43eac = data_2;

    return result;
}
