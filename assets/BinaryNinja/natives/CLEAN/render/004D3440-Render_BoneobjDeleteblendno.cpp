// IGI native provenance: Render_BoneobjDeleteblendno - 0x004D3440 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3440-Render_BoneobjDeleteblendno.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BoneobjDeleteblendno.h"
int32_t Render_BoneobjDeleteblendno(int32_t context, int32_t param_2)

{
    int32_t* data_val = Render_SetupLighting_6(context, param_2);
    int32_t data_1 = *data_val;

    if (data_1 != 0xffffffff)
    {
        if (!data_1)
            data_1 = Render_DrawBoneMesh_6(data_val[1]);
        else
        {
            if (data_1 == 1)
            {
                int32_t data_2 = Render_TransformVertices_6(data_val[1]);
                *data_val = 0xffffffff;
                return data_2;
            }

            Error_Show("BoneObj_DeleteBlendNodeBranch: Illegal child type");

            while (true)
                /* nop */
        }
    }

    *data_val = 0xffffffff;
    return data_1;
}
