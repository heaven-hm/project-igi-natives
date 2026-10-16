#include "00473040-GunDRAGUNOV_Setup.h"
/* 0x00473040 GunDRAGUNOV_Setup full linked: callers=0 callees=13 */
int32_t sub_473040(float a1, int32_t a2)

{
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;

    if (!*(a1 + 0x1b0))
        return (*(((sub_487190() * 0x180 + sub_477bf0()) << 2) + &g_a96ae0))(a1, a2);

    a1 = eax;
    a2 = a1 / sub_4b6ce0(g_5be360 + 0x18);
    long double x87_r7_3 = ecx;
    float var_18 = x87_r7_3;
    float var_c = x87_r7_3 * 0.5f;
    float var_8 = a1 * 0.5f;
    float var_4 = -(a2);
    sub_4b51f0(g_5be360 + 0x18, var_4, var_4, var_8, var_4, var_4, var_c, var_8, var_c, 128f,
        128f, 128f, 0, 0x1000000, 0);
    float var_4_1 = a1 + a2;
    sub_4b51f0(g_5be360 + 0x18, var_4_1, var_4, var_8, var_4, var_4_1, var_c, var_8, var_c,
        128f, 128f, 128f, 0, 0x1000000, 0);
    a2 = var_18 + a2;
    sub_4b51f0(g_5be360 + 0x18, var_4, a2, var_8, a2, var_4, var_c, var_8, var_c, 128f,
        128f, 128f, 0, 0x1000000, 0);
    sub_4b51f0(g_5be360 + 0x18, var_4_1, a2, var_8, a2, var_4_1, var_c, var_8, var_c, 128f,
        128f, 128f, 0, 0x1000000, 0);
    int32_t eax_15 = sub_4b6d00(g_5be364 + 0x18);
    int32_t eax_16;
    int32_t edx_5;
    edx_5 = HIGHD(eax_15);
    eax_16 = LOWD(eax_15);
    int32_t eax_19;
    int32_t edx_6;
    edx_6 = HIGHD(ecx);
    eax_19 = LOWD(ecx);
    a2 = ((eax_19 - edx_6) >> 1) - ((eax_16 - edx_5) >> 1);
    float var_4_3 = eax_15 + a2;
    sub_4b51f0(g_5be364 + 0x18, 0, a2, a1, a2, 0, var_4_3, a1, var_4_3, 128f, 128f,
        128f, 0, 0x1000000, 0);
    int32_t eax_27 = sub_4b6ce0(g_5be35c + 0x18);
    int32_t eax_28;
    int32_t edx_9;
    edx_9 = HIGHD(eax_27);
    eax_28 = LOWD(eax_27);
    int32_t eax_31;
    int32_t edx_10;
    edx_10 = HIGHD(eax);
    eax_31 = LOWD(eax);
    a1 = ((eax_31 - edx_10) >> 1) - ((eax_28 - edx_9) >> 1);
    a2 = eax_27 + a1;
    return sub_4b51f0(g_5be35c + 0x18, a1, 0, a2, 0, a1, var_18, a2, var_18, 128f, 128f,
        128f, 0, 0x1000000, 0);
}
