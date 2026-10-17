// Original IGI.EXE function: Render_ComputeNormals_9 (VA 0x004D5FF0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_9.h"
int32_t Render_ComputeNormals_9(int32_t* context, int32_t param_2, float param_3, int32_t param_4)

{
    void** source_val = context[0x20];

    if (source_val || context[0x1d])
    {
        long double fpu_val_7_1 = param_3;
        long double f0_1 = 1.0f;
        fpu_val_7_1 - f0_1;

        if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            int32_t* context_val = Render_SkinBones_9();
            Render_TransformVertices_9(context_val, param_3, param_4);

            if (!source_val)
            {
                source_val = Render_DrawLightmapMesh_6();
                source_val[7] = 1;
                source_val[9] = 0;
                source_val[0xa] = param_2;
                int32_t* data_10 = Render_ClipMesh_7();
                Render_DrawRigidMesh_8(data_10, 0, sub_4d4780, 0, 0, context);
                source_val[8] = data_10;
            }
            else
            {
                void** item_14_1 = source_val;

                if (source_val[9] != 0xffffffff)
                {
                    int32_t* data_7 = Render_DrawLightmapMesh_6();
                    *source_val = data_7;
                    data_7[8] = source_val;
                    data_7[7] = 0;
                    source_val = data_7;
                }

                source_val[9] = 0;
                source_val[0xa] = param_2;
            }

            source_val[1] = 0;
            source_val[2] = 0;
            source_val[3] = sub_4d63a0;
            source_val[4] = sub_4d63f0;
            source_val[5] = sub_4d63b0;
            source_val[6] = context_val;
            int32_t data_11 = context[1];
            context[0x20] = source_val;
            int32_t data_12 = data_11 | 0x10000;
            context[1] = data_12;
            return data_12;
        }

        if (source_val)
            Render_DrawBoneMesh_6(source_val);
    }

    int32_t entity_1 = context[1] & 0xfffafeff;
    context[0x20] = param_2;
    context[1] = entity_1;
    int32_t data_4 = entity_1 | 0x10000;
    context[1] = data_4;
    return data_4;
}
