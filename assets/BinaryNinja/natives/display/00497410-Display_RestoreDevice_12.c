#include "Display_RestoreDevice_12.h"
int32_t Display_RestoreDevice_12(char* a1)

{
    char* tmpD = a1;
    int32_t result = 0;
    uint32_t srcS = 1;
    char i = *tmpD;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *tmpD = i - 0x20;

        result += *tmpD * srcS;
        i = tmpD[1];
        tmpD = &tmpD[1];
        srcS = srcS + 0x13d;
    }

    return result;
}
