#include "00467F30-AI_UpdateOrders_25.h"
/* 0x00467f30 AI_UpdateOrders_25 full linked: callers=4 callees=4 */
void sub_467f30(float a1)

{
    float esi = a1;
    int32_t ebx = *(esi + 0x1c);

    if (ebx == 0xffffffff)
        return;

    long double x87_r7_1 = *(esi + 0x14);
    a1 = x87_r7_1;
    long double temp0_1 = 3072f;
    x87_r7_1 - temp0_1;

    if (*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
        a1 = 3072f;

    double* eax_2 = *(esi + 0xc);
    double* ecx_1 = *esi;
    float var_c = *eax_2 - *ecx_1;
    float var_8_1 = eax_2[1] - ecx_1[1];
    float var_4_1 = eax_2[2] - ecx_1[2];
    float* eax_3 = *(esi + 4);
    float var_18 = var_4_1 * eax_3[6] + var_8_1 * eax_3[3] + var_c * *eax_3;
    float var_14_1 = var_4_1 * eax_3[7] + var_8_1 * eax_3[4] + var_c * eax_3[1];
    long double x87_r7_18 = var_4_1 * eax_3[8] + var_8_1 * eax_3[5];
    long double x87_r6_12 = var_c * eax_3[2];
    float var_8_2 = var_14_1;
    var_c = var_18;
    int32_t eax_5 = *(esi + 0x20);
    float var_10_1 = x87_r7_18 + x87_r6_12;
    sub_4675b0(&var_18, &var_c, esi);
    float var_28 = a1;
    float var_24_1 = a1;
    float var_20;
    sub_498040(&var_20, &var_28, var_10_1);
    float var_34;
    float var_30;
    float var_2c;
    sub_4b3c50(*(esi + 0x10), &var_2c, &var_30, &var_34);
    float ecx_4 = var_20;
    float var_54_2 = ecx_4;
    float var_1c;
    sub_4b5860(*((ebx << 3) + &g_53f5f0), *((ebx << 3) + &g_53f5f4), var_18, var_14_1,
        0x44051eb8, *(eax_5 * 0xc + &g_53f608), *(eax_5 * 0xc + 0x53f60c),
        *(eax_5 * 0xc + 0x53f610), 0x3f400000, -(var_34), ecx_4, var_1c, 0x400c0000, 0xffffffff);
}
