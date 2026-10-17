// IGI native provenance: Render_DrawSplineMesh - 0x004D0510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0510-Render_DrawSplineMesh.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh.h"
int32_t Render_DrawSplineMesh(float context, int32_t param_2)

{
    float item_18 = *(context + 0x20) - g_bcab08;
    int32_t* temp_val = *(context + 0x6c);
    void* data_2 = *(*(*temp_val + 0xc) + 0xc);
    long double fpu_val_7_9 = *(context + 0x78) * *(data_2 + 0x38) + *(context + 0x74) * *(data_2 + 0x34)
        + *(context + 0x70) * *(data_2 + 0x30);
    long double fpu_val_6_7 = *(context + 0x84) * *(data_2 + 0x38) + *(context + 0x80) * *(data_2 + 0x34)
        + *(context + 0x7c) * *(data_2 + 0x30);
    long double fpu_val_6_11 = *(context + 0x90) * *(data_2 + 0x38) + *(context + 0x8c) * *(data_2 + 0x34)
        + *(context + 0x88) * *(data_2 + 0x30);
    long double fpu_val_7_10 = fpu_val_7_9 + item_18;
    long double fpu_val_6_13 = fpu_val_6_7 + *(context + 0x28) - g_bcab10;
    long double fpu_val_5_9 = fpu_val_6_11 + *(context + 0x30) - g_bcab18;
    long double fpu_val_4_5 = g_bcaaf4 * fpu_val_5_9;
    long double fpu_val_3_5 = g_bcaaf0 * fpu_val_6_13;
    item_18 = g_bcaae8 * fpu_val_5_9 + g_bcaae4 * fpu_val_6_13 + g_bcaae0 * fpu_val_7_10;
    long double fpu_val_7_12 = *(context + 0x98);
    long double fpu_val_6_15 = *(context + 0x9c);
    fpu_val_6_15 - fpu_val_7_12;
    float item_14_1 = fpu_val_4_5 + fpu_val_3_5 + g_bcaaec * fpu_val_7_10;
    float item_10_1 = g_bcab00 * fpu_val_5_9 + g_bcaafc * fpu_val_6_13 + g_bcaaf8 * fpu_val_7_10;
    long double fpu_val_7_13;

    if (!(*(&((fpu_val_6_15 < fpu_val_7_12 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_15, fpu_val_7_12) ? 1 : 0) << 0xa
            | (fpu_val_6_15 == fpu_val_7_12 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_13 = *(context + 0x9c);
    else
        fpu_val_7_13 = *(context + 0x98);

    long double fpu_val_6_16 = *(context + 0xa0);
    fpu_val_7_13 - fpu_val_6_16;
    long double fpu_val_7_16;

    if (*(&((fpu_val_7_13 < fpu_val_6_16 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, fpu_val_6_16) ? 1 : 0) << 0xa
            | (fpu_val_7_13 == fpu_val_6_16 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_16 = *(context + 0xa0);
    else
    {
        long double fpu_val_7_15 = *(context + 0x98);
        long double fpu_val_6_18 = *(context + 0x9c);
        fpu_val_6_18 - fpu_val_7_15;

        if (!(*(&((fpu_val_6_18 < fpu_val_7_15 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_18, fpu_val_7_15) ? 1 : 0) << 0xa
                | (fpu_val_6_18 == fpu_val_7_15 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_16 = *(context + 0x9c);
        else
            fpu_val_7_16 = *(context + 0x98);
    }

    return Render_DrawBoneMesh(&item_18, fpu_val_7_16 * *(*(*(*temp_val + 0xc) + 0xc) + 0x3c), param_2);
}
