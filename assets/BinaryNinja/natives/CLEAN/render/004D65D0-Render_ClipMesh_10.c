// IGI native provenance: Render_ClipMesh_10 - 0x004D65D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D65D0-Render_ClipMesh_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_10.h"
int32_t Render_ClipMesh_10()

{
    int32_t result;

    for (int32_t i = 0; i < 0x40; i += 1)
    {
        Render_DrawBoneMesh_11(i);
        result = Render_DrawRigidMesh_11(i);
    }

    return result;
}
