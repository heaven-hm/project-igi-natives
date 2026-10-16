#include "004CE410-DynObj_RegisterSymbol_12.h"
/* 0x004ce410 DynObj_RegisterSymbol_12 full linked: callers=11 callees=3 */
int32_t sub_4ce410(float a1, double* a2, double* a3, char a4, float a5, int32_t a6, int32_t a7, float* a8)

{
    g_a44394 += 1;
    int16_t eax_2;
    eax_2 = a4;
    double* var_8c = a2;
    double* var_88 = a3;
    char var_84 = eax_2;
    float var_80 = a5;
    float var_7c = a1;
    char var_78 = 0;
    float var_74 = 1f;

    for (int32_t i = 0; i < 6; i += 1)
    {
        if ((i == 1 || !i || i == 4 || i == 5) && a7 & sub_4c58b0(i))
            sub_4c8130(a1, 8, &var_8c, a2, a3, 1, a6, i);
    }

    long double x87_r7 = var_74;
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40) && a6 & 0x80000000)
    {
        void var_70;
        sub_4cc2a0(a1, &var_70, a2, a3, 1, 0xff, nullptr, 0x80000000);
        int32_t var_18;

        if (var_18)
        {
            var_74 = 0f;
            var_78 = 1;
        }
    }

    if (a8)
        *a8 = var_74;

    int32_t result = 0;
    result = !var_78;
    return result;
}
