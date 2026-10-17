// IGI native provenance: Render_SetupLighting_9 - 0x004D6110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6110-Render_SetupLighting_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_9.h"
int32_t Render_SetupLighting_9(float context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    return Bones_PlayAnimation(context, param_2, param_3, param_4, 0.0f);
}
