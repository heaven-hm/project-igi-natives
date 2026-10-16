#include "00419630-Menu_RequestScreen_6.h"
/* 0x00419630 Menu_RequestScreen_6 full linked: callers=1 callees=1 */
int32_t Menu_RequestScreen_6(float* a1, float* a2)

{
    long double x87_r7 = 0f;
    float var_5e0 = a1[1] * a2[2] + *a1 * *a2 + a2[4];
    float var_5dc = a1[1] * a2[3] + a2[1] * *a1 + a2[5];
    long double x87_r6_9 = a1[2] * a2[6];
    float var_5ec = x87_r6_9;
    int64_t var_5e8 = x87_r6_9 * 0.314159274f;
    int32_t i_2 = var_5e8;

    if (i_2 >= 0x28)
        i_2 = 0x28;

    int32_t i_3 = 0;
    var_5e8 = i_2;

    if (i_2 > 0)
    {
        void var_5a8;
        int32_t* eax_1 = &var_5a8;
        int32_t i_1 = i_2;
        i_3 = i_2;
        long double x87_r6_12 = 6.28318548f / var_5e8;
        int32_t i;

        do
        {
            long double st0_1;
            bool c1_1;
            bool c2_1;
            st0_1 = __fcos(x87_r7);
            eax_1[-1] = 0;
            *eax_1 = 0x3f800000;
            eax_1[1] = 0;
            eax_1[-2] = 0x3d99999a;
            eax_1[-4] = 0;
            eax_1[-3] = 0;
            eax_1[-5] = 0x3f800000;
            eax_1 = &eax_1[9];
            i = i_1;
            i_1 -= 1;
            eax_1[-0x10] = st0_1 * var_5ec + var_5e0;
            long double st0_2;
            bool c1_2;
            bool c2_2;
            st0_2 = __fsin(x87_r7);
            eax_1[-0xf] = st0_2 * var_5ec + var_5dc;
            x87_r7 = x87_r7 + x87_r6_12;
        } while (i != 1);
    }

    int32_t var_5d0 = 0;
    int32_t eax_3 = g_a84a54;
    int32_t __saved_edi;
    void var_5c4;
    memcpy(&(&__saved_edi)[i_3 * 9 + 0xe], &var_5c4, 0x24);
    int32_t var_5d4 = 0x80000;
    int32_t var_5d8 = 1;
    int32_t var_5cc = i_2 + 1;
    void* var_5c8 = &var_5c4;
    return (*((eax_3 << 2) + &g_a94e84))(&var_5d8);
}
