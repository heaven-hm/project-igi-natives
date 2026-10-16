#include "004234E0-ControlsMenu_LoadParameters.h"
/* 0x004234e0 ControlsMenu_LoadParameters full linked: callers=0 callees=19 */
int32_t ControlsMenu_LoadParameters(void* a1)

{
    void* esi = a1;

    if (*(esi + 0x35a))
    {
        Menu_FormatScreen_12(esi);
        *(esi + 0x35a) = 0;
    }

    if (!*(esi + 0x359))
    {
        char* var_1c;
        void var_18;
        Menu_UpdateLanguage_14(esi, *(esi + 0x20), *(esi + 0x24), *(esi + 0x28), *(esi + 0x2c),
            &var_18, &var_1c);

        if (*(esi + 0x4b))
        {
            int32_t eax_27;
            int32_t edx_10;
            edx_10 = HIGHD(0x66666667 * (var_1c - *(esi + 0x24)));
            eax_27 = LOWD(0x66666667 * (var_1c - *(esi + 0x24)));
            int32_t edx_11 = edx_10 >> 3;
            int32_t eax_30 = edx_11 + (edx_11 >> 0x1f) + *(esi + 0x354);
            *(esi + 0x35c) = eax_30;
            int32_t* edi_2 = *(esi + (eax_30 << 2) + 0x154);

            if (edi_2)
                sub_4b6e90(edi_2, Menu_LocalSS(*(esi + 0x44), "Select a key or button"));

            Menu_LeaveMenus_4(*(esi + 0x44));
            *(esi + 0x359) = 1;
            sub_4e7180("menu_sel2", 0, 0);
        }
    }
    else
    {
        int32_t eax_1 = *g_c28f8c;
        a1 = 0;

        if (!(g_c28c63 & 0x80))
        {
            void* ebx_1 = *(esi + 0x35c);
            int32_t var_28;
            int32_t i;

            for (i = 0; i < 0x7f; i += 1)
            {
                if (a1)
                    goto label_4235ff;

                KEY_ANGLE(i, &var_28, nullptr);
                int32_t ecx_2 = var_28;
                int32_t eax_8 = ecx_2 >> 0x1e & 3;

                if (eax_8 == 1)
                {
                    if (*((ecx_2 & 0x3fffffff) + 0xc28c62) & 0x80)
                        a1 = 1;
                }
                else if (eax_8 == 3 && eax_1 == (ecx_2 & 0x3fffffff))
                    a1 = 1;

                int32_t eax_4 = ecx_2 & 0x3fffffff;

                if (eax_4 == 0xdb || eax_4 == 0xdc)
                    a1 = 0;
            }

            if (a1)
            {
            label_4235ff:
                int32_t eax_16;
                int32_t edx_4;
                edx_4 = HIGHD(sub_4b4740(0x57bc48));
                eax_16 = LOWD(sub_4b4740(0x57bc48));
                int32_t var_40_3 = ((eax_16 ^ edx_4) - edx_4) % 7 + 1;
                void var_14;
                Game_DataSymbolLoad(&var_14, "menu_k0%.1d");
                sub_4e7180(&var_14, 0, 0);
                var_28 = *(esi + (ebx_1 << 2) + 0x254);
                Menu_UpdateLanguage_12(esi, ebx_1, i - 1);
                void* i_1 = nullptr;
                void** ebx_2 = esi + 0x254;

                do
                {
                    if (ebx_1 != i_1 && *ebx_2 == i - 1)
                        Menu_UpdateLanguage_12(esi, i_1, var_28);

                    i_1 += 1;
                    ebx_2 = &ebx_2[1];
                } while (i_1 < 0x1b);

                if (a1)
                    goto label_423685;
            }
        }
        else
        {
            void* eax_3 = *(esi + 0x35c);
            Menu_UpdateLanguage_12(esi, eax_3, *(esi + (eax_3 << 2) + 0x254));
            sub_4e7180("menu_cancel", 0, 0);
        label_423685:
            sub_48a8c0();
            Menu_UpdateLanguage_4(*(esi + 0x44));
            *(esi + 0x359) = 0;
            *(esi + 0x35c) = 0xffffffff;
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(esi);
}
