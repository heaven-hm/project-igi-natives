// IGI native provenance: Render_DrawBoneMesh - 0x004D03D0 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D03D0-Render_DrawBoneMesh.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh.h"
int32_t Render_DrawBoneMesh(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t data_val = Display_SyncVSync_15();
    int32_t data_1;

    if (g_a4eea0 == data_val)
        data_1 = Display_RestoreDevice_13();

    float item_18;
    float item_14;

    if (g_a4eea0 != data_val || g_a4ee9c != data_1)
    {
        item_18 = g_bcabb8 + g_bcabc8;
        item_14 = g_bcabbc + g_bcabcc;
        g_a4eea0 = Display_SyncVSync_15();
        int32_t data_3 = Display_RestoreDevice_13();
        long double fpu_val_7_6 = g_bcabd0 - item_18;
        g_a4ee9c = data_3;
        g_b46ce4 = fpu_val_7_6 / g_bcabc8 * g_bcab20;
        g_b46d1c = (g_bcabd8 - item_18) / g_bcabc8 * g_bcab20;
        g_b816fc = (g_bcabd4 - item_14) / g_bcabcc * g_bcab24;
        g_b8179c = (g_bcabdc - item_14) / g_bcabcc * g_bcab24;
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

    int32_t item_10 = context;
    int32_t data_5 = DynObj_RemoveSymbol_15();
    (*((data_5 << 2) + &g_a94e84))(&item_10, item_18, item_14, item_10, param_2, param_3);
    int32_t result;
    return result;
}
