#include "00481780-ExplodeObject_LoadParameters.h"
/* 0x00481780 ExplodeObject_LoadParameters full linked: callers=0 callees=10 */
int32_t* sub_481780(float a1)

{
    int32_t* esi = a1;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c1790(Level_InitTextures_4(), esi);
    sub_4c5710(g_a44344, esi, 0);
    long double x87_r7 = esi[0x27];
    long double x87_r6 = esi[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = esi[0x28];
    else
        x87_r7_1 = esi[0x27];

    long double x87_r6_1 = esi[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = esi[0x27];
        long double x87_r6_2 = esi[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = esi[0x28];
        else
            x87_r7_3 = esi[0x27];
    }
    else
        x87_r7_3 = esi[0x26];

    long double x87_r7_6 = sub_4d0950(esi[0x1b]) * x87_r7_3;
    sub_4c7140(g_a44344, esi, &var_18, x87_r7_6, 2);
    double* eax_5 = sub_4c3440(esi);
    sub_4dccb0(esi[0x1a], esi, eax_5);
    esi[0x1c] = 0x3f800000;
    esi[0x1d] = 0;
    esi[0x1e] = 0;
    esi[0x1f] = 0;
    esi[0x20] = 0x3f800000;
    esi[0x21] = 0;
    esi[0x22] = 0;
    esi[0x23] = 0;
    esi[0x24] = 0x3f800000;
    esi[0x25] = 0;
    esi[0x42] = 0x3f800000;
    esi[0x43] = 0;
    esi[0x44] = 0;
    esi[0x45] = 0;
    esi[0x46] = 0x3f800000;
    esi[0x47] = 0;
    esi[0x48] = 0;
    esi[0x49] = 0;
    esi[0x4a] = 0x3f800000;
    esi[0x4b] = 0;
    esi[0x5c] = 0;
    esi[0x60] = 0;
    esi[0x79] = 0;
    esi[0x64] = 0;
    *(esi + 0x191) = 0;
    esi[0x7a] = 0;
    esi[0x7c] = 0x3f800000;
    memcpy(&esi[0x7e],
        "\x00\x00\x00\x40\x00\x00\xc0\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x03\x00\x00\x"
    "00\x03\x00\x00\x00",
        0x1c);
    esi[0x7d] = 0xffffffff;
    int32_t* result = sub_4f1320(&esi[0x65]);
    esi[0x85] = 0;
    esi[0x8d] = 1;
    return result;
}
