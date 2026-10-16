#include "gi_platform.h"
#include "004D0510-Render_DrawSplineMesh.h"
int32_t Render_DrawSplineMesh(float a1, int32_t a2)

{
    float v_18 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - g_bcab08;
    int32_t* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
    void* valA2 = *(*(*tmpD + 0xc) + 0xc);
    long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a1 + 0x78)) * *(valA2 + 0x38) + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * *(valA2 + 0x34)
        + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * *(valA2 + 0x30);
    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(a1 + 0x84)) * *(valA2 + 0x38) + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * *(valA2 + 0x34)
        + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * *(valA2 + 0x30);
    long double x87_r6_11 = (*(int32_t*)(uintptr_t)(a1 + 0x90)) * *(valA2 + 0x38) + (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * *(valA2 + 0x34)
        + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * *(valA2 + 0x30);
    long double x87_r7_10 = x87_r7_9 + v_18;
    long double x87_r6_13 = x87_r6_7 + (*(int32_t*)(uintptr_t)(a1 + 0x28)) - g_bcab10;
    long double x87_r5_9 = x87_r6_11 + (*(int32_t*)(uintptr_t)(a1 + 0x30)) - g_bcab18;
    long double x87_r4_5 = g_bcaaf4 * x87_r5_9;
    long double x87_r3_5 = g_bcaaf0 * x87_r6_13;
    v_18 = g_bcaae8 * x87_r5_9 + g_bcaae4 * x87_r6_13 + g_bcaae0 * x87_r7_10;
    long double x87_r7_12 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    long double x87_r6_15 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    x87_r6_15 - x87_r7_12;
    float v_14_1 = x87_r4_5 + x87_r3_5 + g_bcaaec * x87_r7_10;
    float v_10_1 = g_bcab00 * x87_r5_9 + g_bcaafc * x87_r6_13 + g_bcaaf8 * x87_r7_10;
    long double x87_r7_13;

    if (!(*(&((x87_r6_15 < x87_r7_12 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_15, x87_r7_12) ? 1 : 0) << 0xa
            | (x87_r6_15 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_13 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    else
        x87_r7_13 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    long double x87_r6_16 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r7_13 - x87_r6_16;
    long double x87_r7_16;

    if (*(&((x87_r7_13 < x87_r6_16 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, x87_r6_16) ? 1 : 0) << 0xa
            | (x87_r7_13 == x87_r6_16 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_16 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
    {
        long double x87_r7_15 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
        long double x87_r6_18 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        x87_r6_18 - x87_r7_15;

        if (!(*(&((x87_r6_18 < x87_r7_15 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_18, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r6_18 == x87_r7_15 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_16 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        else
            x87_r7_16 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    }

    return Render_DrawBoneMesh(&v_18, x87_r7_16 * *(*(*(*tmpD + 0xc) + 0xc) + 0x3c), a2);
}
