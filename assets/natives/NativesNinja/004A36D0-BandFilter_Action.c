#include "004A36D0-BandFilter_Action.h"
/* 0x004a36d0 BandFilter_Action full linked: callers=0 callees=9 */
void* sub_4a36d0(float a1)

{
    float edi = a1;
    void* result = sub_4b72e0(sub_4a36b0, 0x10, *(edi + 0x20));
    int32_t ecx = g_935c0c;
    *(result + 0xc) = edi;
    *(result + 4) = ecx;
    long double x87_r7 = *(edi + 0x28);
    long double temp0 = 0f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        char eax_1 = QHash_ValueGet();

        if (!eax_1)
            QHash_ValueSet();

        int32_t var_4c_1 = *(edi + 0x60);
        void var_34;
        Game_DataSymbolLoad(&var_34, "CAMERA %d");
        void* var_50_1 = &var_34;
        void* var_54_2 = &var_34;
        int32_t** eax_2 = sub_4b6ec0(*(edi + 0x70),
            g_bcabc0 * g_93603c + g_936044 + g_bcabb8,
            g_bcabc4 * g_936040 + g_936048 + g_bcabbc, &var_34);
        int32_t edx_3 = eax_2[9];
        eax_2[5] = 0x42c80000;
        eax_2[6] = 0x42c80000;
        eax_2[7] = 0x42c80000;
        eax_2[9] = edx_3 | 0x40000;
        eax_2[3] = *(edi + 0x20);
        sub_4b6f50(eax_2);
        result = sub_4b6f30(eax_2);

        if (!eax_1)
            sub_4b0d50();
    }

    long double x87_r7_10 = *(edi + 0x28);
    long double temp1 = 0f;
    x87_r7_10 - temp1;
    result = (x87_r7_10 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp1) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        return result;

    long double x87_r7_11 = *(edi + 0x20);
    long double temp2_1 = g_bcadc0;
    x87_r7_11 - temp2_1;

    if (*(&((x87_r7_11 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        a1 = g_bcadc0;
    else
        a1 = *(edi + 0x20);

    float var_50_3 = a1;
    float var_54_4 = a1;
    float var_58_2 = a1;
    float var_5c_2 = a1;
    float var_60_2 = a1;
    int32_t var_3c_3 = g_bcabbc;
    int32_t var_64_1 = var_3c_3;
    int32_t var_68_1 = var_3c_3;
    return sub_4b4910(g_bcabb8, var_3c_3, g_bcabc0, g_bcabc4, *(edi + 0x64) * 128f,
        *(edi + 0x68) * 128f, *(edi + 0x6c) * 128f, 0x80000000, 0, a1);
}
