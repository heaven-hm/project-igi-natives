#include "Menu_DrawWidget_5.h"
int32_t Menu_DrawWidget_5(int32_t* a1, float* a2)

{
    void v_2c;
    int32_t* valA = &v_2c;
    int32_t i_2 = 2;
    int32_t dstD = 0;
    int32_t i;

    do
    {
        valA[-1] = 0;
        *valA = 0x3f800000;
        valA[1] = 0;
        valA[-2] = 0x3d99999a;
        valA[-4] = 0;
        valA[-3] = 0;
        valA[-5] = 0x3f800000;
        valA = &valA[9];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    float v_48;
    int32_t* v_4c = &v_48;
    long double x87_r7_1 = a1[2] * *a2;
    long double x87_r6_1 = a1[3] * a2[2];
    int32_t i_1 = 0;
    int32_t v_58 = 0x80000;
    int32_t v_5c = 1;
    int32_t v_54 = 0;
    int32_t v_50 = 2;
    float v_64 = a1[4] * *a2;
    float v_68 = a1[4] * a2[1];
    float v_6c = a1[5] * a2[2];
    float v_78 = a1[5] * a2[3];
    float v_60 = x87_r7_1 + x87_r6_1 + a2[4] - (v_6c + v_64) * 0.5f;
    float v_80 = v_60;
    long double x87_r7_8 =
        a1[3] * a2[3] + a1[2] * a2[1] + a2[5] - (v_78 + v_68) * 0.5f;
    float v_7c_1 = x87_r7_8;
    float v_84 = v_7c_1;

    if (*a1 >= 0)
    {
        do
        {
            v_48 = v_80;
            float v_44_1 = v_84;
            float v_24_1 = v_80 + v_64;
            float v_20_1 = v_84 + v_68;
            v_80 = v_6c * 0.0500000007f + v_80;
            v_84 = v_78 * 0.0500000007f + v_84;
            (*((g_a84a54 << 2) + &g_a94e84))(&v_5c);
            i_1 += 1;
        } while (i_1 <= *a1);
    }

    int32_t result = a1[1];
    float v_80_1 = v_60;
    float v_84_1 = v_7c_1;

    if (result >= 0)
    {
        do
        {
            v_48 = v_80_1;
            float v_44_2 = v_84_1;
            float v_24_2 = v_80_1 + v_6c;
            float v_20_2 = v_84_1 + v_78;
            v_80_1 = v_64 * 0.0500000007f + v_80_1;
            v_84_1 = v_68 * 0.0500000007f + v_84_1;
            (*((g_a84a54 << 2) + &g_a94e84))(&v_5c);
            result = a1[1];
            dstD += 1;
        } while (dstD <= result);
    }

    return result;
}
