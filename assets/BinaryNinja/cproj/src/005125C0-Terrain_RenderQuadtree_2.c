#include "gi_platform.h"
#include "005125C0-Terrain_RenderQuadtree_2.h"
float Terrain_RenderQuadtree_2(float a1, void* a2) __location("valA")

{
    float result = g_bcadc0;
    float result_1 = result;

    if ((*(int32_t*)(uintptr_t)(a1 + 0xd4)) == 1)
    {
        int32_t* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x74));

        if (tmpD1)
        {
            void* srcS1 = *(*(*tmpD1 + 0xc) + 0xc);
            float v_18 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - g_bcab08;
            void* valA4 = *(*(*tmpD1 + 0xc) + 0xc);
            long double x87_r7_10 = (*(int32_t*)(uintptr_t)(a1 + 0x80)) * *(valA4 + 0x38)
                + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * *(valA4 + 0x34) + (*(int32_t*)(uintptr_t)(a1 + 0x78)) * *(valA4 + 0x30);
            long double x87_r6_8 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * *(valA4 + 0x38)
                + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * *(valA4 + 0x34) + (*(int32_t*)(uintptr_t)(a1 + 0x84)) * *(valA4 + 0x30);
            long double x87_r6_12 = (*(int32_t*)(uintptr_t)(a1 + 0x98)) * *(valA4 + 0x38)
                + (*(int32_t*)(uintptr_t)(a1 + 0x94)) * *(valA4 + 0x34) + (*(int32_t*)(uintptr_t)(a1 + 0x90)) * *(valA4 + 0x30);
            long double x87_r7_11 = x87_r7_10 + v_18;
            long double x87_r6_14 = x87_r6_8 + (*(int32_t*)(uintptr_t)(a1 + 0x28)) - g_bcab10;
            long double x87_r5_10 = x87_r6_12 + (*(int32_t*)(uintptr_t)(a1 + 0x30)) - g_bcab18;
            long double x87_r4_6 = g_bcaaf4 * x87_r5_10;
            long double x87_r3_6 = g_bcaaf0 * x87_r6_14;
            v_18 = g_bcaae8 * x87_r5_10 + g_bcaae4 * x87_r6_14 + g_bcaae0 * x87_r7_11;
            float v_4_2 =
                g_bcab00 * x87_r5_10 + g_bcaafc * x87_r6_14 + g_bcaaf8 * x87_r7_11;
            long double x87_r7_13 = (*(int32_t*)(uintptr_t)(a1 + 0xa4));
            long double x87_r6_16 = (*(int32_t*)(uintptr_t)(a1 + 0xa8));
            x87_r6_16 - x87_r7_13;
            float v_14_2 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_11;
            long double x87_r7_14;

            if (!(*(&((x87_r6_16 < x87_r7_13 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_16, x87_r7_13) ? 1 : 0) << 0xa
                    | (x87_r6_16 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0xa8));
            else
                x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0xa4));

            long double x87_r6_17 = (*(int32_t*)(uintptr_t)(a1 + 0xac));
            x87_r7_14 - x87_r6_17;
            long double x87_r7_17;

            if (*(&((x87_r7_14 < x87_r6_17 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, x87_r6_17) ? 1 : 0) << 0xa
                    | (x87_r7_14 == x87_r6_17 ? 1 : 0) << 0xe) + 1) & 0x41)
                x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0xac));
            else
            {
                long double x87_r7_16 = (*(int32_t*)(uintptr_t)(a1 + 0xa4));
                long double x87_r6_19 = (*(int32_t*)(uintptr_t)(a1 + 0xa8));
                x87_r6_19 - x87_r7_16;

                if (!(*(&((x87_r6_19 < x87_r7_16 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_19, x87_r7_16) ? 1 : 0) << 0xa
                        | (x87_r6_19 == x87_r7_16 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0xa8));
                else
                    x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0xa4));
            }

            result = Render_DrawBoneMesh(&v_18, x87_r7_17 * *(*(*(*tmpD1 + 0xc) + 0xc) + 0x3c), 0);

            if (!result)
            {
                long double x87_r7_20 = v_4_2 - *(srcS1 + 0x3c);
                long double f1_1 = (*(int32_t*)(uintptr_t)(a2 + 8));
                x87_r7_20 - f1_1;
                result = (x87_r7_20 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_20, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_20 == f1_1 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                {
                    long double x87_r6_20 = result_1;
                    x87_r6_20 - x87_r7_20;
                    result = (x87_r6_20 < x87_r7_20 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_20, x87_r7_20) ? 1 : 0) << 0xa
                        | (x87_r6_20 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x41))
                        x87_r7_20 = result_1;

                    (*(int32_t*)(uintptr_t)(a2 + 8)) = x87_r7_20;
                }
            }
        }
    }

    return result;
}
