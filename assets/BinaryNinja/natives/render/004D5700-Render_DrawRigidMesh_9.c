// IGI native provenance: Render_DrawRigidMesh_9 - 0x004D5700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D5700-Render_DrawRigidMesh_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawRigidMesh_9.h"
int32_t* Render_DrawRigidMesh_9(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* result = Render_ClipMesh_7();
    int32_t* data_val = Render_DrawBoneMesh_9();
    Render_DrawSplineMesh_9(data_val, context, param_2, param_3);
    Render_DrawRigidMesh_8(result, 0, sub_4d5820, 0, sub_4d57c0, data_val);
    return result;
}
