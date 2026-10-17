// IGI native provenance: Render_DrawRigidMesh_4 - 0x004D14A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D14A0-Render_DrawRigidMesh_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawRigidMesh_4.h"
void Render_DrawRigidMesh_4(int32_t* context, int32_t param_2)

{
    for (int32_t* i = context; i; i = *i)
        i[1](param_2);
}
