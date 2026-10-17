// IGI native provenance: Render_SkinBones_9 - 0x004D5F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D5F90-Render_SkinBones_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SkinBones_9.h"
int32_t Render_SkinBones_9()

{
    int32_t entity_2 = g_a54648;
    int32_t result = *(g_a54644 + (entity_2 << 2)) * g_a54650 + g_a54640;
    *(g_a54654 + result) = entity_2;
    g_a54648 += 1;
    return result;
}
