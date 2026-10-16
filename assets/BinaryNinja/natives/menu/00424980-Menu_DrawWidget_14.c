#include "Menu_DrawWidget_14.h"
int32_t Menu_DrawWidget_14(void* a1, float a2, float a3, int32_t a4)

{
    int32_t dstD = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
    int32_t valA2 = *(a1 + 0x24);
    int32_t tmpD1 = g_c28b48 >> 1;
    int32_t v_d8 = *(a1 + 0x28);
    int32_t i_1 = 4;
    int32_t tmpD2 = *(a1 + 0x2c);
    void v_98;
    int32_t* valA3 = &v_98;
    int32_t i;

    do
    {
        long double x87_r7_1;

        x87_r7_1 = !a4 ? 0f : 0.5f;

        valA3[-1] = x87_r7_1;
        *valA3 = 0x3f800000;
        long double x87_r7_2;

        x87_r7_2 = !a4 ? 0f : 0.5f;

        valA3[1] = x87_r7_2;
        valA3[-2] = a3;
        valA3[-4] = 0;
        valA3[-3] = 0;
        valA3[-5] = 0x3f800000;
        valA3 = &valA3[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    long double x87_r7_3 = dstD + 1;
    int32_t tmpD5 = v_d8 + dstD;
    float v_b4 = x87_r7_3;
    long double fpu6 = tmpD1 + valA2 - 0xef;
    int32_t v_c4 = 0;
    float v_b0 = fpu6;
    long double fpu5 = tmpD5;
    float v_90 = fpu5;
    float v_8c = fpu6;
    long double x87_r6_1 = tmpD2 + tmpD1 + valA2 - 0xf0;
    float v_6c = fpu5;
    float v_68 = x87_r6_1;
    float v_48 = x87_r7_3;
    long double x87_r7_4 = a3;
    long double f1 = 0.99000001f;
    x87_r7_4 - f1;
    float v_44 = x87_r6_1;
    void v_24;
    memcpy(&v_24, &v_b4, 0x24);

    if (*(&((x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        int32_t v_c4_1 = 0x80000;

    int32_t tmpD7 = g_a84a54;
    int32_t v_c8 = 1;
    int32_t v_c0 = 0;
    int32_t v_bc = 5;
    float* v_b8 = &v_b4;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t objC5 = (*((tmpD7 << 2) + &g_a94e84))(&v_c8);
    int32_t v_f8 = objC5;
    int32_t v_108 = objC5;
    int32_t v_10c = objC5;
    int32_t v_110 = objC5;
    int32_t v_114 = objC5;
    return Sys_ExecuteBytecode_14(dstD, tmpD1 + valA2 - 0xf0, v_d8, tmpD2, 0f, 0f, 0f, a2 * a3, 0x80000,
        0);
}
