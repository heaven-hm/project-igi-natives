#include "00467DF0-AI_TakeCover_25.h"
/* 0x00467df0 AI_TakeCover_25 full linked: callers=3 callees=4 */
void sub_467df0(int32_t a1)

{
    int32_t* ecx_1 = a1;
    int32_t* esi = ecx_1[6];

    if (!esi)
        return;

    double* eax_1 = ecx_1[3];
    double* edx_1 = *ecx_1;
    float var_c = *eax_1 - *edx_1;
    float var_8_1 = eax_1[1] - edx_1[1];
    float var_4_1 = eax_1[2] - edx_1[2];
    float* eax_2 = ecx_1[1];
    float var_18 = var_4_1 * eax_2[6] + var_8_1 * eax_2[3] + var_c * *eax_2;
    float var_14_1 = var_4_1 * eax_2[7] + var_8_1 * eax_2[4] + var_c * eax_2[1];
    long double x87_r7_17 = var_4_1 * eax_2[8] + var_8_1 * eax_2[5];
    long double x87_r6_12 = var_c * eax_2[2];
    float var_8_2 = var_14_1;
    var_c = var_18;
    float var_4_2 = x87_r7_17 + x87_r6_12;
    sub_4675b0(&var_18, &var_c, ecx_1);
    long double x87_r7_20 = sub_4b6ce0(esi) * 0.5f;
    var_18 = var_18 - x87_r7_20;
    float var_14_2 = var_14_1 - sub_4b6d00(esi) * 0.5f;
    var_18 = var_18 - 10f;
    sub_4b50b0(esi, var_18, var_14_2, 128f, 128f, 128f, 0x3f800000, 0x44051eb8, 0, 0x400c0000,
        0xffffffff);
}
