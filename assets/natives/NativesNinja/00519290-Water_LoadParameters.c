#include "00519290-Water_LoadParameters.h"
/* 0x00519290 Water_LoadParameters full linked: callers=0 callees=11 */
void* sub_519290(void* a1)

{
    int32_t eax = 0x40000000 >> (*(a1 + 0x4c24) & 0x1f);
    double var_20;
    memcpy(&var_20, a1 + 0x4bd0, 0x18);
    void* ecx_1 = *(a1 + 0xf0);
    int32_t eax_1 = eax << 1;
    var_20 = *(ecx_1 + 0xde0) + var_20;
    double var_18;
    double var_18_1 = *(ecx_1 + 0xde4) + var_18;
    int32_t ecx_3 = -(eax_1);
    double var_10;
    double var_10_1 = *(ecx_1 + 0xde8) + var_10;
    *(a1 + 0x4be8) = var_20 & ecx_3;
    *(a1 + 0x4bf0) = var_18_1 & ecx_3;
    *(a1 + 0x4bf8) = var_10_1 & ecx_3;
    long double x87_r7_12 = eax_1;
    *(a1 + 0x4c00) = x87_r7_12 + *(a1 + 0x4be8);
    *(a1 + 0x4c08) = x87_r7_12 + *(a1 + 0x4bf0);
    *(a1 + 0x4c10) = x87_r7_12 + *(a1 + 0x4bf8);
    memcpy(&var_20, a1 + 0x4be8, 0x18);
    long double x87_r7_13 = x87_r7_12 * 0.5;
    var_20 = x87_r7_13 + var_20;
    void* ecx_4 = *(a1 + 0xf0);
    double var_18_2 = x87_r7_13 + var_18_1;
    long double x87_r7_14 = x87_r7_13 + var_10_1;
    double var_10_2 = x87_r7_14;
    var_20 = var_20 - *(ecx_4 + 0xde0);
    double var_18_3 = var_18_2 - *(ecx_4 + 0xde4);
    double var_10_3 = x87_r7_14 - *(ecx_4 + 0xde8);
    *(a1 + 0x4be8) = *(a1 + 0x4be8) - *(ecx_4 + 0xde0);
    *(a1 + 0x4bf0) = *(a1 + 0x4bf0) - *(*(a1 + 0xf0) + 0xde4);
    *(a1 + 0x4bf8) = *(a1 + 0x4bf8) - *(*(a1 + 0xf0) + 0xde8);
    *(a1 + 0x4c00) = *(a1 + 0x4c00) - *(*(a1 + 0xf0) + 0xde0);
    *(a1 + 0x4c08) = *(a1 + 0x4c08) - *(*(a1 + 0xf0) + 0xde4);
    *(a1 + 0x4c10) = *(a1 + 0x4c10) - *(*(a1 + 0xf0) + 0xde8);
    long double x87_r7_29 = eax_1 * 0.000116257448f;
    *(a1 + 0x98) = x87_r7_29;
    void* eax_3 = *(a1 + 0xf0);
    *(a1 + 0x9c) = x87_r7_29;
    *(a1 + 0xa0) = x87_r7_29;
    int32_t ecx_10 = sub_4c6e70(eax_3, a1, &var_20, a1 + 0x4be8, a1 + 0x4c00);
    int32_t eax_4 = *(a1 + 0x4c34);
    int32_t var_28_2 = eax_4;

    if (eax_4 < 0x1000)
    {
        eax_4 = 0x1000;
        var_28_2 = 0x1000;
    }

    int32_t var_3c_1 = ecx_10;
    *(a1 + 0x4c34) = eax_4;
    int32_t esi_2 = 1 << (sub_499ff0(var_28_2) >> 3 & 0x1f);
    *(a1 + 0x4b94) = eax_1;
    int32_t eax_7;
    int32_t edx_7;
    edx_7 = HIGHD(eax_1);
    eax_7 = LOWD(eax_1);
    int32_t i = *(a1 + 0x4c28);
    long double x87_r7_34 =
        (*(a1 + 0x4c18) * ((eax_7 - edx_7) >> 1) + *(a1 + 0x30)) / esi_2 * esi_2;
    memcpy(a1 + 0x4938, a1 + 0x4be8, 0x18);
    *(a1 + 0x4c1c) = x87_r7_34;
    *(a1 + 0x4b88) = x87_r7_34;
    int32_t* eax_14 = &g_a80408;
    memcpy(a1 + 0x4950, a1 + 0x4c00, 0x18);
    int32_t ecx_14 = 0;

    while (*eax_14 != i)
    {
        eax_14 = &eax_14[0xc];
        ecx_14 += 1;

        if (eax_14 > 0xa81008)
            break;
    }

    int32_t edx_9 = *(a1 + 0x4c2c);
    *(a1 + 0x4b9c) = *(a1 + 0x4c30);
    int32_t eax_17 = ecx_14 * 0x30;
    *(a1 + 0x4b98) = edx_9;
    *(a1 + 0x4b78) = *(eax_17 + 0xa80420);
    long double x87_r6_17 = *(a1 + 0x4b78) * 1.10000002f;
    *(a1 + 0x4b7c) = *(eax_17 + 0xa80424);
    *(a1 + 0x4ba4) = *(eax_17 + 0xa80428);
    *(a1 + 0x4ba8) = *(eax_17 + 0xa8042c);
    *(a1 + 0x4b8c) = x87_r6_17 + x87_r7_34;
    *(a1 + 0x4980) = *(eax_17 + 0xa80410);
    *(a1 + 0x4984) = *(eax_17 + 0xa80414);
    *(a1 + 0x4988) = *(eax_17 + 0xa80418);
    *(a1 + 0x498c) = *(eax_17 + 0xa8041c);
    *(a1 + 0x4b4c) = g_b818a0;
    *(a1 + 0x4b50) = g_b818a4;
    int32_t eax_21 = *(a1 + 0x4c38);
    *(a1 + 0x4b54) = g_b818a8;
    void* eax_22 = sub_519690(eax_21);
    int32_t ecx_19 = *(a1 + 0x4c3c);
    *(a1 + 0xf8) = eax_22;
    void* eax_23 = sub_519690(ecx_19);
    int32_t edx_17 = *(a1 + 0x4c40);
    *(a1 + 0xfc) = eax_23;
    *(a1 + 0x100) = sub_519690(edx_17);
    *(a1 + 0x104) = sub_519690(*(a1 + 0x4c44));
    return sub_52d6c0(a1 + 0xf8);
}
