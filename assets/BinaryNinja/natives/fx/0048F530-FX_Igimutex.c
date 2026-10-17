// Original IGI.EXE function: FX_Igimutex (VA 0x0048F530; static CFG gate PASS, CFG score 0.951).
#include "FX_Igimutex.h"
WPARAM __stdcall FX_Igimutex(HINSTANCE context, int32_t param_2 )

{
    HANDLE hMutex = CreateMutexA(nullptr, 1, "IGIMUTEX");
    WPARAM result = 0;
    PSTR lpText;
    char* lpCaption;
    enum MESSAGEBOX_STYLE uType;

    if (!hMutex)
    {
    label_48f8f0:
        uType = MB_ICONHAND;
        lpCaption = "Error";
        lpText = "IGI is already running.";
    }
    else
    {
        if (GetLastError() == ERROR_ALREADY_EXISTS)
            goto label_48f8f0;

        if (GetLastError() == ERROR_INVALID_HANDLE)
            goto label_48f8f0;

        CoInitialize(nullptr);
        HWND hWnd_1 = GetForegroundWindow();
        WNDCLASSA wndClass;
        wndClass.style = 3;
        wndClass.lpfnWndProc = sub_48f970;
        wndClass.cbClsExtra = 0;
        wndClass.cbWndExtra = 0;
        wndClass.hInstance = context;
        wndClass.hIcon = LoadIconA(context, 0x7f00);
        HCURSOR data_3 = LoadCursorA(nullptr, 0x7f00);
        wndClass.hbrBackground = 7;
        wndClass.hCursor = data_3;
        char (* data_4)[0xa] = g_541d68;
        wndClass.lpszMenuName = data_4;
        wndClass.lpszClassName = data_4;
        RegisterClassA(&wndClass);
        FX_FragmentSimulate_22(param_2);
        FX_SmokeEmit_22(context);
        FX_TrailUpdate_22("filesys.cfg");
        FX_ExplosionSpawn_23("Innerloop");
        FX_SmokeEmit_23(1);
        FX_FireBallUpdate_23(1);
        App_ContextSetDebugged(0);
        FX_FireBallUpdate_24(1);
        App_ContextSetDebugtextState(0);
        App_ContextSetLightmapsUsed(1);
        App_ContextSetTerrainLightmapsUsed(1);
        FX_DebrisSpawn_25(0);
        FX_TrailUpdate_25(0);
        FX_ExplosionSpawn_26(0);
        FX_TrailUpdate_24(1);
        FX_FireBallUpdate_26(0);
        FX_TrailUpdate_26(&g_567c74);
        FX_DebrisSpawn_24(0);
        memset(0x5c8d28, 0, 0xc0);
        g_5c8df0 = &g_5c8df4;
        g_5c8df8 = &g_5c8df0;
        g_5c8df4 = 0;
        FX_FragmentSimulate_27("Window", sub_48f350);
        FX_FragmentSimulate_27("WinInput", sub_48f920);
        FX_FragmentSimulate_27("Germany", sub_48f930);
        FX_FragmentSimulate_27("USA", sub_48f950);
        float item_464;
        HWND hWnd;
        Display_DinputDll(&item_464, &hWnd);
        int32_t lpParam = 0;

        if (item_464 < 0x700)
        {
            int32_t item_47c_2 = 7;
            void text;
            Game_DataSymbolLoad(&text,
                "This application requires DirectX version %d.%d or greater to run.");
            MessageBoxA(nullptr, &text, "Error", MB_ICONHAND);
            lpParam = 1;
            Camera_ApplyBandFilter_6(1);
        }

        int32_t data_8;
        int32_t temp_1;
        temp_1 = HIGHD(GetSystemMetrics(SM_CYSCREEN) - 0x1e0);
        data_8 = LOWD(GetSystemMetrics(SM_CYSCREEN) - 0x1e0);
        int32_t data_13;
        int32_t temp_2;
        temp_2 = HIGHD(GetSystemMetrics(SM_CXSCREEN) - 0x280);
        data_13 = LOWD(GetSystemMetrics(SM_CXSCREEN) - 0x280);
        int32_t data_16 = FX_FragmentSimulate_23();
        int32_t data_17 = -(data_16);
        PSTR data_21 = g_541d68;
        HWND hWnd_2 = CreateWindowExA(WS_EX_LEFT, data_21, data_21,
            ((data_17 - data_17) & 0x5e380000) + 0x37c80000, (data_13 - temp_2) >> 1,
            (data_8 - temp_1) >> 1, 0x280, 0x1e0, nullptr, nullptr, context, lpParam);
        uType = MB_OK;
        hWnd = hWnd_2;

        if (hWnd_2)
        {
            ShowCursor(0);
            ShowWindow(hWnd_2, SW_SHOWDEFAULT);
            FX_DebrisSpawn_22(hWnd_2);
            int16_t fpu_control;
            Display_ClearSurfaces_16(fpu_control);
            char data_22;
            int16_t x87control_1;
            data_22 = QTask_CreateTask();
            g_5c8de8 = data_22;
            FX_FragmentSimulate_27("HardcoreGerman", sub_48f960);

            if (g_5c8de8)
            {
                while (true)
                {
                    item_464 = -1.75f;

                    if (item_464 != 0xffffffff)
                    {
                        Error_Show("Invalid FPU rounding mode. May be caused by running a debug "
                        "session with ftol optimize turned on.");

                        while (true)
                            /* nop */
                    }
                    else
                    {
                        x87control_1 = Display_ClearSurfaces_16(x87control_1);

                        if (!FX_DebrisSpawn_23())
                            Sleep(0x1f4);
                        else
                            QTask_OpenEvent(context);

                        if (!g_5c8de8)
                            DestroyWindow(hWnd);

                        MSG msg;

                        if (PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE))
                        {
                            BOOL i;

                            do
                            {
                                if (!GetMessageA(&msg, nullptr, 0, 0))
                                {
                                    WPARAM wParam = msg.wParam;
                                    g_5c8de8 = 0;
                                    result = wParam;
                                    goto label_48f8ac;
                                }

                                TranslateMessage(&msg);
                                DispatchMessageA(&msg);
                                i = PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE);
                            } while (i);
                        }

                        if (!g_5c8de8)
                            break;
                    }
                }
            }

        label_48f8ac:
            SetForegroundWindow(hWnd_1);
            UnregisterClassA(g_541d68, context);
            CoUninitialize();
            ReleaseMutex(hMutex);
            return result;
        }

        lpCaption = "Innerloop";
        lpText = "Couldn't open window";
    }

    MessageBoxA(nullptr, lpText, lpCaption, uType);
    return 0;
}
