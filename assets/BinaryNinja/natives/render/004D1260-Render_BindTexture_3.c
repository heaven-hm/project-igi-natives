// IGI native provenance: Render_BindTexture_3 - 0x004D1260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D1260-Render_BindTexture_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_3.h"
int32_t Render_BindTexture_3()

{
    QTask_CleanupEvents_2(0xf);
    QTask_CleanupEvents_2(0x10);
    QTask_InitContext(0xf);
    QTask_InitContext(0x10);
    QTask_InitContext(0x11);
    QTask_InitContext(0x12);
    QTask_InitContext(g_548441);
    QTask_InitContext(g_548440);
    int32_t result = Sys_ExecuteBytecode_2(g_b16c98);
    g_b16c98 = 0;
    return result;
}
