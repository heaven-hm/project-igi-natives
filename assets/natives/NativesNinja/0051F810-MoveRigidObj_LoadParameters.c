#include "0051F810-MoveRigidObj_LoadParameters.h"
/* 0x0051f810 MoveRigidObj_LoadParameters full linked: callers=0 callees=7 */
int32_t* sub_51f810(uint32_t a1)

{
    *(a1 + 0x1a8) = 0;
    int32_t var_20;
    __builtin_memset(&var_20, 0, 0x18);
    *(a1 + 0x1ac) = 0xbff00000;
    *(a1 + 0xe8) = sub_4e0930(nullptr, a1);
    *(a1 + 0x180) = 0;
    sub_4f1320(a1 + 0x1b4);
    sub_4c5710(g_a44344, a1, 0);
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c7140(g_a44344, a1, &var_20, x87_r7_6, 2);
    int32_t* ecx_2 = a1 + 0x158;
    int32_t* result = a1 + 0xf8;
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        result[-2] = 0;
        result[-1] = 0;
        *result = 0;
        result[1] = 0;
        result[2] = 0;
        result[3] = 0;
        ecx_2[-2] = 0;
        *ecx_2 = 0;
        ecx_2[2] = 0;
        __builtin_memset(&result[0xa], 0, 0x18);
        ecx_2[4] = 0xbf800000;
        ecx_2[6] = 0xbf800000;
        ecx_2[8] = 0xbf800000;
        ecx_2 = &ecx_2[1];
        result = &result[6];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x204) = 0;
    return result;
}
