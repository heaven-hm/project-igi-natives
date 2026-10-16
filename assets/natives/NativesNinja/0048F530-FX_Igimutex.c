#include "0048F530-FX_Igimutex.h"
/* 0x0048f530 FX_Igimutex full linked: callers=1 callees=61 */
WPARAM __stdcall sub_48f530(HINSTANCE a1, int32_t a2 @ 0xc)

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
        wndClass.hInstance = a1;
        wndClass.hIcon = LoadIconA(a1, 0x7f00);
        HCURSOR eax_3 = LoadCursorA(nullptr, 0x7f00);
        wndClass.hbrBackground = 7;
        wndClass.hCursor = eax_3;
        char (* eax_4)[0xa] = g_541d68;
        wndClass.lpszMenuName = eax_4;
        wndClass.lpszClassName = eax_4;
        RegisterClassA(&wndClass);
        sub_48f0c0(a2);
        sub_48f0d0(a1);
        sub_48f0f0("filesys.cfg");
        sub_48f100("Innerloop");
        sub_48f140(1);
        sub_48f120(1);
        App_ContextSetDebugged(0);
        sub_48f1c0(1);
        App_ContextSetDebugtextState(0);
        App_ContextSetLightmapsUsed(1);
        App_ContextSetTerrainLightmapsUsed(1);
        sub_48f280(0);
        sub_48f290(0);
        sub_48f2a0(0);
        sub_48f210(1);
        sub_48f2b0(0);
        sub_48f300(&g_567c74);
        sub_48f200(0);
        __builtin_memset(0x5c8d28, 0, 0xc0);
        g_5c8df0 = &g_5c8df4;
        g_5c8df8 = &g_5c8df0;
        g_5c8df4 = 0;
        sub_48f360("Window", sub_48f350);
        sub_48f360("WinInput", sub_48f920);
        sub_48f360("Germany", sub_48f930);
        sub_48f360("USA", sub_48f950);
        float var_464;
        HWND hWnd;
        sub_498480(&var_464, &hWnd);
        int32_t lpParam = 0;

        if (var_464 < 0x700)
        {
            int32_t var_47c_2 = 7;
            void text;
            Game_DataSymbolLoad(&text,
                "This application requires DirectX version %d.%d or greater to run.");
            MessageBoxA(nullptr, &text, "Error", MB_ICONHAND);
            lpParam = 1;
            sub_4a5ad5(1);
        }

        int32_t eax_8;
        int32_t edx_1;
        edx_1 = HIGHD(GetSystemMetrics(SM_CYSCREEN) - 0x1e0);
        eax_8 = LOWD(GetSystemMetrics(SM_CYSCREEN) - 0x1e0);
        int32_t eax_13;
        int32_t edx_2;
        edx_2 = HIGHD(GetSystemMetrics(SM_CXSCREEN) - 0x280);
        eax_13 = LOWD(GetSystemMetrics(SM_CXSCREEN) - 0x280);
        int32_t eax_16 = sub_48f130();
        int32_t eax_17 = -(eax_16);
        PSTR eax_21 = g_541d68;
        HWND hWnd_2 = CreateWindowExA(WS_EX_LEFT, eax_21, eax_21,
            ((eax_17 - eax_17) & 0x5e380000) + 0x37c80000, (eax_13 - edx_2) >> 1,
            (eax_8 - edx_1) >> 1, 0x280, 0x1e0, nullptr, nullptr, a1, lpParam);
        uType = MB_OK;
        hWnd = hWnd_2;

        if (hWnd_2)
        {
            ShowCursor(0);
            ShowWindow(hWnd_2, SW_SHOWDEFAULT);
            sub_48f0e0(hWnd_2);
            int16_t x87control;
            sub_498460(x87control);
            char eax_22;
            int16_t x87control_1;
            eax_22 = QTask_CreateTask();
            g_5c8de8 = eax_22;
            sub_48f360("HardcoreGerman", sub_48f960);

            if (g_5c8de8)
            {
                while (true)
                {
                    var_464 = -1.75f;

                    if (var_464 != 0xffffffff)
                    {
                        Error_Show("Invalid FPU rounding mode. May be caused by running a debug "
                        "session with ftol optimize turned on.");

                        while (true)
                            /* nop */
                    }
                    else
                    {
                        x87control_1 = sub_498460(x87control_1);

                        if (!sub_48f170())
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

        label_48f8ac:
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
