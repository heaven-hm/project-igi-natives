#include "Menu_HandleInput_12.h"
int32_t Menu_HandleInput_12(void* a1, int32_t a2)

{
    int32_t dstD = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
    int32_t objC1 = *(a1 + 0x2c);
    int32_t flagP = *(a1 + 0x28);
    int32_t i_1 = 4;
    int32_t ctxB1 = (g_c28b48 >> 1) + *(a1 + 0x24) - 0xef;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t v_d8 = ctxB1;
    void v_98;
    int32_t* valA3 = &v_98;
    int32_t i;

    do
    {
        valA3[-1] = 0;
        *valA3 = 0x3f800000;
        valA3[1] = 0;
        valA3[-2] = a2;
        valA3[-4] = 0;
        valA3[-3] = 0;
        valA3[-5] = 0x3f800000;
        valA3 = &valA3[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    long double fpu7 = dstD + 1;
    float v_cc = fpu7;
    float v_b4 = fpu7;
    long double fpu6 = v_d8;
    v_d8 = dstD + 1 + flagP - 1;
    int32_t v_c0 = 0;
    float v_d4_1 = fpu6;
    float v_b0 = fpu6;
    long double fpu5 = v_d8;
    v_d8 = objC1 + ctxB1 - 1;
    int32_t valA6 = g_a84a54;
    int32_t v_c4 = 0x80000;
    float v_90 = fpu5;
    float v_8c = fpu6;
    int32_t v_c8 = 1;
    float v_6c = fpu5;
    long double x87_r6_2 = v_d8;
    int32_t v_bc = 5;
    float v_68 = x87_r6_2;
    float v_48 = fpu7;
    float v_44 = x87_r6_2;
    void v_24;
    memcpy(&v_24, &v_b4, 0x24);
    float* v_b8 = &v_b4;
    (*((valA6 << 2) + &g_a94e84))(&v_c8);
    long double x87_r7_3 = v_cc + 210f;
    float v_b0_1 = v_d4_1;
    int32_t objC4 = g_a84a54;
    v_b4 = x87_r7_3;
    float v_90_1 = x87_r7_3;
    int32_t v_bc_1 = 2;
    float* v_b8_1 = &v_b4;
    float v_8c_1 = objC1 + v_d4_1 - 1f;
    return (*((objC4 << 2) + &g_a94e84))(&v_c8);
}
