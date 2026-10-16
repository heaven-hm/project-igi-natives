#include "Render_ClipMesh_14.h"
int32_t* Render_ClipMesh_14(void* a1, float* a2, int32_t* a3, int32_t a4)

{
    int32_t tmpD5 = g_a5e340;
    int32_t ctxB = g_a5e348;
    int32_t* result_1 = g_a5e33c;
    int32_t dstD = 0;

    if (tmpD5 > 0)
    {
        int32_t* result = result_1;

        do
        {
            float* objC3 = *result * ctxB + g_a5e338;

            if (objC3[6] == a1)
            {
                long double fpu7 = *objC3;
                long double f0 = *a2;
                fpu7 - f0;
                result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
                    | (fpu7 == f0 ? 1 : 0) << 0xe;
                long double x87_r7_1;

                if (!(*(&result + 1) & 1))
                    x87_r7_1 = *a2;
                else
                    x87_r7_1 = *objC3;

                *objC3 = x87_r7_1;
                long double x87_r7_2 = objC3[1];
                long double fpu6 = a2[1];
                fpu6 - x87_r7_2;
                result = (fpu6 < x87_r7_2 ? 1 : 0) << 8
                    | (FCMP_UO(fpu6, x87_r7_2) ? 1 : 0) << 0xa
                    | (fpu6 == x87_r7_2 ? 1 : 0) << 0xe;
                long double x87_r7_3;

                if (*(&result + 1) & 0x41)
                    x87_r7_3 = a2[1];
                else
                    x87_r7_3 = objC3[1];

                objC3[1] = x87_r7_3;
                long double x87_r7_4 = objC3[2];
                long double f1 = *a3;
                x87_r7_4 - f1;
                result = (x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f1 ? 1 : 0) << 0xe;
                long double x87_r7_5;

                if (*(&result + 1) & 0x41)
                    x87_r7_5 = *a3;
                else
                    x87_r7_5 = objC3[2];

                objC3[2] = x87_r7_5;
                long double x87_r7_6 = objC3[3];
                long double x87_r6_1 = a3[1];
                x87_r6_1 - x87_r7_6;
                result = (x87_r6_1 < x87_r7_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 1))
                {
                    objC3[3] = a3[1];
                    return result;
                }

                objC3[3] = objC3[3];
                return result;
            }

            dstD += 1;
            result = &result[1];
        } while (dstD < tmpD5);
    }

    int32_t* valA3 = result_1[tmpD5] * ctxB + g_a5e338;
    *(g_a5e34c + valA3) = tmpD5;
    int32_t* objC6 = a2;
    g_a5e340 += 1;
    valA3[6] = a1;
    valA3[5] = a4;
    *valA3 = *objC6;
    valA3[1] = objC6[1];
    valA3[2] = *a3;
    valA3[3] = a3[1];
    valA3[4] = g_a5e358 + 1;
    valA3[7] = 0;
    return Render_DrawBoneMesh_15(a1, objC6, a3, a4);
}
