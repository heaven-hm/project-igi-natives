// IGI native provenance: Render_BindTexture_10 - 0x004D65B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D65B0-Render_BindTexture_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_10.h"
void* Render_BindTexture_10(void* context, int32_t param_2, int32_t param_3)

{
    void* result = Render_DrawBoneMesh_10(context, param_2);
    *(result + 0x2c) = param_3;
    return result;
}
