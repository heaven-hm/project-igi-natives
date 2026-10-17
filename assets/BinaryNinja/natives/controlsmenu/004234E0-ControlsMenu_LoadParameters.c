// Original IGI.EXE function: ControlsMenu_LoadParameters (VA 0x004234E0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_LoadParameters.h"
int32_t ControlsMenu_LoadParameters(void* a1)

{
    void* srcS = a1;

    if (*(srcS + 0x35a))
    {
        Menu_FormatScreen_12(srcS);
        *(srcS + 0x35a) = 0;
    }

    if (!*(srcS + 0x359))
    {
        char* v_1c;
        void v_18;
        Menu_UpdateLanguage_14(srcS, *(srcS + 0x20), *(srcS + 0x24), *(srcS + 0x28), *(srcS + 0x2c),
            &v_18, &v_1c);

        if (*(srcS + 0x4b))
        {
            int32_t valA27;
            int32_t tmpD10;
            tmpD10 = HIGHD(0x66666667 * (v_1c - *(srcS + 0x24)));
            valA27 = LOWD(0x66666667 * (v_1c - *(srcS + 0x24)));
            int32_t tmpD11 = tmpD10 >> 3;
            int32_t valA30 = tmpD11 + (tmpD11 >> 0x1f) + *(srcS + 0x354);
            *(srcS + 0x35c) = valA30;
            int32_t* dstD2 = *(srcS + (valA30 << 2) + 0x154);

            if (dstD2)
                Sys_FreeMemory_18(dstD2, Menu_LocalSS(*(srcS + 0x44), "Select a key or button"));

            Menu_LeaveMenus_4(*(srcS + 0x44));
            *(srcS + 0x359) = 1;
            SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
        }
    }
    else
    {
        int32_t valA1 = *g_c28f8c;
        a1 = 0;

        if (!(g_c28c63 & 0x80))
        {
            void* ctxB1 = *(srcS + 0x35c);
            int32_t v_28;
            int32_t i;

            for (i = 0; i < 0x7f; i += 1)
            {
                if (a1)
                    goto label_4235ff;

                KEY_ANGLE(i, &v_28, nullptr);
                int32_t objC2 = v_28;
                int32_t valA8 = objC2 >> 0x1e & 3;

                if (valA8 == 1)
                {
                    if (*((objC2 & 0x3fffffff) + 0xc28c62) & 0x80)
                        a1 = 1;
                }
                else if (valA8 == 3 && valA1 == (objC2 & 0x3fffffff))
                    a1 = 1;

                int32_t valA4 = objC2 & 0x3fffffff;

                if (valA4 == 0xdb || valA4 == 0xdc)
                    a1 = 0;
            }

            if (a1)
            {
            label_4235ff:
                int32_t valA16;
                int32_t tmpD4;
                tmpD4 = HIGHD(Sys_CheckHeap_13(0x57bc48));
                valA16 = LOWD(Sys_CheckHeap_13(0x57bc48));
                int32_t v_40_3 = ((valA16 ^ tmpD4) - tmpD4) % 7 + 1;
                void v_14;
                Game_DataSymbolLoad(&v_14, "menu_k0%.1d");
                SoundSys_AttachLipsync_8(&v_14, 0, 0);
                v_28 = *(srcS + (ctxB1 << 2) + 0x254);
                Menu_UpdateLanguage_12(srcS, ctxB1, i - 1);
                void* i_1 = nullptr;
                void** ctxB2 = srcS + 0x254;

                do
                {
                    if (ctxB1 != i_1 && *ctxB2 == i - 1)
                        Menu_UpdateLanguage_12(srcS, i_1, v_28);

                    i_1 += 1;
                    ctxB2 = &ctxB2[1];
                } while (i_1 < 0x1b);

                if (a1)
                    goto label_423685;
            }
        }
        else
        {
            void* valA3 = *(srcS + 0x35c);
            Menu_UpdateLanguage_12(srcS, valA3, *(srcS + (valA3 << 2) + 0x254));
            SoundSys_AttachLipsync_8("menu_cancel", 0, 0);
        label_423685:
            FX_ExplosionSpawn_17();
            Menu_UpdateLanguage_4(*(srcS + 0x44));
            *(srcS + 0x359) = 0;
            *(srcS + 0x35c) = 0xffffffff;
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(srcS);
}
