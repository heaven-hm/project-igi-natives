// Original IGI.EXE function: Render_DrawBoneMesh (VA 0x004D03D0; static CFG gate PASS, CFG score 0.944).
#include "Render_DrawBoneMesh.h"
int32_t Render_DrawBoneMesh(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t valA = Display_SyncVSync_15();
    int32_t valA1;

    if (g_a4eea0 == valA)
        valA1 = Display_RestoreDevice_13();

    float v_18;
    float v_14;

    if (g_a4eea0 != valA || g_a4ee9c != valA1)
    {
        v_18 = g_bcabb8 + g_bcabc8;
        v_14 = g_bcabbc + g_bcabcc;
        g_a4eea0 = Display_SyncVSync_15();
        int32_t valA3 = Display_RestoreDevice_13();
        long double x87_r7_6 = g_bcabd0 - v_18;
        g_a4ee9c = valA3;
        g_b46ce4 = x87_r7_6 / g_bcabc8 * g_bcab20;
        g_b46d1c = (g_bcabd8 - v_18) / g_bcabc8 * g_bcab20;
        g_b816fc = (g_bcabd4 - v_14) / g_bcabcc * g_bcab24;
        g_b8179c = (g_bcabdc - v_14) / g_bcabcc * g_bcab24;
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fpatan(1, g_b46ce4);
        long double fp0_1;
        bool c1_2;
        bool c2_1;
        fp0_1 = __fcos(fp1_1);
        g_b817a4 = fp0_1;
        long double fp1_2;
        bool c1_3;
        fp1_2 = __fpatan(1, g_b46d1c);
        long double fp0_2;
        bool c1_4;
        bool c2_2;
        fp0_2 = __fcos(fp1_2);
        g_b46d20 = fp0_2;
        long double fp1_3;
        bool c1_5;
        fp1_3 = __fpatan(1, g_b816fc);
        long double fp0_3;
        bool c1_6;
        bool c2_3;
        fp0_3 = __fcos(fp1_3);
        g_b46d18 = fp0_3;
        long double fp1_4;
        bool c1_7;
        fp1_4 = __fpatan(1, g_b8179c);
        long double fp0_4;
        bool c1_8;
        bool c2_4;
        fp0_4 = __fcos(fp1_4);
        g_b46ce8 = fp0_4;
    }

    int32_t v_10 = a1;
    int32_t valA5 = DynObj_RemoveSymbol_15();
    (*((valA5 << 2) + &g_a94e84))(&v_10, v_18, v_14, v_10, a2, a3);
    int32_t result;
    return result;
}
