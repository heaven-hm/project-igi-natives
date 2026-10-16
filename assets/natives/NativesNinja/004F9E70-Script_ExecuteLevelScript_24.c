#include "004F9E70-Script_ExecuteLevelScript_24.h"
/* 0x004f9e70 Script_ExecuteLevelScript_24 full linked: callers=2 callees=0 */
int32_t sub_4f9e70(char* a1)

{
    char* esi = a1;
    int32_t result = 0;
    uint32_t edx = 1;
    char i = *esi;

    while (i)
    {
        esi = &esi[1];

        if (i >= 0x61 && i <= 0x7a)
            i -= 0x20;

        result += i * edx;
        i = *esi;
        edx = edx + 0x13d;
    }

    return result;
}
