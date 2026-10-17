// IGI native provenance: Render_TransformVertices_9 - 0x004D5FD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D5FD0-Render_TransformVertices_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_TransformVertices_9.h"
int32_t* Render_TransformVertices_9(int32_t* context, int32_t param_2, int32_t param_3)

{
    *context = 0;
    context[1] = param_2;
    context[2] = 0x3f800000;
    context[3] = param_3;
    return context;
}
