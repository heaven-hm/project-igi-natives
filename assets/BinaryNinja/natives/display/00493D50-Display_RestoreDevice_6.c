// Original IGI.EXE function: Display_RestoreDevice_6 (VA 0x00493D50; static CFG gate PASS, CFG score 0.955).
#include "Display_RestoreDevice_6.h"
int32_t Display_RestoreDevice_6(void* a1)

{
    int32_t valA = FX_FragmentSimulate_23();
    int32_t v_ebc = 0;
    memcpy(0xc28b40, a1, 0x11c);
    char* tmpD = a1 + 0x1c;
    void v_4f8;
    void* v_a08 = &v_4f8;
    int32_t* v_a04 = &v_ebc;
    char* dstD = tmpD;
    int32_t i = 0xffffffff;
    int32_t v_a14 = 0;
    char* v_a10 = tmpD;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD = &dstD[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    if (~i == 1)
    {
        void v_a94;
        Display_08X04X04X02X02X02X02(&v_a94, 0, 0, 0, 0);
        tmpD = &v_a94;
        void* v_a10_1 = &v_a94;
    }

    char* dstD1 = tmpD;

    if (!tmpD)
        dstD1 = &g_567c74;

    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_2_1 = 0 != *dstD1;
        dstD1 = &dstD1[1];
        i_1 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC1 = ~i_1;
    int32_t srcS2;
    int32_t dstD3;
    dstD3 = memcpy(0xc28b5c, dstD1 - objC1, objC1 & 0xfffffffc);
    memcpy(dstD3, srcS2, objC1 & 3);
    Display_CloseDevice_6(&v_a14);

    if (!v_ebc)
    {
        Error_Show("Direct3D device not found");

        while (true)
            /* nop */

        return;
    }

    int32_t* srcS3 = &g_5349e0;

    if (!g_bcad74)
        srcS3 = &g_534a00;

    struct IUnknown pUnkOuter = g_5ca10c;
    void v_e94;

    if (!pUnkOuter)
    {
        GUID* lpGuid;
        HRESULT valA4 = DirectDrawCreateEx(lpGuid, &g_5ca10c, 0x534a50, pUnkOuter);

        if (!valA4)
            pUnkOuter = g_5ca10c;
        else
        {
            Game_DataSymbolLoad(&v_e94, "Couldn't create DirectDraw object");
            int32_t v_ee4_2 = DDERR_GENERIC(valA4);
            void* v_ee8_2 = &v_e94;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    int32_t dstD5 = *pUnkOuter;
    int32_t v_ee0_1;
    int32_t v_edc_1;
    int32_t v_ed8_2;

    if (!valA)
    {
        v_ed8_2 = 0x1008;
        v_edc_1 = FX_ExplosionSpawn_22();
        v_ee0_1 = g_5ca10c;
    }
    else
    {
        v_ed8_2 = 0x1011;
        v_edc_1 = FX_ExplosionSpawn_22();
        v_ee0_1 = g_5ca10c;
    }

    int32_t valA9 = (*(dstD5 + 0x50))(v_ee0_1, v_edc_1, v_ed8_2);

    if (valA9)
    {
        Game_DataSymbolLoad(&v_e94, "Couldn't set cooperative level");
        int32_t v_ee4_3 = DDERR_GENERIC(valA9);
        void* v_ee8_3 = &v_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA11 = g_5ca10c;
    int32_t valA12 = (**valA11)(valA11, 0x534a20, &g_5ca110);

    if (valA12)
    {
        Game_DataSymbolLoad(&v_e94, "Couldn't get the Direct3D interface");
        int32_t v_ee4_4 = DDERR_GENERIC(valA12);
        void* v_ee8_4 = &v_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t valA14 = Display_Display(0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, a1, srcS3);
    int32_t v_eec_1;
    int32_t v_ee8_5;
    void* v_edc_5;
    int32_t* v_ed8_4;

    if (valA14 == 0x88760091)
    {
        v_ed8_4 = srcS3;
        v_edc_5 = a1;
        int32_t v_ee0_5 = 0xffffffff;
        int32_t v_ee4_5 = 0xffffffff;
        v_ee8_5 = 0xffffffff;
        v_eec_1 = 0x10;
    label_493f8b:

        if (Display_Display(v_eec_1, v_ee8_5, 0xffffffff, 0xffffffff, v_edc_5, v_ed8_4)
            && Display_Display(0x10, 0x10, 0xffffffff, 0xffffffff, a1, srcS3))
        {
            int32_t valA17 = Display_Display(0x10, 0x10, 0x280, 0x1e0, a1, srcS3);
            g_c28b44 = 0x280;
            g_c28b48 = 0x1e0;

            if (valA17)
            {
                Game_DataSymbolLoad(&v_e94, "Couldn't create device");
                int32_t v_ee4_7 = DDERR_GENERIC(valA17);
                void* v_ee8_6 = &v_e94;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }
    }
    else if (valA14)
    {
        v_ed8_4 = srcS3;
        v_edc_5 = a1;
        int32_t v_ee0_6 = 0xffffffff;
        int32_t v_ee4_6 = 0xffffffff;
        v_ee8_5 = 0x10;
        v_eec_1 = 0xffffffff;
        goto label_493f8b;
    }
    int32_t* valA19 = g_5ca114;
    int32_t valA20 = (*(*valA19 + 0xc))(valA19, &g_bcac00);

    if (valA20)
    {
        Game_DataSymbolLoad(&v_e94, "Couldn't get device caps");
        int32_t v_ee4_8 = DDERR_GENERIC(valA20);
        void* v_ee8_7 = &v_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t valA22 = g_bcadb4;
    int32_t tmpD3 = g_5ca044;
    MSG msg;
    msg.wParam = g_5ca0d8;
    int32_t objC8 = g_bcad8c;
    msg.time = valA22;
    int32_t* valA23 = g_5ca114;
    msg.pt.x = objC8;
    msg.hwnd = 0;
    msg.message = 0;
    msg.lParam = tmpD3;
    int32_t valA24 = (*(*valA23 + 0x34))(valA23, &msg);

    if (valA24)
    {
        Game_DataSymbolLoad(&v_e94, "Couldn't set viewport");
        int32_t v_ee4_9 = DDERR_GENERIC(valA24);
        void* v_ee8_8 = &v_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA26 = g_5ca10c;
    int32_t* v_ec4;
    int32_t valA27 = (*(*valA26 + 0x10))(valA26, 0, &v_ec4, 0);

    if (valA27)
    {
        Game_DataSymbolLoad(&v_e94, "Couldn't create clipper");
        int32_t v_ee4_11 = DDERR_GENERIC(valA27);
        void* v_ee8_9 = &v_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t srcS8 = *v_ec4;
    int32_t valA29 = FX_ExplosionSpawn_22();
    int32_t valA31 = (*(srcS8 + 0x20))(v_ec4, 0, valA29);

    if (valA31)
    {
        Game_DataSymbolLoad(&v_e94, "Couldn't set clipper's hWnd");
        int32_t v_ee4_12 = DDERR_GENERIC(valA31);
        void* v_ee8_10 = &v_e94;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA33 = g_5ca0fc;
    int32_t valA34 = (*(*valA33 + 0x70))(valA33, v_ec4);

    if (!valA34)
    {
        int32_t* valA36 = v_ec4;
        (*(*valA36 + 8))(valA36);
        int32_t* valA37 = g_5ca114;

        if (valA37)
        {
            int32_t valA38 = (*(*valA37 + 0x14))(valA37);

            if (valA38)
            {
                Game_DataSymbolLoad(&v_e94, "BeginScene failed.");
                int32_t v_ee4_14 = DDERR_GENERIC(valA38);
                void* v_ee8_12 = &v_e94;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }

        int32_t* tmpD8 = g_5ca044;
        v_ec4 = g_5ca0d8;
        int32_t v_ec0 = 0;
        long double fpu7 = v_ec4;
        v_ec4 = tmpD8;
        int32_t v_ec0_1 = 0;
        msg.lParam = 0;
        msg.pt.x = fpu7;
        long double x87_r7_1 = v_ec4;
        msg.time = 0;
        msg.pt.y = x87_r7_1;
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

        int16_t x87control;
        Display_ClearSurfaces_16(x87control);
        Display_OpenDevice_7();
        return 0xffffffff;
    }

    Game_DataSymbolLoad(&v_e94, "Couldn't set clipper");
    int32_t v_ee4_13 = DDERR_GENERIC(valA34);
    void* v_ee8_11 = &v_e94;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
