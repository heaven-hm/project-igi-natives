// IGI native provenance: Render_DrawRigidMesh_8 - 0x004D4750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D4750-Render_DrawRigidMesh_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawRigidMesh_8.h"
int32_t* Render_DrawRigidMesh_8(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    *context = param_2;
    context[1] = param_3;
    context[2] = param_4;
    context[3] = param_5;
    context[4] = param_6;
    return context;
}
