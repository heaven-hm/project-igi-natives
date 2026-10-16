#include "004DA790-Render_SetupLighting_12.h"
/* 0x004da790 Render_SetupLighting_12 full linked: callers=3 callees=3 */
uint32_t sub_4da790(float* a1, double* a2, float a3, float a4, void** a5)

{
    int32_t arg_18;

    if (!a5)
        sub_4da180(&a5, &arg_18);

    void var_c;
    sub_4da300(&var_c, a1, &g_bcab08, a2, a5, arg_18);
    long double x87_r7_2 = g_bcab20 * 0.829999983f + 0.170000002f;
    long double temp0 = 1f;
    x87_r7_2 - temp0;

    if (*(&((x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        a3 = x87_r7_2 * a3;

    *a1 = *a1 * 1.52587891e-05f;
    uint32_t result = sub_499ff0(a3);
    a5 = result;
    long double x87_r7_11 = (a5 - 130f) * a4 * 1.52587891e-05f + *a1;
    *a1 = x87_r7_11;
    long double x87_r6 = 0f;
    x87_r6 - x87_r7_11;
    result = (x87_r6 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800;

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
