#include "004A4D10-BandFilter_Cleanup_6.h"
/* 0x004a4d10 BandFilter_Cleanup_6 full linked: callers=0 callees=11 */
int32_t sub_4a4d10(int32_t a1)

{
    int32_t edi = a1;
    void* eax_1 = sub_4b72e0(sub_4a4c90, 0x10, *(edi + 0x2c));
    *(eax_1 + 4) = g_935c08;
    *(eax_1 + 0xc) = edi;
    char eax_2 = QHash_ValueGet();

    if (!eax_2)
        QHash_ValueSet();

    int32_t var_3c = g_936038;
    int32_t edx_2 = var_3c / 0x18;
    int32_t temp1 = edx_2 / 0x3c % 0x3c;
    int32_t var_5c_1 = var_3c % 0x18;
    int32_t var_60 = edx_2 % 0x3c;
    int32_t var_64 = temp1;
    int32_t var_68 = temp1 / 0x3c;
    void var_34;
    int32_t ecx_2 = Game_DataSymbolLoad(&var_34, "%2.2d : %2.2d : %2.2d : %2.2d");
    int32_t var_60_1 = ecx_2;
    int32_t var_64_1 = ecx_2;
    int32_t** eax_20 = sub_4b6ec0(*(edi + 0x30),
        g_bcabc0 * 0.899999976f + g_bcabb8 - g_936030,
        g_bcabc4 * 0.800000012f + g_bcabbc - g_936034, &var_34);
    int32_t ecx_3 = eax_20[9];
    eax_20[5] = 0x42c80000;
    eax_20[6] = 0x42c80000;
    eax_20[7] = 0x42c80000;
    eax_20[9] = ecx_3 | 0x40000;
    eax_20[3] = *(edi + 0x2c);
    sub_4b6f50(eax_20);
    sub_4b6f30(eax_20);

    if (!eax_2)
        sub_4b0d50();

    long double x87_r7_10 = *(edi + 0x4c);
    long double temp2 = 0.75f;
    x87_r7_10 - temp2;
    int32_t var_44 = 0;

    if (!(*(&((x87_r7_10 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp2) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp2 ? 1 : 0) << 0xe) + 1) & 1))
        var_44 = 0x3f800000;

    float var_48 = g_bcabc0 * 0.0700000003f;
    var_3c = sub_4b6d00(edi + 0x34);
    long double x87_r7_14 = sub_4b6ce0(edi + 0x34);
    int32_t var_7c = var_44;
    float var_40 = g_bcabc0 * 0.100000001f + g_936028 + g_bcabb8;
    long double x87_r6_7 = g_bcabc4 * 0.200000003f + g_93602c + g_bcabbc;
    a1 = x87_r6_7;
    var_3c = x87_r6_7 + var_3c / x87_r7_14 * var_48;
    float var_48_1 = var_40 + var_48;
    float var_8c = var_40;
    return Qsprite_Register4Az(edi + 0x34, var_40, var_3c, var_48_1, var_3c, var_40, a1,
        var_48_1, a1, 128f, 128f, 128f, *(edi + 0x2c), var_44, 0, 0x10c0000, 0);
}
