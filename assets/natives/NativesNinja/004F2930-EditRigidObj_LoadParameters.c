#include "004F2930-EditRigidObj_LoadParameters.h"
/* 0x004f2930 EditRigidObj_LoadParameters full linked: callers=0 callees=7 */
int32_t sub_4f2930(int32_t* a1)

{
    int32_t eax = g_a44344;
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
    double* eax_4 = sub_4c3440(a1);
    sub_4dccb0(g_a44344, a1, eax_4);
    __builtin_memset(&a1[0x3c], 0, 0x18);
    a1[0x42] = 0x3f800000;
    a1[0x43] = 0;
    a1[0x44] = 0;
    a1[0x45] = 0;
    a1[0x46] = 0x3f800000;
    a1[0x47] = 0;
    a1[0x48] = 0;
    a1[0x49] = 0;
    a1[0x4a] = 0x3f800000;
    a1[0x4b] = 0;
    a1[0x4c] = 0;
    a1[0x50] = 0x3f800000;
    a1[0x51] = 0x3f800000;
    a1[0x52] = 0x3f800000;
    a1[0x53] = 0;
    a1[0x54] = 0;
    a1[0x55] = 0;
    a1[0x66] = 1;
    return 0x3f800000;
}
