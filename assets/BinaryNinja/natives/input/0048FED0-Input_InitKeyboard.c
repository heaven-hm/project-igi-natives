#include "Input_InitKeyboard.h"

int32_t Input_InitKeyboard(int32_t pThis @ 0x8, int32_t param)

{
    if (pThis - 0x201 <= 9)
        switch (pThis)
        {
            case 0x201:
            {
                g_5c8e10 = 1;
                break;
            }
            case 0x202:
            {
                g_5c8e10 = 0;
                break;
            }
            case 0x204:
            {
                g_5c8e0c = 1;
                break;
            }
            case 0x205:
            {
                g_5c8e0c = 0;
                break;
            }
            case 0x207:
            {
                g_5c8e18 = 1;
                break;
            }
            case 0x208:
            {
                g_5c8e18 = 0;
                break;
            }
            case 0x20a:
            {
                g_5c8e08 += (param >> 0x10) / 0x78;
                break;
            }
        }

    return 1;
}
