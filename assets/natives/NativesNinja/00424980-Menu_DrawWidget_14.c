#include "00424980-Menu_DrawWidget_14.h"
/* 0x00424980 Menu_DrawWidget_14 full linked: callers=10 callees=4 */
int32_t Menu_DrawWidget_14(void* a1, float a2, float a3, int32_t a4)

{
    int32_t edi = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
    int32_t eax_2 = *(a1 + 0x24);
    int32_t edx_1 = g_c28b48 >> 1;
    int32_t var_d8 = *(a1 + 0x28);
    int32_t i_1 = 4;
    int32_t edx_2 = *(a1 + 0x2c);
    void var_98;
    int32_t* eax_3 = &var_98;
    int32_t i;

    do
    {
        long double x87_r7_1;

        x87_r7_1 = !a4 ? 0f : 0.5f;

        eax_3[-1] = x87_r7_1;
        *eax_3 = 0x3f800000;
        long double x87_r7_2;

        x87_r7_2 = !a4 ? 0f : 0.5f;

        eax_3[1] = x87_r7_2;
        eax_3[-2] = a3;
        eax_3[-4] = 0;
        eax_3[-3] = 0;
        eax_3[-5] = 0x3f800000;
        eax_3 = &eax_3[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    long double x87_r7_3 = edi + 1;
    int32_t edx_5 = var_d8 + edi;
    float var_b4 = x87_r7_3;
    long double x87_r6 = edx_1 + eax_2 - 0xef;
    int32_t var_c4 = 0;
    float var_b0 = x87_r6;
    long double x87_r5 = edx_5;
    float var_90 = x87_r5;
    float var_8c = x87_r6;
    long double x87_r6_1 = edx_2 + edx_1 + eax_2 - 0xf0;
    float var_6c = x87_r5;
    float var_68 = x87_r6_1;
    float var_48 = x87_r7_3;
    long double x87_r7_4 = a3;
    long double temp1 = 0.99000001f;
    x87_r7_4 - temp1;
    float var_44 = x87_r6_1;
    void var_24;
    memcpy(&var_24, &var_b4, 0x24);

    if (*(&((x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
        int32_t var_c4_1 = 0x80000;

    int32_t edx_7 = g_a84a54;
    int32_t var_c8 = 1;
    int32_t var_c0 = 0;
    int32_t var_bc = 5;
    float* var_b8 = &var_b4;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t ecx_5 = (*((edx_7 << 2) + &g_a94e84))(&var_c8);
    int32_t var_f8 = ecx_5;
    int32_t var_108 = ecx_5;
    int32_t var_10c = ecx_5;
    int32_t var_110 = ecx_5;
    int32_t var_114 = ecx_5;
    return sub_4b4a00(edi, edx_1 + eax_2 - 0xf0, var_d8, edx_2, 0f, 0f, 0f, a2 * a3, 0x80000,
        0);
}
