#include "gi_platform.h"
#include "0048F530-FX_Igimutex.h"
WPARAM __stdcall FX_Igimutex(HINSTANCE a1, int32_t a2 )

{
    HANDLE hMutex = CreateMutexA(nullptr, 1, "IGIMUTEX");
    WPARAM result = 0;
    PSTR lpText;
    char* lpCaption;
    enum MESSAGEBOX_STYLE uType;

    if (!hMutex)
    {
    label_48f8f0: ;
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
        wndClass.hInstance = a1;
        wndClass.hIcon = LoadIconA(a1, 0x7f00);
        HCURSOR valA3 = LoadCursorA(nullptr, 0x7f00);
        wndClass.hbrBackground = 7;
        wndClass.hCursor = valA3;
        char (* valA4)[0xa] = g_541d68;
        wndClass.lpszMenuName = valA4;
        wndClass.lpszClassName = valA4;
        RegisterClassA(&wndClass);
        FX_FragmentSimulate_22(a2);
        FX_SmokeEmit_22(a1);
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
        __builtin_memset(0x5c8d28, 0, 0xc0);
        g_5c8df0 = &g_5c8df4;
        g_5c8df8 = &g_5c8df0;
        g_5c8df4 = 0;
        FX_FragmentSimulate_27("Window", sub_48f350);
        FX_FragmentSimulate_27("WinInput", sub_48f920);
        FX_FragmentSimulate_27("Germany", sub_48f930);
        FX_FragmentSimulate_27("USA", sub_48f950);
        float v_464;
        HWND hWnd;
        Display_DinputDll(&v_464, &hWnd);
        int32_t lpParam = 0;

        if (v_464 < 0x700)
        {
            int32_t v_47c_2 = 7;
            char text;
            Game_DataSymbolLoad(&text,
                "This application requires DirectX version %d.%d or greater to run.");
            MessageBoxA(nullptr, &text, "Error", MB_ICONHAND);
            lpParam = 1;
            Camera_ApplyBandFilter_6(1);
        }

        int32_t valA8;
        int32_t tmpD1;
        tmpD1 = HIGHD(GetSystemMetrics(SM_CYSCREEN) - 0x1e0);
        valA8 = LOWD(GetSystemMetrics(SM_CYSCREEN) - 0x1e0);
        int32_t valA13;
        int32_t tmpD2;
        tmpD2 = HIGHD(GetSystemMetrics(SM_CXSCREEN) - 0x280);
        valA13 = LOWD(GetSystemMetrics(SM_CXSCREEN) - 0x280);
        int32_t valA16 = FX_FragmentSimulate_23();
        int32_t valA17 = -(valA16);
        PSTR valA21 = g_541d68;
        HWND hWnd_2 = CreateWindowExA(WS_EX_LEFT, valA21, valA21,
            ((valA17 - valA17) & 0x5e380000) + 0x37c80000, (valA13 - tmpD2) >> 1,
            (valA8 - tmpD1) >> 1, 0x280, 0x1e0, nullptr, nullptr, a1, lpParam);
        uType = MB_OK;
        hWnd = hWnd_2;

        if (hWnd_2)
        {
            ShowCursor(0);
            ShowWindow(hWnd_2, SW_SHOWDEFAULT);
            FX_DebrisSpawn_22(hWnd_2);
            int16_t x87control;
            Display_ClearSurfaces_16(x87control);
            char valA22;
            int16_t x87control_1;
            valA22 = QTask_CreateTask();
            g_5c8de8 = valA22;
            FX_FragmentSimulate_27("HardcoreGerman", sub_48f960);

            if (g_5c8de8)
            {
                while (true)
                {
                    v_464 = -1.75.0f;

                    if (v_464 != 0xffffffff)
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
                            QTask_OpenEvent(a1);

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
    label_48f8ac: ;
            SetForegroundWindow(hWnd_1);
            UnregisterClassA(g_541d68, a1);
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
