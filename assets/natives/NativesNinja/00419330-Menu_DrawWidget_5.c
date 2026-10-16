#include "00419330-Menu_DrawWidget_5.h"
/* 0x00419330 Menu_DrawWidget_5 full linked: callers=1 callees=0 */
int32_t Menu_DrawWidget_5(int32_t* a1, float* a2)

{
    void var_2c;
    int32_t* eax = &var_2c;
    int32_t i_2 = 2;
    int32_t edi = 0;
    int32_t i;

    do
    {
        eax[-1] = 0;
        *eax = 0x3f800000;
        eax[1] = 0;
        eax[-2] = 0x3d99999a;
        eax[-4] = 0;
        eax[-3] = 0;
        eax[-5] = 0x3f800000;
        eax = &eax[9];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    float var_48;
    int32_t* var_4c = &var_48;
    long double x87_r7_1 = a1[2] * *a2;
    long double x87_r6_1 = a1[3] * a2[2];
    int32_t i_1 = 0;
    int32_t var_58 = 0x80000;
    int32_t var_5c = 1;
    int32_t var_54 = 0;
    int32_t var_50 = 2;
    float var_64 = a1[4] * *a2;
    float var_68 = a1[4] * a2[1];
    float var_6c = a1[5] * a2[2];
    float var_78 = a1[5] * a2[3];
    float var_60 = x87_r7_1 + x87_r6_1 + a2[4] - (var_6c + var_64) * 0.5f;
    float var_80 = var_60;
    long double x87_r7_8 =
        a1[3] * a2[3] + a1[2] * a2[1] + a2[5] - (var_78 + var_68) * 0.5f;
    float var_7c_1 = x87_r7_8;
    float var_84 = var_7c_1;

    if (*a1 >= 0)
    {
        do
        {
            var_48 = var_80;
            float var_44_1 = var_84;
            float var_24_1 = var_80 + var_64;
            float var_20_1 = var_84 + var_68;
            var_80 = var_6c * 0.0500000007f + var_80;
            var_84 = var_78 * 0.0500000007f + var_84;
            (*((g_a84a54 << 2) + &g_a94e84))(&var_5c);
            i_1 += 1;
        } while (i_1 <= *a1);
    }

    int32_t result = a1[1];
    float var_80_1 = var_60;
    float var_84_1 = var_7c_1;

    if (result >= 0)
    {
        do
        {
            var_48 = var_80_1;
            float var_44_2 = var_84_1;
            float var_24_2 = var_80_1 + var_6c;
            float var_20_2 = var_84_1 + var_78;
            var_80_1 = var_64 * 0.0500000007f + var_80_1;
            var_84_1 = var_68 * 0.0500000007f + var_84_1;
            (*((g_a84a54 << 2) + &g_a94e84))(&var_5c);
            result = a1[1];
            edi += 1;
        } while (edi <= result);
    }

    return result;
}
