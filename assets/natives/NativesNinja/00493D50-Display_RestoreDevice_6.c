#include "00493D50-Display_RestoreDevice_6.h"
/* 0x00493d50 Display_RestoreDevice_6 full linked: callers=0 callees=59 */
int32_t sub_493d50(void* a1)

{
    int32_t eax = sub_48f130();
    int32_t var_ebc = 0;
    memcpy(0xc28b40, a1, 0x11c);
    char* edx = a1 + 0x1c;
    void var_4f8;
    void* var_a08 = &var_4f8;
    int32_t* var_a04 = &var_ebc;
    char* edi = edx;
    int32_t i = 0xffffffff;
    int32_t var_a14 = 0;
    char* var_a10 = edx;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    if (~i == 1)
    {
        void var_a94;
        sub_492370(&var_a94, 0, 0, 0, 0);
        edx = &var_a94;
        void* var_a10_1 = &var_a94;
    }

    char* edi_1 = edx;

    if (!edx)
        edi_1 = &g_567c74;

    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:2_1 = 0 != *edi_1;
        edi_1 = &edi_1[1];
        i_1 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_1 = ~i_1;
    int32_t esi_2;
    int32_t edi_3;
    edi_3 = memcpy(0xc28b5c, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
    memcpy(edi_3, esi_2, ecx_1 & 3);
    sub_491ef0(&var_a14);

    if (!var_ebc)
    {
        Error_Show("Direct3D device not found");

        while (true)
            /* nop */

        return;
    }

    int32_t* esi_3 = &g_5349e0;

    if (!g_bcad74)
        esi_3 = &g_534a00;

    struct IUnknown pUnkOuter = g_5ca10c;
    void var_e94;

    if (!pUnkOuter)
    {
        GUID* lpGuid;
        HRESULT eax_4 = DirectDrawCreateEx(lpGuid, &g_5ca10c, 0x534a50, pUnkOuter);

        if (!eax_4)
            pUnkOuter = g_5ca10c;
        else
        {
            Game_DataSymbolLoad(&var_e94, "Couldn't create DirectDraw object");
            int32_t var_ee4_2 = sub_492be0(eax_4);
            void* var_ee8_2 = &var_e94;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    int32_t edi_5 = *pUnkOuter;
    int32_t var_ee0_1;
    int32_t var_edc_1;
    int32_t var_ed8_2;

    if (!eax)
    {
        var_ed8_2 = 0x1008;
        var_edc_1 = sub_48f0a0();
        var_ee0_1 = g_5ca10c;
    }
    else
    {
        var_ed8_2 = 0x1011;
        var_edc_1 = sub_48f0a0();
        var_ee0_1 = g_5ca10c;
    }

    int32_t eax_9 = (*(edi_5 + 0x50))(var_ee0_1, var_edc_1, var_ed8_2);

    if (eax_9)
    {
        Game_DataSymbolLoad(&var_e94, "Couldn't set cooperative level");
        int32_t var_ee4_3 = sub_492be0(eax_9);
        void* var_ee8_3 = &var_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_11 = g_5ca10c;
    int32_t eax_12 = (**eax_11)(eax_11, 0x534a20, &g_5ca110);

    if (eax_12)
    {
        Game_DataSymbolLoad(&var_e94, "Couldn't get the Direct3D interface");
        int32_t var_ee4_4 = sub_492be0(eax_12);
        void* var_ee8_4 = &var_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t eax_14 = sub_4942a0(0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, a1, esi_3);
    int32_t var_eec_1;
    int32_t var_ee8_5;
    void* var_edc_5;
    int32_t* var_ed8_4;

    if (eax_14 == 0x88760091)
    {
        var_ed8_4 = esi_3;
        var_edc_5 = a1;
        int32_t var_ee0_5 = 0xffffffff;
        int32_t var_ee4_5 = 0xffffffff;
        var_ee8_5 = 0xffffffff;
        var_eec_1 = 0x10;
    label_493f8b:

        if (sub_4942a0(var_eec_1, var_ee8_5, 0xffffffff, 0xffffffff, var_edc_5, var_ed8_4)
            && sub_4942a0(0x10, 0x10, 0xffffffff, 0xffffffff, a1, esi_3))
        {
            int32_t eax_17 = sub_4942a0(0x10, 0x10, 0x280, 0x1e0, a1, esi_3);
            g_c28b44 = 0x280;
            g_c28b48 = 0x1e0;

            if (eax_17)
            {
                Game_DataSymbolLoad(&var_e94, "Couldn't create device");
                int32_t var_ee4_7 = sub_492be0(eax_17);
                void* var_ee8_6 = &var_e94;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }
    }
    else if (eax_14)
    {
        var_ed8_4 = esi_3;
        var_edc_5 = a1;
        int32_t var_ee0_6 = 0xffffffff;
        int32_t var_ee4_6 = 0xffffffff;
        var_ee8_5 = 0x10;
        var_eec_1 = 0xffffffff;
        goto label_493f8b;
    }
    int32_t* eax_19 = g_5ca114;
    int32_t eax_20 = (*(*eax_19 + 0xc))(eax_19, &g_bcac00);

    if (eax_20)
    {
        Game_DataSymbolLoad(&var_e94, "Couldn't get device caps");
        int32_t var_ee4_8 = sub_492be0(eax_20);
        void* var_ee8_7 = &var_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t eax_22 = g_bcadb4;
    int32_t edx_3 = g_5ca044;
    MSG msg;
    msg.wParam = g_5ca0d8;
    int32_t ecx_8 = g_bcad8c;
    msg.time = eax_22;
    int32_t* eax_23 = g_5ca114;
    msg.pt.x = ecx_8;
    msg.hwnd = 0;
    msg.message = 0;
    msg.lParam = edx_3;
    int32_t eax_24 = (*(*eax_23 + 0x34))(eax_23, &msg);

    if (eax_24)
    {
        Game_DataSymbolLoad(&var_e94, "Couldn't set viewport");
        int32_t var_ee4_9 = sub_492be0(eax_24);
        void* var_ee8_8 = &var_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_26 = g_5ca10c;
    int32_t* var_ec4;
    int32_t eax_27 = (*(*eax_26 + 0x10))(eax_26, 0, &var_ec4, 0);

    if (eax_27)
    {
        Game_DataSymbolLoad(&var_e94, "Couldn't create clipper");
        int32_t var_ee4_11 = sub_492be0(eax_27);
        void* var_ee8_9 = &var_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t esi_8 = *var_ec4;
    int32_t eax_29 = sub_48f0a0();
    int32_t eax_31 = (*(esi_8 + 0x20))(var_ec4, 0, eax_29);

    if (eax_31)
    {
        Game_DataSymbolLoad(&var_e94, "Couldn't set clipper's hWnd");
        int32_t var_ee4_12 = sub_492be0(eax_31);
        void* var_ee8_10 = &var_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_33 = g_5ca0fc;
    int32_t eax_34 = (*(*eax_33 + 0x70))(eax_33, var_ec4);

    if (!eax_34)
    {
        int32_t* eax_36 = var_ec4;
        (*(*eax_36 + 8))(eax_36);
        int32_t* eax_37 = g_5ca114;

        if (eax_37)
        {
            int32_t eax_38 = (*(*eax_37 + 0x14))(eax_37);

            if (eax_38)
            {
                Game_DataSymbolLoad(&var_e94, "BeginScene failed.");
                int32_t var_ee4_14 = sub_492be0(eax_38);
                void* var_ee8_12 = &var_e94;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }

        int32_t* edx_8 = g_5ca044;
        var_ec4 = g_5ca0d8;
        int32_t var_ec0 = 0;
        long double x87_r7 = var_ec4;
        var_ec4 = edx_8;
        int32_t var_ec0_1 = 0;
        msg.lParam = 0;
        msg.pt.x = x87_r7;
        long double x87_r7_1 = var_ec4;
        msg.time = 0;
        msg.pt.y = x87_r7_1;
        sub_493ca0(&msg);
        sub_491ca0(g_5ca118);
        sub_493830();

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

        int16_t x87control;
        sub_498460(x87control);
        sub_4946d0();
        return 0xffffffff;
    }

    Game_DataSymbolLoad(&var_e94, "Couldn't set clipper");
    int32_t var_ee4_13 = sub_492be0(eax_34);
    void* var_ee8_11 = &var_e94;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
