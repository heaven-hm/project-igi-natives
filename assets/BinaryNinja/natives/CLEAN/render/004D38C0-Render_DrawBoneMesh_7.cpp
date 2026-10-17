// IGI native provenance: Render_DrawBoneMesh_7 - 0x004D38C0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D38C0-Render_DrawBoneMesh_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_7.h"
int32_t Render_DrawBoneMesh_7(int32_t context, void* param_2)

{
    float item_28;
    memcpy(&item_28, context, 0x28);
    float item_18;
    float item_8;
    long double fpu_val_7_2 = item_8 + item_18 + item_28;
    long double f0 = 0.0f;
    fpu_val_7_2 - f0;
    float item_48;
    float item_3c;

    if (*(&((fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_8 = item_18;
        long double f1_1 = item_28;
        fpu_val_7_8 - f1_1;
        int32_t entity_1 = 0;
        item_48 = 1.40129846e-45.0f;
        int32_t item_44_1 = 2;
        int32_t item_40_1 = 0;

        if (!(*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            entity_1 = 1;

        long double fpu_val_7_9 = item_8;
        long double f2_1 = (&item_28)[entity_1 * 4];
        fpu_val_7_9 - f2_1;

        if (!(*(&((fpu_val_7_9 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            entity_1 = 2;

        int32_t temp_1 = (&item_48)[entity_1];
        int32_t source_1 = (&item_48)[temp_1];
        long double fpu_val_7_14 =
            sqrtl((&item_28)[entity_1 * 4] - (&item_28)[temp_1 * 4] - (&item_28)[source_1 * 4] + 1.0f);
        (&item_3c)[entity_1] = fpu_val_7_14 * 0.5f;
        long double f3_1 = 0.0f;
        fpu_val_7_14 - f3_1;

        if (!(*(&((fpu_val_7_14 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            fpu_val_7_14 = 0.5f / fpu_val_7_14;

        int32_t dest_3 = temp_1 * 3;
        int32_t data_9 = entity_1 * 3;
        int32_t context_2 = source_1 * 3;
        (&item_3c)[temp_1] = ((&item_28)[dest_3 + entity_1] + (&item_28)[data_9 + temp_1]) * fpu_val_7_14;
        (&item_3c)[source_1] = ((&item_28)[entity_1 + context_2] + (&item_28)[data_9 + source_1]) * fpu_val_7_14;
        float item_30_1 = -((((&item_28)[dest_3 + source_1] - (&item_28)[context_2 + temp_1]) * fpu_val_7_14));
    }
    else
    {
        long double fpu_val_7_4 = sqrtl(fpu_val_7_2 + 1.0f);
        float item_30 = fpu_val_7_4 * 0.5f;
        long double fpu_val_7_5 = 0.5f / fpu_val_7_4;
        float item_14;
        float item_c;
        item_3c = -(((item_14 - item_c) * fpu_val_7_5));
        float item_20;
        float item_10;
        float item_38_1 = -(((item_10 - item_20) * fpu_val_7_5));
        float item_24;
        float item_1c;
        float item_34_1 = -(((item_24 - item_1c) * fpu_val_7_5));
    }

    int32_t item_4;
    int32_t item_2c = item_4;
    Render_DrawRigidMesh_7(&item_28, &item_3c);
    float source_2 = *(param_2 + 8);
    item_48 = 0.0f;
    int32_t item_44_2 = 0;
    int32_t item_40_2 = 0;
    Render_DrawSplineMesh_7(&item_28, &item_3c, &item_48, source_2, 0.0f);
    *(source_2 + 0x60) = 0;
    *(source_2 + 0x64) = 0;
    *(source_2 + 0x68) = 0;
    *(source_2 + 0x6c) = 0x3f800000;
    *(source_2 + 0x70) = 0;
    return Render_DrawRigidMesh_7(0, 0);
}
