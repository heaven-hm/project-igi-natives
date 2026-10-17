// IGI native provenance: Render_SkinBones_10 - 0x004D6500 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6500-Render_SkinBones_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SkinBones_10.h"
long double Render_SkinBones_10(void* context, int32_t param_2)

{
    return *(Render_DrawBoneMesh_10(context, param_2) + 0x2c);
}
