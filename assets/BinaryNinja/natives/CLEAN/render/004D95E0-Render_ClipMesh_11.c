// IGI native provenance: Render_ClipMesh_11 - 0x004D95E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D95E0-Render_ClipMesh_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_11.h"
uint32_t Render_ClipMesh_11()

{
    QTask_CloseEvent_2(g_548618);
    char entity_val = g_54861a;
    g_548618 = 0x181;
    uint32_t result = QTask_InitContext(entity_val);
    g_54861a = 0xff;
    return result;
}
