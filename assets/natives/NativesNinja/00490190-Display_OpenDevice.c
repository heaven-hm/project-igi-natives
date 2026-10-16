#include "00490190-Display_OpenDevice.h"
/* 0x00490190 Display_OpenDevice full linked: callers=2 callees=0 */
int32_t sub_490190(int32_t a1, int32_t a2)

{
    if (a1 - 0x11 <= 0x17)
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + (&jump_table_4901f4[3] + 3));

        switch (ecx_1)
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
