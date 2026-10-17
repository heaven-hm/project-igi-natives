// Original IGI.EXE function: Render_DrawLightmapMesh_9 (VA 0x004D5EC0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_9.h"
int32_t Render_DrawLightmapMesh_9(void* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t* source_val = *(context + 0x80);
    int32_t* data_val = Render_SkinBones_9();
    Render_TransformVertices_9(data_val, param_3, param_4);

    if (!source_val)
    {
        source_val = Render_DrawLightmapMesh_6();
        source_val[7] = 1;
        source_val[9] = 1;
        source_val[0xa] = param_2;
        int32_t* data_6 = Render_ClipMesh_7();
        Render_DrawRigidMesh_8(data_6, 0, sub_4d4780, 0, 0, context);
        source_val[8] = data_6;
    }
    else
    {
        int32_t* item_14_1 = source_val;

        if (source_val[9] != 0xffffffff)
        {
            int32_t* data_3 = Render_DrawLightmapMesh_6();
            *source_val = data_3;
            data_3[8] = source_val;
            data_3[7] = 0;
            source_val = data_3;
        }

        source_val[9] = 1;
        source_val[0xa] = param_2;
    }

    source_val[1] = 0;
    source_val[2] = 0;
    source_val[3] = sub_4d63a0;
    source_val[4] = sub_4d63f0;
    source_val[5] = sub_4d63b0;
    source_val[6] = data_val;
    int32_t data_7 = *(context + 4);
    *(context + 0x80) = source_val;
    int32_t result = data_7 | 0x10000;
    *(context + 4) = result;
    return result;
}
