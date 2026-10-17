// IGI native provenance: Render_DrawLightmapMesh - 0x004D06C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D06C0-Render_DrawLightmapMesh.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawLightmapMesh.h"
int32_t Render_DrawLightmapMesh(float context, int32_t param_2)

{
    long double fpu_val_7_1 = *(context + 0x20) - g_bcab08;
    long double fpu_val_6_1 = *(context + 0x28) - g_bcab10;
    long double fpu_val_5_1 = *(context + 0x30) - g_bcab18;
    long double fpu_val_4_5 = g_bcaaf4 * fpu_val_5_1;
    long double fpu_val_3_5 = g_bcaaf0 * fpu_val_6_1;
    float item_c = g_bcaae8 * fpu_val_5_1 + g_bcaae4 * fpu_val_6_1 + g_bcaae0 * fpu_val_7_1;
    float item_8 = fpu_val_4_5 + fpu_val_3_5 + g_bcaaec * fpu_val_7_1;
    float item_4 = g_bcab00 * fpu_val_5_1 + g_bcaafc * fpu_val_6_1 + g_bcaaf8 * fpu_val_7_1;
    return Render_DrawBoneMesh(&item_c, *(*(*(**(context + 0x74) + 0xc) + 0xc) + 0x3c) * 1.40999997f, param_2);
}
