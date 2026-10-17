// IGI native provenance: Render_DrawSplineMesh_9 - 0x004D5790 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004D5790-Render_DrawSplineMesh_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_9.h"
int32_t* Render_DrawSplineMesh_9(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    *context = param_2;
    context[1] = param_3;
    memcpy(&context[2], param_4, 0x14);
    return context;
}
