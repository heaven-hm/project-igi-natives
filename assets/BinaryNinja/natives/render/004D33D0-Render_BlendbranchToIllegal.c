// IGI native provenance: Render_BlendbranchToIllegal - 0x004D33D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D33D0-Render_BlendbranchToIllegal.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BlendbranchToIllegal.h"
int32_t Render_BlendbranchToIllegal(int32_t context, int32_t param_2, void* param_3, int32_t* param_4)

{
    int32_t entity_val = *param_4;

    if (entity_val == 1)
    {
        void* data_val = param_4[1];
        int32_t entity_1 = *(data_val + 8);

        if (!entity_1)
            return param_2;

        return entity_1(context, param_2, param_3, *(data_val + 0x10));
    }

    if (!entity_val)
        return Render_DrawRigidMesh_6(context, param_2, param_3, param_4[1]);

    Error_Show("BlendBranch to illegal target");

    while (true)
        /* nop */
}
