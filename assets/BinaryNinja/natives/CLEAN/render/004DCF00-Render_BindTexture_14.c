// IGI native provenance: Render_BindTexture_14 - 0x004DCF00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DCF00-Render_BindTexture_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_14.h"
int32_t Render_BindTexture_14(int32_t context, void* param_2, double* param_3)

{
    Render_SetupLighting_14(param_2);
    return Render_ComputeNormals_14(context, param_2, param_3);
}
