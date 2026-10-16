#include "00523110-Light_ApplyLightmap_2.h"
/* 0x00523110 Light_ApplyLightmap_2 full linked: callers=1 callees=9 */
int32_t* sub_523110(int32_t a1)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc(0xec, 4);
    int32_t ebx_2 = (a1 * a1) << 2;
    int32_t edi_1 = a1 >> 1;
    *result = a1;
    result[1] = edi_1;
    result[2] = Mem_Alloc(ebx_2, 4);
    result[7] = Mem_Alloc(ebx_2, 4);
    int32_t edi_3 = (edi_1 * a1) << 2;
    result[0xc] = Mem_Alloc(ebx_2, 4);
    result[0xd] = Mem_Alloc(edi_3, 4);
    int32_t* ebx_3 = &result[8];
    int32_t i_3 = 4;
    int32_t i;

    do
    {
        ebx_3[-5] = Mem_Alloc(edi_3, 4);
        *ebx_3 = Mem_Alloc(edi_3, 4);
        ebx_3 = &ebx_3[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    int32_t eax_6 = *result;
    int32_t edx = 0;
    long double x87_r7 = 0f;
    int32_t var_4 = 0;
    a1 = eax_6;

    if (eax_6 > 0)
    {
        do
        {
            int32_t ecx_1 = 0;
            int32_t var_8_1 = 0;

            if (eax_6 > 0)
            {
                do
                {
                    long double x87_r5_1 = a1;
                    long double x87_r4_2 = x87_r5_1 * 0.5f;
                    float var_4_1 = (var_8_1 - x87_r4_2 + 0.5f) / x87_r4_2;
                    a1 = (var_4 - x87_r4_2 + 0.5f) / x87_r4_2;
                    long double x87_r5_2 = 2f / x87_r5_1;
                    long double x87_r4_7 = a1 * a1 + var_4_1 * var_4_1 + 1f;
                    long double x87_r3_15 =
                        1f / (x87_r4_7 * x87_r4_7 * 3.14159274f) * x87_r5_2 * x87_r5_2;
                    *(result[0xc] + ((eax_6 * edx + ecx_1) << 2)) = x87_r3_15;
                    x87_r7 = x87_r7 + x87_r3_15;
                    long double x87_r4_10 = g_a83b40;
                    x87_r4_10 - x87_r3_15;

                    if (*(&((x87_r4_10 < x87_r3_15 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_10, x87_r3_15) ? 1 : 0) << 0xa
                            | (x87_r4_10 == x87_r3_15 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                        g_a83b40 = x87_r3_15;

                    eax_6 = *result;
                    ecx_1 += 1;
                    var_8_1 = ecx_1;
                    a1 = eax_6;
                } while (ecx_1 < eax_6);
            }

            eax_6 = *result;
            edx += 1;
            var_4 = edx;
            a1 = eax_6;
        } while (edx < eax_6);
    }

    int32_t ecx_2 = *result;
    int32_t i_1 = 0;
    int32_t i_2 = 0;
    int32_t eax_12;
    int32_t edx_1;
    edx_1 = HIGHD(ecx_2);
    eax_12 = LOWD(ecx_2);
    a1 = ecx_2;

    if ((eax_12 - edx_1) >> 1 > 0)
    {
        int32_t eax_18;
        int32_t edx_3;

        do
        {
            int32_t edx_2 = 0;
            int32_t var_8_2 = 0;

            if (ecx_2 > 0)
            {
                do
                {
                    long double x87_r5_5 = a1;
                    long double x87_r4_12 = x87_r5_5 * 0.5f;
                    float var_4_2 = (var_8_2 - x87_r4_12 + 0.5f) / x87_r4_12;
                    a1 = (i_2 - x87_r4_12 + 0.5f) / x87_r4_12;
                    long double x87_r5_6 = 2f / x87_r5_5;
                    long double x87_r4_15 = a1;
                    long double temp1_1 = 0f;
                    x87_r4_15 - temp1_1;
                    long double x87_r4_16 = a1;

                    if (*(&((x87_r4_15 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_15, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r4_15 == temp1_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                        x87_r4_16 = -(x87_r4_16);

                    long double x87_r3_27 = a1 * a1 + var_4_2 * var_4_2 + 1f;
                    long double x87_r5_8 =
                        x87_r5_6 * x87_r5_6 * x87_r4_16 / (x87_r3_27 * x87_r3_27 * 3.14159274f);
                    *(result[0xd] + ((ecx_2 * i_1 + edx_2) << 2)) = x87_r5_8;
                    x87_r7 = x87_r7 + x87_r5_8 * 4f;
                    long double x87_r4_20 = g_a83b2c;
                    x87_r4_20 - x87_r5_8;

                    if (*(&((x87_r4_20 < x87_r5_8 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_20, x87_r5_8) ? 1 : 0) << 0xa
                            | (x87_r4_20 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                        g_a83b2c = x87_r5_8;

                    ecx_2 = *result;
                    edx_2 += 1;
                    var_8_2 = edx_2;
                    a1 = ecx_2;
                } while (edx_2 < ecx_2);
            }

            ecx_2 = *result;
            i_1 += 1;
            i_2 = i_1;
            edx_3 = HIGHD(ecx_2);
            eax_18 = LOWD(ecx_2);
            a1 = ecx_2;
        } while (i_1 < (eax_18 - edx_3) >> 1);
    }

    Qhash_Reset();
    return result;
}
