#include "00423930-Menu_HandleInput_12.h"
/* 0x00423930 Menu_HandleInput_12 full linked: callers=1 callees=3 */
int32_t Menu_HandleInput_12(void* a1, int32_t a2)

{
    int32_t edi = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
    int32_t ecx_1 = *(a1 + 0x2c);
    int32_t ebp = *(a1 + 0x28);
    int32_t i_1 = 4;
    int32_t ebx_1 = (g_c28b48 >> 1) + *(a1 + 0x24) - 0xef;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t var_d8 = ebx_1;
    void var_98;
    int32_t* eax_3 = &var_98;
    int32_t i;

    do
    {
        eax_3[-1] = 0;
        *eax_3 = 0x3f800000;
        eax_3[1] = 0;
        eax_3[-2] = a2;
        eax_3[-4] = 0;
        eax_3[-3] = 0;
        eax_3[-5] = 0x3f800000;
        eax_3 = &eax_3[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    long double x87_r7 = edi + 1;
    float var_cc = x87_r7;
    float var_b4 = x87_r7;
    long double x87_r6 = var_d8;
    var_d8 = edi + 1 + ebp - 1;
    int32_t var_c0 = 0;
    float var_d4_1 = x87_r6;
    float var_b0 = x87_r6;
    long double x87_r5 = var_d8;
    var_d8 = ecx_1 + ebx_1 - 1;
    int32_t eax_6 = g_a84a54;
    int32_t var_c4 = 0x80000;
    float var_90 = x87_r5;
    float var_8c = x87_r6;
    int32_t var_c8 = 1;
    float var_6c = x87_r5;
    long double x87_r6_2 = var_d8;
    int32_t var_bc = 5;
    float var_68 = x87_r6_2;
    float var_48 = x87_r7;
    float var_44 = x87_r6_2;
    void var_24;
    memcpy(&var_24, &var_b4, 0x24);
    float* var_b8 = &var_b4;
    (*((eax_6 << 2) + &g_a94e84))(&var_c8);
    long double x87_r7_3 = var_cc + 210f;
    float var_b0_1 = var_d4_1;
    int32_t ecx_4 = g_a84a54;
    var_b4 = x87_r7_3;
    float var_90_1 = x87_r7_3;
    int32_t var_bc_1 = 2;
    float* var_b8_1 = &var_b4;
    float var_8c_1 = ecx_1 + var_d4_1 - 1f;
    return (*((ecx_4 << 2) + &g_a94e84))(&var_c8);
}
