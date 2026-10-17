// IGI native provenance: Render_DrawRigidMesh_6 - 0x004D32A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D32A0-Render_DrawRigidMesh_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawRigidMesh_6.h"
int32_t Render_DrawRigidMesh_6(int32_t context, int32_t param_2, void* param_3, void* param_4)

{
    void* item_14 = param_4;
    int32_t* data_val = Render_SetupLighting_6(param_4, 0);
    int32_t* data_1 = Render_SetupLighting_6(param_4, 1);
    int32_t data_2 = *(param_4 + 0x14);

    if (!data_2)
    {
        int32_t data_17;

        if (*data_val == 0xffffffff)
            data_17 = param_2;
        else
            data_17 = Render_BlendbranchToIllegal(context, param_2, param_3, data_val);

        if (*data_1 == 0xffffffff)
            return data_17;

        return Render_BlendbranchToIllegal(context, data_17, param_3, data_1);
    }

    int32_t data_3 = data_2(*(param_4 + 0x18));

    if (data_3 != 0xffffffff)
        Render_ComputeNormals_6(param_4);

    if (!data_3)
    {
        Render_BoneobjDeleteblendno(param_4, 0);
        return Render_BlendbranchToIllegal(context, param_2, param_3, data_1);
    }

    if (data_3 == 1)
    {
        Render_BoneobjDeleteblendno(param_4, 1);
        return Render_BlendbranchToIllegal(context, param_2, param_3, data_val);
    }

    if (data_3 != 2)
    {
        *(param_3 + 4) |= 0x10000;
        return Render_BlendbranchToIllegal(context, Render_BlendbranchToIllegal(context, param_2, param_3, data_val), param_3, data_1);
    }

    Render_BoneobjDeleteblendno(param_4, 0);
    Render_BoneobjDeleteblendno(param_4, 1);
    return param_2;
}
