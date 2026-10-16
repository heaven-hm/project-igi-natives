#include "Menu_RequestScreen_6.h"
int32_t Menu_RequestScreen_6(float* a1, float* a2)

{
    long double fpu7 = 0f;
    float v_5e0 = a1[1] * a2[2] + *a1 * *a2 + a2[4];
    float v_5dc = a1[1] * a2[3] + a2[1] * *a1 + a2[5];
    long double x87_r6_9 = a1[2] * a2[6];
    float v_5ec = x87_r6_9;
    int64_t v_5e8 = x87_r6_9 * 0.314159274f;
    int32_t i_2 = v_5e8;

    if (i_2 >= 0x28)
        i_2 = 0x28;

    int32_t i_3 = 0;
    v_5e8 = i_2;

    if (i_2 > 0)
    {
        void v_5a8;
        int32_t* valA1 = &v_5a8;
        int32_t i_1 = i_2;
        i_3 = i_2;
        long double x87_r6_12 = 6.28318548f / v_5e8;
        int32_t i;

        do
        {
            long double fp0_1;
            bool c1_1;
            bool c2_1;
            fp0_1 = __fcos(fpu7);
            valA1[-1] = 0;
            *valA1 = 0x3f800000;
            valA1[1] = 0;
            valA1[-2] = 0x3d99999a;
            valA1[-4] = 0;
            valA1[-3] = 0;
            valA1[-5] = 0x3f800000;
            valA1 = &valA1[9];
            i = i_1;
            i_1 -= 1;
            valA1[-0x10] = fp0_1 * v_5ec + v_5e0;
            long double fp0_2;
            bool c1_2;
            bool c2_2;
            fp0_2 = __fsin(fpu7);
            valA1[-0xf] = fp0_2 * v_5ec + v_5dc;
            fpu7 = fpu7 + x87_r6_12;
        } while (i != 1);
    }

    int32_t v_5d0 = 0;
    int32_t valA3 = g_a84a54;
    int32_t saved_dst;
    void v_5c4;
    memcpy(&(&saved_dst)[i_3 * 9 + 0xe], &v_5c4, 0x24);
    int32_t v_5d4 = 0x80000;
    int32_t v_5d8 = 1;
    int32_t v_5cc = i_2 + 1;
    void* v_5c8 = &v_5c4;
    return (*((valA3 << 2) + &g_a94e84))(&v_5d8);
}
