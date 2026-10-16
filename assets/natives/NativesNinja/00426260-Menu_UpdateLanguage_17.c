#include "00426260-Menu_UpdateLanguage_17.h"
/* 0x00426260 Menu_UpdateLanguage_17 full linked: callers=2 callees=0 */
int32_t* Menu_UpdateLanguage_17(float* a1, int32_t* a2, void* a3)

{
    void* eax = *(a3 + 0x4c);
    long double x87_r7_2 = *(a3 + 0x64) - *(eax + 0xf8) * 0.0263671875f;
    long double x87_r6_1 = *(eax + 0x720) + x87_r7_2 * 0.00999999978f;
    *a1 = x87_r6_1;
    long double temp0 = 0f;
    x87_r6_1 - temp0;
    eax = (x87_r6_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp0) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp0 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&eax + 1) & 1))
    {
        long double temp1_1 = 1f;
        x87_r6_1 - temp1_1;
        eax = (x87_r6_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&eax + 1) & 0x41))
            *a1 = 1f;
    }
    else
        *a1 = 0f;

    long double x87_r6_3 = *(a3 + 0x70);
    long double temp2 = 0f;
    x87_r6_3 - temp2;
    eax = (x87_r6_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp2) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp2 ? 1 : 0) << 0xe | 0x3800;

    if (*(&eax + 1) & 0x40)
    {
        long double temp3_1 = -5.0;
        x87_r7_2 - temp3_1;
        eax = (x87_r7_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe;

        if (!(*(&eax + 1) & 1))
        {
            *a2 = 0;
            return a2;
        }
    }

    *a2 = 0x3f800000;
    return eax;
}
