#include "0043D010-Elevator_LoadParameters.h"
/* 0x0043d010 Elevator_LoadParameters full linked: callers=0 callees=12 */
char* Elevator_LoadParameters(int32_t* a1)

{
    int32_t eax = g_a44344;
    int32_t i = 0;
    int32_t var_20;
    __builtin_memset(&var_20, 0, 0x18);
    sub_4c5710(eax, a1, 0);
    long double x87_r7 = a1[0x27];
    long double x87_r6 = a1[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = a1[0x28];
    else
        x87_r7_1 = a1[0x27];

    long double x87_r6_1 = a1[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = a1[0x27];
        long double x87_r6_2 = a1[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = a1[0x28];
        else
            x87_r7_3 = a1[0x27];
    }
    else
        x87_r7_3 = a1[0x26];

    long double x87_r7_6 = sub_4d0950(a1[0x1b]) * x87_r7_3;
    sub_4c7140(g_a44344, a1, &var_20, x87_r7_6, 2);
    __builtin_memset(&a1[0x3c], 0, 0x18);
    a1[0x48] = 0x3f800000;
    a1[0x49] = 0;
    a1[0x4a] = 0;
    a1[0x4b] = 0;
    a1[0x4c] = 0x3f800000;
    a1[0x4d] = 0;
    a1[0x4e] = 0;
    a1[0x4f] = 0;
    a1[0x50] = 0x3f800000;
    a1[0x51] = 0;
    a1[0x60] = 0xffffffff;
    a1[0x5c] = 0;
    a1[0x61] = 0;
    a1[0x64] = 0;
    a1[0x65] = 0x40a00000;
    a1[0x66] = 0x3f7d70a4;
    a1[0x6f] = 0;
    __builtin_memset(&a1[0x67], 0, 0x14);
    int32_t* edi = &a1[0x71];

    do
    {
        *(a1 + i + 0x1b0) = 0;
        sub_4f1320(edi);
        i += 1;
        edi = &edi[0x14];
    } while (i < 0xa);

    sub_4f1320(&a1[0x139]);
    sub_4f1320(&a1[0x14d]);
    sub_4f1320(&a1[0x161]);
    memcpy(&a1[0x42], &a1[8], 0x18);
    a1[0x70] = 0;
    memcpy(&a1[0x52], &a1[0x1c], 0x28);
    a1[0x175] = 0;
    *(a1 + 0x5d5) = 0;
    *(a1 + 0x5d6) = 0;
    *(a1 + 0x5d7) = 0;
    a1[0x176] = 0;
    a1[0x190] = 1;
    char* result = a1 + 0x5d9;
    int32_t i_2 = 3;
    int32_t i_1;

    do
    {
        *result = 0;
        result = &result[0x20];
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    a1[0x18f] = 0;
    a1[0x191] = 0xffffffff;
    a1[0x63] = 0;
    *(a1 + 0x18d) = 0;
    return result;
}
