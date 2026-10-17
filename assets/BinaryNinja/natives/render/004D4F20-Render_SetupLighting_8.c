// IGI native provenance: Render_SetupLighting_8 - 0x004D4F20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D4F20-Render_SetupLighting_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_8.h"
int32_t Render_SetupLighting_8()

{
    int32_t entity_2 = g_a54628;
    int32_t result = *(g_a54624 + (entity_2 << 2)) * g_a54630 + g_a54620;
    *(g_a54634 + result) = entity_2;
    g_a54628 += 1;
    return result;
}
