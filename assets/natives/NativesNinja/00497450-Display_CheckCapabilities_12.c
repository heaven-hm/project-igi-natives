#include "00497450-Display_CheckCapabilities_12.h"
/* 0x00497450 Display_CheckCapabilities_12 full linked: callers=15 callees=0 */
uint32_t sub_497450(char* a1)

{
    char* esi = a1;
    uint32_t result = 0;
    char i = *esi;
    uint32_t edi = 1;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *esi = i - 0x20;

        uint32_t result_1 = COMBINE(0, result + *esi * edi) % 0x65;
        i = esi[1];
        edi = edi + 0x13e;
        esi = &esi[1];
        result = result_1;
    }

    return result;
}
