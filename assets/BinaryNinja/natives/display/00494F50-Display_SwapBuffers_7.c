// Original IGI.EXE function: Display_SwapBuffers_7 (VA 0x00494F50; static CFG gate PASS, CFG score 1.000).
#include "Display_SwapBuffers_7.h"
int32_t Display_SwapBuffers_7(HWND a1, int32_t a2, int32_t a3, void* a4)

{
    if (Sys_ReadFileBlock_3() == g_5ca0e0 && g_5ca10c)
    {
        if (a2 == 6)
        {
            if ((!a3 || a3 >> 0x10) && FX_DebrisSpawn_23())
            {
                InvalidateRect(a1, nullptr, 0);
                FX_SmokeEmit_23(0);
                return 1;
            }

            if (!FX_DebrisSpawn_23())
                FX_SmokeEmit_23(1);
        }
        else if (a2 == 0x24)
        {
            RECT rect;
            rect.left = 0;
            rect.idx = 0;
            rect.right = g_c28b44;
            rect.bottom = g_c28b48;
            int32_t valA4 = FX_FragmentSimulate_23();
            int32_t valA5 = -(valA4);
            AdjustWindowRect(&rect, ((valA5 - valA5) & 0x7f310000) + 0xcf0000, 0);
            LONG left = rect.left;
            *(a4 + 0x18) = 0x64;
            *(a4 + 0x1c) = 0x64;
            LONG bottom = rect.bottom;
            *(a4 + 0x20) = rect.right - left;
            *(a4 + 0x24) = bottom - rect.idx;
        }
    }

    return 1;
}
