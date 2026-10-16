#include "00497410-Display_RestoreDevice_12.h"
/* 0x00497410 Display_RestoreDevice_12 full linked: callers=16 callees=0 */
int32_t sub_497410(char* a1)

{
    char* edx = a1;
    int32_t result = 0;
    uint32_t esi = 1;
    char i = *edx;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *edx = i - 0x20;

        result += *edx * esi;
        i = edx[1];
        edx = &edx[1];
        esi = esi + 0x13d;
    }

    return result;
}
