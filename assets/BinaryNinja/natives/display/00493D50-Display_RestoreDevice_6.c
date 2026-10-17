// Original IGI.EXE function: Display_RestoreDevice_6 (VA 0x00493D50; static CFG gate PASS, CFG score 0.955).
#include "Display_RestoreDevice_6.h"
int32_t Display_RestoreDevice_6(void* context)

{
    int32_t data_val = FX_FragmentSimulate_23();
    int32_t item_ebc = 0;
    memcpy(0xc28b40, context, 0x11c);
    char* temp_val = context + 0x1c;
    void item_4f8;
    void* item_a08 = &item_4f8;
    int32_t* item_a04 = &item_ebc;
    char* dest_val = temp_val;
    int32_t i = 0xffffffff;
    int32_t item_a14 = 0;
    char* item_a10 = temp_val;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val = &dest_val[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    if (~i == 1)
    {
        void item_a94;
        Display_08X04X04X02X02X02X02(&item_a94, 0, 0, 0, 0);
        temp_val = &item_a94;
        void* item_a10_1 = &item_a94;
    }

    char* dest_1 = temp_val;

    if (!temp_val)
        dest_1 = &g_567c74;

    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_2_1 = 0 != *dest_1;
        dest_1 = &dest_1[1];
        i_1 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_1 = ~i_1;
    int32_t source_2;
    int32_t dest_3;
    dest_3 = memcpy(0xc28b5c, dest_1 - entity_1, entity_1 & 0xfffffffc);
    memcpy(dest_3, source_2, entity_1 & 3);
    Display_CloseDevice_6(&item_a14);

    if (!item_ebc)
    {
        Error_Show("Direct3D device not found");

        while (true)
            /* nop */

        return;
    }

    int32_t* source_3 = &g_5349e0;

    if (!g_bcad74)
        source_3 = &g_534a00;

    struct IUnknown pUnkOuter = g_5ca10c;
    void item_e94;

    if (!pUnkOuter)
    {
        GUID* lpGuid;
        HRESULT data_4 = DirectDrawCreateEx(lpGuid, &g_5ca10c, 0x534a50, pUnkOuter);

        if (!data_4)
            pUnkOuter = g_5ca10c;
        else
        {
            Game_DataSymbolLoad(&item_e94, "Couldn't create DirectDraw object");
            int32_t item_ee4_2 = DDERR_GENERIC(data_4);
            void* item_ee8_2 = &item_e94;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    int32_t dest_5 = *pUnkOuter;
    int32_t item_ee0_1;
    int32_t item_edc_1;
    int32_t item_ed8_2;

    if (!data_val)
    {
        item_ed8_2 = 0x1008;
        item_edc_1 = FX_ExplosionSpawn_22();
        item_ee0_1 = g_5ca10c;
    }
    else
    {
        item_ed8_2 = 0x1011;
        item_edc_1 = FX_ExplosionSpawn_22();
        item_ee0_1 = g_5ca10c;
    }

    int32_t data_9 = (*(dest_5 + 0x50))(item_ee0_1, item_edc_1, item_ed8_2);

    if (data_9)
    {
        Game_DataSymbolLoad(&item_e94, "Couldn't set cooperative level");
        int32_t item_ee4_3 = DDERR_GENERIC(data_9);
        void* item_ee8_3 = &item_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_11 = g_5ca10c;
    int32_t data_12 = (**data_11)(data_11, 0x534a20, &g_5ca110);

    if (data_12)
    {
        Game_DataSymbolLoad(&item_e94, "Couldn't get the Direct3D interface");
        int32_t item_ee4_4 = DDERR_GENERIC(data_12);
        void* item_ee8_4 = &item_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t data_14 = Display_Display(0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, context, source_3);
    int32_t item_eec_1;
    int32_t item_ee8_5;
    void* item_edc_5;
    int32_t* item_ed8_4;

    if (data_14 == 0x88760091)
    {
        item_ed8_4 = source_3;
        item_edc_5 = context;
        int32_t item_ee0_5 = 0xffffffff;
        int32_t item_ee4_5 = 0xffffffff;
        item_ee8_5 = 0xffffffff;
        item_eec_1 = 0x10;
    label_493f8b:

        if (Display_Display(item_eec_1, item_ee8_5, 0xffffffff, 0xffffffff, item_edc_5, item_ed8_4)
            && Display_Display(0x10, 0x10, 0xffffffff, 0xffffffff, context, source_3))
        {
            int32_t data_17 = Display_Display(0x10, 0x10, 0x280, 0x1e0, context, source_3);
            g_c28b44 = 0x280;
            g_c28b48 = 0x1e0;

            if (data_17)
            {
                Game_DataSymbolLoad(&item_e94, "Couldn't create device");
                int32_t item_ee4_7 = DDERR_GENERIC(data_17);
                void* item_ee8_6 = &item_e94;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }
    }
    else if (data_14)
    {
        item_ed8_4 = source_3;
        item_edc_5 = context;
        int32_t item_ee0_6 = 0xffffffff;
        int32_t item_ee4_6 = 0xffffffff;
        item_ee8_5 = 0x10;
        item_eec_1 = 0xffffffff;
        goto label_493f8b;
    }
    int32_t* data_19 = g_5ca114;
    int32_t data_20 = (*(*data_19 + 0xc))(data_19, &g_bcac00);

    if (data_20)
    {
        Game_DataSymbolLoad(&item_e94, "Couldn't get device caps");
        int32_t item_ee4_8 = DDERR_GENERIC(data_20);
        void* item_ee8_7 = &item_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t data_22 = g_bcadb4;
    int32_t temp_3 = g_5ca044;
    MSG msg;
    msg.wParam = g_5ca0d8;
    int32_t entity_8 = g_bcad8c;
    msg.time = data_22;
    int32_t* data_23 = g_5ca114;
    msg.pt.x = entity_8;
    msg.hwnd = 0;
    msg.message = 0;
    msg.lParam = temp_3;
    int32_t data_24 = (*(*data_23 + 0x34))(data_23, &msg);

    if (data_24)
    {
        Game_DataSymbolLoad(&item_e94, "Couldn't set viewport");
        int32_t item_ee4_9 = DDERR_GENERIC(data_24);
        void* item_ee8_8 = &item_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_26 = g_5ca10c;
    int32_t* item_ec4;
    int32_t data_27 = (*(*data_26 + 0x10))(data_26, 0, &item_ec4, 0);

    if (data_27)
    {
        Game_DataSymbolLoad(&item_e94, "Couldn't create clipper");
        int32_t item_ee4_11 = DDERR_GENERIC(data_27);
        void* item_ee8_9 = &item_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t source_8 = *item_ec4;
    int32_t data_29 = FX_ExplosionSpawn_22();
    int32_t data_31 = (*(source_8 + 0x20))(item_ec4, 0, data_29);

    if (data_31)
    {
        Game_DataSymbolLoad(&item_e94, "Couldn't set clipper's hWnd");
        int32_t item_ee4_12 = DDERR_GENERIC(data_31);
        void* item_ee8_10 = &item_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_33 = g_5ca0fc;
    int32_t data_34 = (*(*data_33 + 0x70))(data_33, item_ec4);

    if (!data_34)
    {
        int32_t* data_36 = item_ec4;
        (*(*data_36 + 8))(data_36);
        int32_t* data_37 = g_5ca114;

        if (data_37)
        {
            int32_t data_38 = (*(*data_37 + 0x14))(data_37);

            if (data_38)
            {
                Game_DataSymbolLoad(&item_e94, "BeginScene failed.");
                int32_t item_ee4_14 = DDERR_GENERIC(data_38);
                void* item_ee8_12 = &item_e94;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }

        int32_t* temp_8 = g_5ca044;
        item_ec4 = g_5ca0d8;
        int32_t item_ec0 = 0;
        long double fpu7 = item_ec4;
        item_ec4 = temp_8;
        int32_t item_ec0_1 = 0;
        msg.lParam = 0;
        msg.pt.x = fpu7;
        long double fpu_val_7_1 = item_ec4;
        msg.time = 0;
        msg.pt.y = fpu_val_7_1;
        Display_CouldnTSetClippingWi(&msg);
        Display_CloseDevice_4(g_5ca118);
        Display_CouldnTCreateDynamic();

        if (PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE))
        {
            BOOL i_2;

            do
            {
                if (GetMessageA(&msg, nullptr, 0, 0))
                {
                    TranslateMessage(&msg);
                    DispatchMessageA(&msg);
                }

                i_2 = PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE);
            } while (i_2);
        }

        int16_t fpu_control;
        Display_ClearSurfaces_16(fpu_control);
        Display_OpenDevice_7();
        return 0xffffffff;
    }

    Game_DataSymbolLoad(&item_e94, "Couldn't set clipper");
    int32_t item_ee4_13 = DDERR_GENERIC(data_34);
    void* item_ee8_11 = &item_e94;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
