// IGI native provenance: Render_DrawBoneMesh_9 - 0x004D5750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D5750-Render_DrawBoneMesh_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_9.h"
int32_t Render_DrawBoneMesh_9()

{
    int32_t entity_2 = g_a54610;
    int32_t result = *(g_a5460c + (entity_2 << 2)) * g_a54618 + g_a54608;
    *(g_a5461c + result) = entity_2;
    g_a54610 += 1;
    return result;
}
