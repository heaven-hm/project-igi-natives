// Original IGI.EXE function: Terrain_BuildMipMaps_11 (VA 0x0051FBA0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_BuildMipMaps_11.h"
int32_t Terrain_BuildMipMaps_11(float a1, void* a2, int32_t a3)

{
    float srcS = a1;
    long double fpu7 = *(srcS + 0x1a0);
    long double f1 = *(srcS + 0x1a8);
    fpu7 - f1;
    int16_t result = (fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_51fbd1:
        int32_t objC1 = *(srcS + 0x1a0);
        int32_t valA1 = (objC1 + 1) & 0x80000001;

        if (valA1 < 0)
            valA1 = ((valA1 - 1) | 0xfffffffe) + 1;

        long double x87_r7_3 = *(srcS + 0x1a0) - objC1;
        long double x87_r6_2 = 1f - x87_r7_3;
        int32_t v_20_1 =
            x87_r6_2 * *(srcS + (objC1 << 2) + 0x150) + x87_r7_3 * *(srcS + (valA1 << 2) + 0x150);
        a1 = x87_r6_2 * *(srcS + (objC1 << 2) + 0x158) + x87_r7_3 * *(srcS + (valA1 << 2) + 0x158);
        void* objC3 = srcS + objC1 * 0x18;
        a3 = x87_r6_2 * *(srcS + (objC1 << 2) + 0x160) + x87_r7_3 * *(srcS + (valA1 << 2) + 0x160);
        void* valA4 = srcS + valA1 * 0x18;
        double v_18 = x87_r6_2 * *(srcS + ((objC1 * 3 + 0x1e) << 3))
            + x87_r7_3 * *(srcS + ((valA1 * 3 + 0x1e) << 3));
        double v_10_1 = x87_r7_3 * *(valA4 + 0xf8) + x87_r6_2 * *(objC3 + 0xf8);
        double v_8_1 = x87_r7_3 * *(valA4 + 0x100) + x87_r6_2 * *(objC3 + 0x100);
        Sys_ReadFileBlock_12(a2 + 0x70, v_20_1, a1, a3);
        long double x87_r7_7 = *(a2 + 0x9c);
        long double x87_r6_7 = *(a2 + 0xa0);
        x87_r6_7 - x87_r7_7;
        long double x87_r7_8;

        if (!(*(&((x87_r6_7 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_8 = *(a2 + 0xa0);
        else
            x87_r7_8 = *(a2 + 0x9c);

        long double x87_r6_8 = *(a2 + 0x98);
        x87_r6_8 - x87_r7_8;
        long double x87_r7_10;

        if (*(&((x87_r6_8 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_11 = *(a2 + 0x9c);
            long double x87_r6_9 = *(a2 + 0xa0);
            x87_r6_9 - x87_r7_11;

            if (!(*(&((x87_r6_9 < x87_r7_11 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_9, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_11 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_10 = *(a2 + 0xa0);
            else
                x87_r7_10 = *(a2 + 0x9c);
        }
        else
            x87_r7_10 = *(a2 + 0x98);

        long double x87_r7_13 = Render_ComputeNormals(*(a2 + 0x6c)) * x87_r7_10;
        result = WorldObject_CommitTransform(*(a2 + 0x68), a2, &v_18, x87_r7_13);
        int32_t tmpD5 = *(srcS + 0x1a4);
        *(srcS + 0x1a8) = *(srcS + 0x1a0);
        *(srcS + 0x1ac) = tmpD5;
    }
    else
    {
        result = a3;

        if (result)
            goto label_51fbd1;
    }

    return result;
}
