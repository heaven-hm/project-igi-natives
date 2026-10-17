// IGI native provenance: Terrain_RenderQuadtree_2 - 0x005125C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005125C0-Terrain_RenderQuadtree_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderQuadtree_2.h"
float Terrain_RenderQuadtree_2(float context, void* param_2) {
    float result = g_bcadc0;
    float result_1 = result;

    if (*(context + 0xd4) == 1)
    {
        int32_t* temp_1 = *(context + 0x74);

        if (temp_1)
        {
            void* source_1 = *(*(*temp_1 + 0xc) + 0xc);
            float item_18 = *(context + 0x20) - g_bcab08;
            void* data_4 = *(*(*temp_1 + 0xc) + 0xc);
            long double fpu_val_7_10 = *(context + 0x80) * *(data_4 + 0x38)
                + *(context + 0x7c) * *(data_4 + 0x34) + *(context + 0x78) * *(data_4 + 0x30);
            long double fpu_val_6_8 = *(context + 0x8c) * *(data_4 + 0x38)
                + *(context + 0x88) * *(data_4 + 0x34) + *(context + 0x84) * *(data_4 + 0x30);
            long double fpu_val_6_12 = *(context + 0x98) * *(data_4 + 0x38)
                + *(context + 0x94) * *(data_4 + 0x34) + *(context + 0x90) * *(data_4 + 0x30);
            long double fpu_val_7_11 = fpu_val_7_10 + item_18;
            long double fpu_val_6_14 = fpu_val_6_8 + *(context + 0x28) - g_bcab10;
            long double fpu_val_5_10 = fpu_val_6_12 + *(context + 0x30) - g_bcab18;
            long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_10;
            long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_14;
            item_18 = g_bcaae8 * fpu_val_5_10 + g_bcaae4 * fpu_val_6_14 + g_bcaae0 * fpu_val_7_11;
            float item_4_2 =
                g_bcab00 * fpu_val_5_10 + g_bcaafc * fpu_val_6_14 + g_bcaaf8 * fpu_val_7_11;
            long double fpu_val_7_13 = *(context + 0xa4);
            long double fpu_val_6_16 = *(context + 0xa8);
            fpu_val_6_16 - fpu_val_7_13;
            float item_14_2 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_11;
            long double fpu_val_7_14;

            if (!(*(&((fpu_val_6_16 < fpu_val_7_13 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_16, fpu_val_7_13) ? 1 : 0) << 0xa
                    | (fpu_val_6_16 == fpu_val_7_13 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_14 = *(context + 0xa8);
            else
                fpu_val_7_14 = *(context + 0xa4);

            long double fpu_val_6_17 = *(context + 0xac);
            fpu_val_7_14 - fpu_val_6_17;
            long double fpu_val_7_17;

            if (*(&((fpu_val_7_14 < fpu_val_6_17 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_14, fpu_val_6_17) ? 1 : 0) << 0xa
                    | (fpu_val_7_14 == fpu_val_6_17 ? 1 : 0) << 0xe) + 1) & 0x41)
                fpu_val_7_17 = *(context + 0xac);
            else
            {
                long double fpu_val_7_16 = *(context + 0xa4);
                long double fpu_val_6_19 = *(context + 0xa8);
                fpu_val_6_19 - fpu_val_7_16;

                if (!(*(&((fpu_val_6_19 < fpu_val_7_16 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_19, fpu_val_7_16) ? 1 : 0) << 0xa
                        | (fpu_val_6_19 == fpu_val_7_16 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_17 = *(context + 0xa8);
                else
                    fpu_val_7_17 = *(context + 0xa4);
            }

            result = Render_DrawBoneMesh(&item_18, fpu_val_7_17 * *(*(*(*temp_1 + 0xc) + 0xc) + 0x3c), 0);

            if (!result)
            {
                long double fpu_val_7_20 = item_4_2 - *(source_1 + 0x3c);
                long double f1_1 = *(param_2 + 8);
                fpu_val_7_20 - f1_1;
                result = (fpu_val_7_20 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_20, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_20 == f1_1 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                {
                    long double fpu_val_6_20 = result_1;
                    fpu_val_6_20 - fpu_val_7_20;
                    result = (fpu_val_6_20 < fpu_val_7_20 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_20, fpu_val_7_20) ? 1 : 0) << 0xa
                        | (fpu_val_6_20 == fpu_val_7_20 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x41))
                        fpu_val_7_20 = result_1;

                    *(param_2 + 8) = fpu_val_7_20;
                }
            }
        }
    }

    return result;
}
