#include "00494F50-Display_SwapBuffers_7.h"
/* 0x00494f50 Display_SwapBuffers_7 full linked: callers=0 callees=10 */
int32_t sub_494f50(HWND a1, int32_t a2, int32_t a3, void* a4)

{
    if (sub_4b0f80() == g_5ca0e0 && g_5ca10c)
    {
        if (a2 == 6)
        {
            if ((!a3 || a3 >> 0x10) && sub_48f170())
            {
                InvalidateRect(a1, nullptr, 0);
                sub_48f140(0);
                return 1;
            }

            if (!sub_48f170())
                sub_48f140(1);
        }
        else if (a2 == 0x24)
        {
            RECT rect;
            rect.left = 0;
            rect.top = 0;
            rect.right = g_c28b44;
            rect.bottom = g_c28b48;
            int32_t eax_4 = sub_48f130();
            int32_t eax_5 = -(eax_4);
            AdjustWindowRect(&rect, ((eax_5 - eax_5) & 0x7f310000) + 0xcf0000, 0);
            LONG left = rect.left;
            *(a4 + 0x18) = 0x64;
            *(a4 + 0x1c) = 0x64;
            LONG bottom = rect.bottom;
            *(a4 + 0x20) = rect.right - left;
            *(a4 + 0x24) = bottom - rect.top;
        }
    }

    return 1;
}
