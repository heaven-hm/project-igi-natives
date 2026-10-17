// IGI native provenance: Render_DrawSplineMesh_10 - 0x004D64C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D64C0-Render_DrawSplineMesh_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_10.h"
int32_t Render_DrawSplineMesh_10(void* context, int32_t param_2)

{
    return *(Render_DrawBoneMesh_10(context, param_2) + 4);
}
