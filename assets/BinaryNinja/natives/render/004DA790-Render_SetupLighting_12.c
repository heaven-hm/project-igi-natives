#include "Render_SetupLighting_12.h"
uint32_t Render_SetupLighting_12(float* a1, double* a2, float a3, float a4, void** a5)

{
    int32_t arg_18;

    if (!a5)
        Render_ComputeNormals_12(&a5, &arg_18);

    void v_c;
    Hazinglayers_Process(&v_c, a1, &g_bcab08, a2, a5, arg_18);
    long double x87_r7_2 = g_bcab20 * 0.829999983f + 0.170000002f;
    long double f0 = 1f;
    x87_r7_2 - f0;

    if (*(&((x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        a3 = x87_r7_2 * a3;

    *a1 = *a1 * 1.52587891e-05f;
    uint32_t result = Display_OpenDevice_18(a3);
    a5 = result;
    long double x87_r7_11 = (a5 - 130f) * a4 * 1.52587891e-05f + *a1;
    *a1 = x87_r7_11;
    long double fpu6 = 0f;
    fpu6 - x87_r7_11;
    result = (fpu6 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_11) ? 1 : 0) << 0xa
        | (fpu6 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 0x41))
    {
        *a1 = 0f;
        return result;
    }

    long double x87_r6_1 = 1f;
    x87_r6_1 - x87_r7_11;
    result = (x87_r6_1 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        *a1 = x87_r7_11;
        return result;
    }

    *a1 = 1f;
    return result;
}
