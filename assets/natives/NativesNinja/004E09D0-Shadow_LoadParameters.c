#include "004E09D0-Shadow_LoadParameters.h"
/* 0x004e09d0 Shadow_LoadParameters full linked: callers=0 callees=2 */
int32_t* sub_4e09d0(float a1)

{
    float ebx = a1;
    int32_t* result = *(ebx + 0x28);

    if (!*result || !**(ebx + 0x2c))
        return result;

    long double x87_r7_4 = (1.0 - **(ebx + 0x30) / *(ebx + 0x38)) * 0.800000012f;
    long double temp0_1 = 0.300000012f;
    x87_r7_4 - temp0_1;

    if (!(*(&((x87_r7_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_1 = 0f;
        x87_r6_1 - x87_r7_4;

        if (*(&((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r6_2 = 1f;
            x87_r6_2 - x87_r7_4;

            if (*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_4 = 1f;
        }
        else
            x87_r7_4 = 0f;
    }
    else
        x87_r7_4 = 0.300000012f;

    *(ebx + 0x118) = g_548708[0];
    *(ebx + 0x11c) = g_548708[4][0];
    *(ebx + 0x120) = g_548708[8][0];
    *(ebx + 0x118) = x87_r7_4 * *(ebx + 0x118);
    int32_t* eax_2 = *(ebx + 0x34);
    *(ebx + 0x11c) = x87_r7_4 * *(ebx + 0x11c);
    *(ebx + 0x120) = x87_r7_4 * *(ebx + 0x120);
    float var_28;
    sub_4b4010(&var_28, eax_2);
    long double x87_r7_10 = -(*(ebx + 0x3c));
    *(ebx + 0x4c) = x87_r7_10;
    *(ebx + 0x5c) = x87_r7_10;
    *(ebx + 0x64) = x87_r7_10;
    long double x87_r6_7 = *(ebx + 0x3c);
    int32_t edx_5 = *(ebx + 0x3c);
    *(ebx + 0x68) = x87_r7_10;
    *(ebx + 0x44) = edx_5;
    *(ebx + 0x48) = 0x41200000;
    *(ebx + 0x54) = 0x41200000;
    float var_10;
    a1 = var_10 * 10f;
    *(ebx + 0x60) = 0x41200000;
    *(ebx + 0x6c) = 0x41200000;
    *(ebx + 0x40) = edx_5;
    *(ebx + 0x50) = edx_5;
    *(ebx + 0x58) = edx_5;
    float var_1c;
    float var_50_1 = x87_r6_7 * var_1c;
    long double x87_r5_7 = x87_r6_7 * var_28;
    *(ebx + 0x40) = x87_r5_7 + var_50_1 + a1;
    float var_c;
    float var_58_1 = var_c * 10f;
    float var_18;
    float var_4c_1 = x87_r6_7 * var_18;
    float var_24;
    long double x87_r5_15 = x87_r6_7 * var_24;
    float var_8;
    float var_54_1 = var_8 * 10f;
    float var_14;
    float var_48_1 = x87_r6_7 * var_14;
    float var_20;
    long double x87_r6_8 = x87_r6_7 * var_20;
    long double x87_r6_12 = x87_r7_10 * var_28;
    *(ebx + 0x44) = x87_r5_15 + var_4c_1 + var_58_1;
    *(ebx + 0x48) = x87_r6_8 + var_48_1 + var_54_1;
    int32_t esi_1 = *(ebx + 0x24);
    int32_t edi_2 = *(ebx + 0x74) + 0x20;
    long double x87_r6_16 = x87_r7_10 * var_24;
    *(ebx + 0x4c) = x87_r6_12 + var_50_1 + a1;
    long double x87_r6_20 = x87_r7_10 * var_20;
    *(ebx + 0x50) = x87_r6_16 + var_4c_1 + var_58_1;
    *(ebx + 0x54) = x87_r6_20 + var_48_1 + var_54_1;
    float var_48_2 = x87_r7_10 * var_1c;
    *(ebx + 0x58) = x87_r5_7 + var_48_2 + a1;
    float var_44_2 = x87_r7_10 * var_18;
    long double x87_r7_11 = x87_r7_10 * var_14;
    *(ebx + 0x5c) = x87_r5_15 + var_44_2 + var_58_1;
    *(ebx + 0x60) = x87_r6_8 + x87_r7_11 + var_54_1;
    *(ebx + 0x64) = x87_r6_12 + var_48_2 + a1;
    *(ebx + 0x68) = x87_r6_16 + var_44_2 + var_58_1;
    *(ebx + 0x6c) = x87_r6_20 + x87_r7_11 + var_54_1;
    memcpy(edi_2, esi_1, 0x18);
    int32_t eax_8 = *(ebx + 0x70);
    *(ebx + 0xc0) = eax_8;
    *(ebx + 0x110) = eax_8;
    void* ebx_1 = *(ebx + 0x74);
    int32_t eax_9 = 0;
    eax_9 = *(ebx_1 + 0x1c);
    return (*((eax_9 << 2) + &g_a982e0))(ebx_1, 0);
}
