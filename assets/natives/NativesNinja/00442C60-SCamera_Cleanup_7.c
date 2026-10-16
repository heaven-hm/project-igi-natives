#include "00442C60-SCamera_Cleanup_7.h"
/* 0x00442c60 SCamera_Cleanup_7 full linked: callers=0 callees=6 */
int32_t sub_442c60(int32_t a1, double** a2)

{
    void* ecx = *(a1 + 0x25d0);
    char result = *(ecx + 0x170);

    if (result)
        return result;

    double* eax = *a2;
    float var_c = *(a1 + 0x20) - *eax;
    float var_8_1 = *(a1 + 0x28) - eax[1];
    float var_4_1 = *(a1 + 0x30) - eax[2];
    float* eax_1 = a2[1];
    float var_18 = var_4_1 * eax_1[6] + var_8_1 * eax_1[3] + var_c * *eax_1;
    float var_14_1 = var_4_1 * eax_1[7] + var_8_1 * eax_1[4] + var_c * eax_1[1];
    long double x87_r7_17 = var_4_1 * eax_1[8] + var_8_1 * eax_1[5];
    long double x87_r6_12 = var_c * eax_1[2];
    float var_8_2 = var_14_1;
    var_c = var_18;
    float var_4_2 = x87_r7_17 + x87_r6_12;
    int32_t* esi_1;
    int32_t edi_1;

    if (!*(ecx + 0x168))
    {
        esi_1 = &g_5be230;
        edi_1 = 0;
    }
    else
    {
        edi_1 = *(a1 + 0x25e0);
        esi_1 = &g_5be248;
    }

    sub_4675b0(&var_18, &var_c, a2);
    long double x87_r7_20 = sub_4b6ce0(esi_1) * 0.5f;
    var_18 = var_18 - x87_r7_20;
    int32_t eax_6 = sub_4b6d00(esi_1);
    return sub_4b50b0(esi_1, var_18, var_14_1 - eax_6 * 0.5f, 128f, 128f, 128f, 0x3f800000,
        0x44051eb8, edi_1, 0x400c0000, 0xffffffff);
}
