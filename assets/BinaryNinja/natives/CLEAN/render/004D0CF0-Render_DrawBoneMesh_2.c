// IGI native provenance: Render_DrawBoneMesh_2 - 0x004D0CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0CF0-Render_DrawBoneMesh_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_2.h"
int32_t Render_DrawBoneMesh_2(void* context, int32_t param_2)

{
    return *(*(*(context + 0xc) + 0xc) + 0x8c) + param_2 * 0x44;
}
