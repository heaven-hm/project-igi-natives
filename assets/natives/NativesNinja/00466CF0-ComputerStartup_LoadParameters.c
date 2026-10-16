#include "00466CF0-ComputerStartup_LoadParameters.h"
/* 0x00466cf0 ComputerStartup_LoadParameters full linked: callers=0 callees=8 */
void sub_466cf0(int32_t a1)

{
    if (!(*(a1 + 0x70) & 1))
        return;

    void* eax_2 = sub_4b72e0(sub_466c60, 0x10, *(a1 + 0x58));
    *(eax_2 + 4) = g_5bdc50;
    *(eax_2 + 0xc) = a1;
    char eax_3 = QHash_ValueGet();

    if (!eax_3)
        QHash_ValueSet();

    int32_t var_8_1 = g_bcabc0 * 0.150000006f;
    char* eax_5 = *(a1 + (*(a1 + 0x20) << 2) + 0x5c);
    char* var_24_1 = eax_5;
    float var_10_1 = g_bcabc4 * 0.649999976f;
    long double x87_r7_7 = sub_4b70f0(*(a1 + 0x8c));
    int32_t* esi_1 = sub_4b6ec0(*(a1 + 0x8c), var_8_1, var_10_1 - x87_r7_7 - 2f, eax_5);
    esi_1[5] = *(a1 + 0x34) * 127f;
    int32_t ecx_5 = esi_1[9] | 0x40000;
    esi_1[6] = *(a1 + 0x38) * 127f;
    long double x87_r7_15 = *(a1 + 0x3c) * 127f;
    esi_1[9] = ecx_5;
    esi_1[7] = x87_r7_15;
    esi_1[3] = *(a1 + 0x58);
    esi_1[8] = 0xffffffff;
    sub_4b6f50(esi_1);
    sub_4b6f30(esi_1);

    if (!eax_3)
        sub_4b0d50();
}
