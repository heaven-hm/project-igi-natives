// IGI native provenance: Render_DrawBoneMesh_3 - 0x004D0E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0E50-Render_DrawBoneMesh_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_3.h"
int32_t Render_DrawBoneMesh_3(void* context)

{
    return *(*(context + 0xc) + 0x10) << 2;
}
