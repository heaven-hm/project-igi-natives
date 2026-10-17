// IGI native provenance: Render_ClipMesh_9 - 0x004D62B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D62B0-Render_ClipMesh_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_9.h"
void** Render_ClipMesh_9(void* context, int32_t param_2, float param_3)

{
    long double fpu_val_7_1 = param_3 * 4800.0f / g_a54658;
    int32_t entity_2 = param_2 * 0x21;
    void** data_1 = *(context + 8);
    void** source_val = data_1[entity_2 + 0x20];
    void* dest_val = &data_1[entity_2];
    long double f0 = 1.0f;
    fpu_val_7_1 - f0;
    data_1 = (fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 1))
    {
        if (source_val)
        {
            void** item_14_1 = source_val;
            int32_t* data_3 = Render_SkinBones_9();
            Render_TransformVertices_9(data_3, fpu_val_7_1, 2);
            *(dest_val + 4) |= 0x10000;
            int32_t* data_4 = Render_ClipMesh_7();
            Render_DrawRigidMesh_8(data_4, 0, sub_4d4780, 0, 0, dest_val);
            data_1 = source_val[9];

            if (data_1 != 0xffffffff)
            {
                data_1 = Render_DrawLightmapMesh_6();
                *source_val = data_1;
                data_1[8] = source_val;
                data_1[7] = 0;
                source_val = data_1;
            }

            source_val[0xa] = data_4;
            source_val[9] = 1;
            source_val[3] = sub_4d63a0;
            source_val[4] = sub_4d63f0;
            source_val[5] = sub_4d63b0;
            source_val[6] = data_3;
            *(dest_val + 0x80) = source_val;
        }
    }
    else if (source_val)
    {
        int32_t data_2 = Render_DrawBoneMesh_6(source_val);
        *(dest_val + 0x80) = 0;
        return data_2;
    }

    return data_1;
}
