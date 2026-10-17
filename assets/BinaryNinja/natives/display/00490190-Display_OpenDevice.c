// Original IGI.EXE function: Display_OpenDevice (VA 0x00490190; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice.h"
int32_t Display_OpenDevice(int32_t a1, int32_t a2)

{
    if (a1 - 0x11 <= 0x17)
    {
        int32_t objC1 = 0;
        objC1 = *(a1 + (&jump_table_4901f4[3] + 3));

        switch (objC1)
        {
            case 0:
            {
                return ((a2 >> 1 & 0x800000) | (a2 & 0x7f0000)) >> 0x10;
                break;
            }
            case 1:
            {
                return 0xc9;
                break;
            }
            case 2:
            {
                return 0xd1;
                break;
            }
            case 3:
            {
                return 0xcb;
                break;
            }
            case 4:
            {
                return 0xc8;
                break;
            }
            case 5:
            {
                return 0xcd;
                break;
            }
            case 6:
            {
                return 0xd0;
                break;
            }
        }
    }

    return a2 >> 0x10 & 0x7f;
}
