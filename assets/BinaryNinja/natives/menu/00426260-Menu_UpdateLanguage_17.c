#include "Menu_UpdateLanguage_17.h"
int32_t* Menu_UpdateLanguage_17(float* a1, int32_t* a2, void* a3)

{
    void* valA = *(a3 + 0x4c);
    long double x87_r7_2 = *(a3 + 0x64) - *(valA + 0xf8) * 0.0263671875f;
    long double x87_r6_1 = *(valA + 0x720) + x87_r7_2 * 0.00999999978f;
    *a1 = x87_r6_1;
    long double f0 = 0f;
    x87_r6_1 - f0;
    valA = (x87_r6_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f0) ? 1 : 0) << 0xa
        | (x87_r6_1 == f0 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&valA + 1) & 1))
    {
        long double f1_1 = 1f;
        x87_r6_1 - f1_1;
        valA = (x87_r6_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&valA + 1) & 0x41))
            *a1 = 1f;
    }
    else
        *a1 = 0f;

    long double x87_r6_3 = *(a3 + 0x70);
    long double f2 = 0f;
    x87_r6_3 - f2;
    valA = (x87_r6_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f2) ? 1 : 0) << 0xa
        | (x87_r6_3 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (*(&valA + 1) & 0x40)
    {
        long double f3_1 = -5.0;
        x87_r7_2 - f3_1;
        valA = (x87_r7_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&valA + 1) & 1))
        {
            *a2 = 0;
            return a2;
        }
    }

    *a2 = 0x3f800000;
    return valA;
}
