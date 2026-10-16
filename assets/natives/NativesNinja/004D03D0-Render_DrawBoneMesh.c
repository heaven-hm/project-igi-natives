#include "004D03D0-Render_DrawBoneMesh.h"
/* 0x004d03d0 Render_DrawBoneMesh full linked: callers=9 callees=5 */
int32_t sub_4d03d0(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t eax = sub_497ec0();
    int32_t eax_1;

    if (g_a4eea0 == eax)
        eax_1 = sub_497670();

    float var_18;
    float var_14;

    if (g_a4eea0 != eax || g_a4ee9c != eax_1)
    {
        var_18 = g_bcabb8 + g_bcabc8;
        var_14 = g_bcabbc + g_bcabcc;
        g_a4eea0 = sub_497ec0();
        int32_t eax_3 = sub_497670();
        long double x87_r7_6 = g_bcabd0 - var_18;
        g_a4ee9c = eax_3;
        g_b46ce4 = x87_r7_6 / g_bcabc8 * g_bcab20;
        g_b46d1c = (g_bcabd8 - var_18) / g_bcabc8 * g_bcab20;
        g_b816fc = (g_bcabd4 - var_14) / g_bcabcc * g_bcab24;
        g_b8179c = (g_bcabdc - var_14) / g_bcabcc * g_bcab24;
        long double st1_1;
        bool c1_1;
        st1_1 = __fpatan(1, g_b46ce4);
        long double st0_1;
        bool c1_2;
        bool c2_1;
        st0_1 = __fcos(st1_1);
        g_b817a4 = st0_1;
        long double st1_2;
        bool c1_3;
        st1_2 = __fpatan(1, g_b46d1c);
        long double st0_2;
        bool c1_4;
        bool c2_2;
        st0_2 = __fcos(st1_2);
        g_b46d20 = st0_2;
        long double st1_3;
        bool c1_5;
        st1_3 = __fpatan(1, g_b816fc);
        long double st0_3;
        bool c1_6;
        bool c2_3;
        st0_3 = __fcos(st1_3);
        g_b46d18 = st0_3;
        long double st1_4;
        bool c1_7;
        st1_4 = __fpatan(1, g_b8179c);
        long double st0_4;
        bool c1_8;
        bool c2_4;
        st0_4 = __fcos(st1_4);
        g_b46ce8 = st0_4;
    }

    int32_t var_10 = a1;
    int32_t eax_5 = sub_4cfc60();
    (*((eax_5 << 2) + &g_a94e84))(&var_10, var_18, var_14, var_10, a2, a3);
    int32_t result;
    return result;
}
