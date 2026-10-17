// IGI native provenance: DisplayRender_ProcessCouldntevicttext - 0x00494700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00494700-DisplayRender_ProcessCouldntevicttext.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessCouldntevicttext.h"

int32_t* DisplayRender_ProcessCouldntevicttext()

{
    int32_t* 5ca114_3 = g_5ca114;

    if (5ca114_3)
    {
        if (!(*(*5ca114_3 + 0x18))(5ca114_3))
            goto label_49479f;

        int32_t* 5ca110_1 = g_5ca110;
        int32_t eax_1 = (*(*5ca110_1 + 0x1c))(5ca110_1);
        void var_6f8;

        if (!eax_1)
        {
            int32_t* 5ca114_1 = g_5ca114;
            (*(*5ca114_1 + 0x8c))(5ca114_1, 0, 0);
            int32_t* 5ca114_2 = g_5ca114;
            (*(*5ca114_2 + 0x8c))(5ca114_2, 1, 0);
            int32_t* 5ca10c_1 = g_5ca10c;

            if ((*(*5ca10c_1 + 0x64))(5ca10c_1))
            {
                int32_t var_2f8 = 0x17c;
                int32_t var_17c = 0x17c;
                int32_t* 5ca10c_2 = g_5ca10c;
                (*(*5ca10c_2 + 0x2c))(5ca10c_2, &var_2f8, &var_17c);
                int32_t var_2b8;
                int32_t var_714_6 = var_2b8;
                5ca114_3 = Game_DataSymbolLoad(&var_6f8,
                    "Couldn't restore surfaces\nVideo memory free: %d");
            }
            else
            {
                Display_CloseDevice_4(g_5ca120);
                Display_OpenDevice_7();
            label_49479f:

                if (!FX_FragmentSimulate_23())
                {
                    int32_t var_708;
                    POINT point;

                    if (!FX_FragmentSimulate_23())
                    {
                        GetClientRect(FX_ExplosionSpawn_22(), &var_708);
                        ClientToScreen(FX_ExplosionSpawn_22(), &var_708);
                        ClientToScreen(FX_ExplosionSpawn_22(), &point);
                    }
                    else
                    {
                        var_708 = 0;
                        int32_t var_704_1 = 0;
                        point.x = g_c28b44;
                        point.y = g_c28b48;
                    }
                    int32_t* 5ca0fc_2 = g_5ca0fc;
                    int32_t esi_3 =
                        (*(*5ca0fc_2 + 0x14))(5ca0fc_2, &var_708, g_5ca100, 0, 0x200, 0);

                    if (esi_3 == 0x8876021c)
                    {
                        int32_t* 5ca0fc_3 = g_5ca0fc;
                        esi_3 =
                            (*(*5ca0fc_3 + 0x14))(5ca0fc_3, &var_708, g_5ca100, 0, 0x1000000, 0);
                    }

                    if (esi_3)
                    {
                        Game_DataSymbolLoad(&var_6f8, "Couldn't update primary surface");
                        int32_t var_720_5 = DDERR_GENERIC(esi_3);
                        void* var_724_5 = &var_6f8;
                        Error_Show("%s\n\nDirectX error message: %s");

                        while (true)
                            /* nop */
                    }
                }
                else
                {
                    int32_t* 5ca0fc_1 = g_5ca0fc;
                    int32_t eax_6 = (*(*5ca0fc_1 + 0x2c))(5ca0fc_1, 0, 0);

                    if (eax_6)
                    {
                        Game_DataSymbolLoad(&var_6f8, "Couldn't flip");
                        int32_t var_720_2 = DDERR_GENERIC(eax_6);
                        void* var_724_2 = &var_6f8;
                        Error_Show("%s\n\nDirectX error message: %s");

                        while (true)
                            /* nop */
                    }
                }

                int32_t* 5ca114_4 = g_5ca114;
                5ca114_3 = (*(*5ca114_4 + 0x14))(5ca114_4);

                if (5ca114_3)
                {
                    Game_DataSymbolLoad(&var_6f8, "BeginScene failed.");
                    int32_t var_720_6 = DDERR_GENERIC(5ca114_3);
                    void* var_724_6 = &var_6f8;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }
        else
        {
            Game_DataSymbolLoad(&var_6f8, "Couldn't evict textures");
            int32_t var_720_1 = DDERR_GENERIC(eax_1);
            void* var_724_1 = &var_6f8;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    g_bcad98 = 0;
    g_bcad88 = 0;
    g_bcad08 = 0;
    return 5ca114_3;
}
