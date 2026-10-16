#include "0049D480-Display_SetGammaRamp_19.h"
/* 0x0049d480 Display_SetGammaRamp_19 full linked: callers=0 callees=2 */
int32_t sub_49d480()

{
    int32_t eax = g_b46d04;
    int32_t i = 0;
    int32_t var_68;
    __builtin_memset(&var_68, 0, 0x68);

    if (g_b041e8 > 0)
    {
        do
        {
            long double x87_r7_1 = g_bcabec;
            float* eax_4 = *(g_b041e4 + (i << 2)) * g_b041f0 + g_b041e0;
            var_68 = 3;
            float var_64_1 = x87_r7_1 * eax_4[3];
            float var_60_1 = g_bcabec * eax_4[4];
            float var_5c_1 = g_bcabec * eax_4[5];
            float var_28_1 = -(*eax_4);
            float var_24_1 = -(eax_4[1]);
            int32_t* eax_5 = g_5ca114;
            float var_20_1 = -(eax_4[2]);
            (*(*eax_5 + 0x48))(eax_5, i, &var_68);
            int32_t* eax_6 = g_5ca114;
            (*(*eax_6 + 0xb0))(eax_6, i, 1);
            i += 1;
        } while (i < g_b041e8);
    }

    int32_t var_ac;
    __builtin_memset(&var_ac, 0, 0x44);
    int32_t* eax_8 = g_5ca114;
    var_ac = 0x3f800000;
    int32_t var_a8 = 0x3f800000;
    int32_t var_a4 = 0x3f800000;
    int32_t var_9c = 0x3f800000;
    int32_t var_98 = 0x3f800000;
    int32_t var_94 = 0x3f800000;
    (*(*eax_8 + 0x40))(eax_8, &var_ac);
    int32_t* eax_9 = g_5ca114;
    (*(*eax_9 + 0x50))(eax_9, 0x22,
        g_b818f4 * 255f - ((((g_b818ec * -255f) << 8) + g_b818f0 * -255f) << 8));
    int32_t* eax_10 = g_5ca114;
    (*(*eax_10 + 0x50))(eax_10, 0x26, eax);
    int32_t* eax_11 = g_5ca114;
    (*(*eax_11 + 0x50))(eax_11, 0x23, 0);
    int32_t* eax_12 = g_5ca114;
    (*(*eax_12 + 0x50))(eax_12, 0x8c, 3);
    int32_t* eax_13 = g_5ca114;
    (*(*eax_13 + 0x50))(eax_13, 0x1c, g_5470b4);
    int32_t* eax_14 = g_5ca114;
    (*(*eax_14 + 0x50))(eax_14, 0x2f, 3);
    int32_t* eax_15 = g_5ca114;
    (*(*eax_15 + 0x50))(eax_15, 0x1d, 0);
    int32_t* eax_16 = g_5ca114;
    (*(*eax_16 + 0x50))(eax_16, 0x8b,
        ((g_b818ac * 255f) << 8 | (g_b818b0 * 255f)) << 8 | (g_b818b4 * 255f));
    int32_t* eax_17 = g_5ca114;
    (*(*eax_17 + 0x50))(eax_17, 0x16, 3);
    int32_t* eax_18 = g_5ca114;
    (*(*eax_18 + 0x50))(eax_18, 0x89, 1);
    int32_t* eax_19 = g_5ca114;
    (*(*eax_19 + 0x50))(eax_19, 0x8d, 0);
    int32_t* eax_20 = g_5ca114;
    (*(*eax_20 + 0x50))(eax_20, 0x1a, 1);
    int32_t* eax_21 = g_5ca114;
    (*(*eax_21 + 0x50))(eax_21, 0xf, 0);
    int32_t* eax_22 = g_5ca114;
    (*(*eax_22 + 0x50))(eax_22, 7, g_bcad78);
    int32_t* eax_23 = g_5ca114;
    (*(*eax_23 + 0x50))(eax_23, 0xe, 1);
    int32_t* eax_24 = g_5ca114;
    return (*(*eax_24 + 0x50))(eax_24, 0x17, 4);
}
