// IGI native provenance: Render_SkinBones - 0x004D0790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0790-Render_SkinBones.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SkinBones.h"
int32_t Render_SkinBones(void* context, int32_t param_2)

{
    float* entity_val = *(context + 0x5a0);
    long double fpu_val_7_1 = *(context + 0x20) - g_bcab08;
    float item_18;

    if (!entity_val)
    {
        long double fpu_val_6_13 = *(context + 0x28) - g_bcab10;
        long double fpu_val_5_13 = *(context + 0x30) - g_bcab18;
        context = *(context + 0x44);
        long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_13;
        long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_13;
        item_18 = g_bcaae8 * fpu_val_5_13 + g_bcaae4 * fpu_val_6_13 + g_bcaae0 * fpu_val_7_1;
        float item_14_3 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_1;
        float item_10_2 = g_bcab00 * fpu_val_5_13 + g_bcaafc * fpu_val_6_13 + g_bcaaf8 * fpu_val_7_1;
    }
    else
    {
        item_18 = fpu_val_7_1;
        float item_14 = *(context + 0x28) - g_bcab10;
        float item_10 = *(context + 0x30) - g_bcab18;
        item_18 = item_18 + *entity_val;
        float item_14_1 = item_14 + entity_val[1];
        long double fpu_val_7_11 = item_10 + entity_val[2];
        float item_14_2 = g_bcaaf4 * fpu_val_7_11 + g_bcaaf0 * item_14_1 + g_bcaaec * item_18;
        long double fpu_val_6_10 = g_bcab00 * fpu_val_7_11 + g_bcaafc * item_14_1;
        long double fpu_val_5_11 = g_bcaaf8 * item_18;
        item_18 = g_bcaae8 * fpu_val_7_11 + g_bcaae4 * item_14_1 + g_bcaae0 * item_18;
        float item_10_1 = fpu_val_6_10 + fpu_val_5_11;
        context = entity_val[3];
    }

    return Render_DrawBoneMesh(&item_18, context, param_2);
}
