#include "Script_ExecuteLevelScript_24.h"
int32_t Script_ExecuteLevelScript_24(char* a1)

{
    char* srcS = a1;
    int32_t result = 0;
    uint32_t tmpD = 1;
    char i = *srcS;

    while (i)
    {
        srcS = &srcS[1];

        if (i >= 0x61 && i <= 0x7a)
            i -= 0x20;

        result += i * tmpD;
        i = *srcS;
        tmpD = tmpD + 0x13d;
    }

    return result;
}
