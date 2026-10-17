// IGI native provenance: Render_ClipMesh_7 - 0x004D4710 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D4710-Render_ClipMesh_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_7.h"
int32_t Render_ClipMesh_7()

{
    int32_t entity_2 = g_a545f8;
    int32_t result = *(g_a545f4 + (entity_2 << 2)) * g_a54600 + g_a545f0;
    *(g_a54604 + result) = entity_2;
    g_a545f8 += 1;
    return result;
}
