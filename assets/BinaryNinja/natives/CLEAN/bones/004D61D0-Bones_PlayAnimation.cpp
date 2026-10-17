// IGI native provenance: Bones_PlayAnimation - 0x004D61D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D61D0-Bones_PlayAnimation.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Bones_PlayAnimation.h"
int32_t Bones_PlayAnimation(float context, int32_t param_2, int32_t param_3, int32_t param_4, float param_5)

{
    int32_t* entity_val = context;
    void* source_3 = entity_val[2] + param_2 * 0x84;
    void* dest_val = *(source_3 + 0x80);
    context = param_5 * 4800.0f / g_a54658;
    int32_t* context_val = Render_DrawSplineMesh_8(*entity_val, param_2, param_3, param_4);

    if (dest_val || *(source_3 + 0x74))
    {
        long double fpu_val_7_2 = context;
        long double f0_1 = 1.0f;
        fpu_val_7_2 - f0_1;

        if (!(*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            Render_DrawLightmapMesh_9(source_3, context_val, context, 0);
            int32_t data_7 = *(source_3 + 4) | 0x20000;
            *(source_3 + 4) = data_7;
            return data_7;
        }

        if (dest_val)
            Render_DrawBoneMesh_6(dest_val);
    }

    int32_t* data_3 = Render_DrawLightmapMesh_6();
    Render_SkinBones_6(data_3, 0, 1, context_val, 0xffffffff, 0, 0, 0, 0, 0, 0, 0);
    int32_t entity_5 = *(source_3 + 4) & 0xfffafeff;
    *(source_3 + 0x80) = data_3;
    *(source_3 + 4) = entity_5;
    int32_t data_5 = entity_5 | 0x20000;
    *(source_3 + 4) = data_5;
    return data_5;
}
