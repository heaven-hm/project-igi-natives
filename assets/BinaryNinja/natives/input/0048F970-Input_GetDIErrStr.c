// Original IGI.EXE function: Input_GetDIErrStr (VA 0x0048F970; static CFG gate PASS, CFG score 1.000).
#include "Input_GetDIErrStr.h"

LRESULT __stdcall Input_GetDIErrStr(HWND pThis, uint32_t param, WPARAM flags, LPARAM param_4)

{
    if (g_5c8de8)
    {
        int32_t* 5c8df0_1 = g_5c8df0;

        for (int32_t* i = *5c8df0_1; i; i = *i)
        {
            if (!5c8df0_1[2](pThis, param, flags, param_4))
                return 0;

            5c8df0_1 = i;
        }
    }

    if (param <= 0x1c)
    {
        if (param == 0x1c)
        {
            int16_t fpu_control;
            Display_ClearSurfaces_16(fpu_control);
            return 0;
        }

        if (param != 1)
        {
            if (param != 2)
                return DefWindowProcA(pThis, param, flags, param_4);

            g_5c8de8 = 0;
            ShowCursor(1);
            QTask_DispatchEvent();
            PostQuitMessage(0);
        }
    }
    else if (param != 0x104)
    {
        if (param != 0x105)
            return DefWindowProcA(pThis, param, flags, param_4);

        if (flags == 0x12)
            data_5c8e04 = 0;
    }
    else if (flags != 0x73)
    {
        if (flags == 0x12)
            data_5c8e04 = 1;
    }
    else if (data_5c8e04)
        PostMessageA(FX_ExplosionSpawn_22(), 2, 0, 0);

    return 0;
}
