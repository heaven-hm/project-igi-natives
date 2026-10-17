// IGI native provenance: Render_ClipMesh_6 - 0x004D3750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3750-Render_ClipMesh_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_6.h"
int32_t* Render_ClipMesh_6(int32_t* context)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t* flagP = context;
    int32_t* item_4 = flagP;
    int32_t* context_val = *flagP;

    if (!context_val)
        context = nullptr;
    else
    {
        int32_t* data_1 = Render_SetupLighting_6(context_val, 0);
        context = data_1;

        if (*data_1 || data_1[1] != flagP)
            context = Render_SetupLighting_6(context_val, 1);
    }

    int32_t* data_3 = Render_SetupLighting_6(flagP, 0);
    int32_t* data_4 = Render_SetupLighting_6(flagP, 1);
    int32_t data_5 = *data_3;

    if (data_5 == 0xffffffff)
    {
        if (*data_4 != 0xffffffff)
        {
            *data_3 = *data_4;
            data_3[1] = data_4[1];
            *data_4 = 0xffffffff;
            return Render_ClipMesh_6(flagP);
        }

        Render_DrawBoneMesh_6(flagP);

        if (context_val)
        {
            Render_ComputeNormals_6(context_val);
            *context = 0xffffffff;
        }

        return context_val;
    }

    if (*data_4 != 0xffffffff)
    {
        if (!data_5)
            Render_ClipMesh_6(data_3[1]);

        if (!*data_4)
            Render_ClipMesh_6(data_4[1]);

        if (*data_3 == 0xffffffff || *data_4 == 0xffffffff)
            return Render_ClipMesh_6(flagP);
    }
    else if (!data_5 || context_val)
    {
        void** dest_1 = nullptr;

        if (context_val)
        {
            item_4 = context_val;
            *context = *data_3;
            context[1] = data_3[1];
        }

        if (!*data_3)
        {
            dest_1 = data_3[1];
            *dest_1 = context_val;
        }

        *data_3 = 0xffffffff;
        Render_DrawBoneMesh_6(flagP);

        if (dest_1)
            return Render_ClipMesh_6(dest_1);
    }

    return item_4;
}
