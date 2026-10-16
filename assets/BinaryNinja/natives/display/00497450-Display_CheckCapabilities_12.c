#include "Display_CheckCapabilities_12.h"
uint32_t Display_CheckCapabilities_12(char* a1)

{
    char* srcS = a1;
    uint32_t result = 0;
    char i = *srcS;
    uint32_t dstD = 1;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *srcS = i - 0x20;

        uint32_t result_1 = COMBINE(0, result + *srcS * dstD) % 0x65;
        i = srcS[1];
        dstD = dstD + 0x13e;
        srcS = &srcS[1];
        result = result_1;
    }

    return result;
}
