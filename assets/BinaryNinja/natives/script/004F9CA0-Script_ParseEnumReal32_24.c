// Original IGI.EXE function: Script_ParseEnumReal32_24 (VA 0x004F9CA0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_24.h"
int32_t Script_ParseEnumReal32_24(void* a1, int32_t a2)

{
    int32_t i = 0;
    int32_t* objC = a1 + 0x13c;

    do
    {
        if (*objC == a2)
        {
            *(a1 + (i << 2) + 0x13c) = 0;
            return i;
        }

        i += 1;
        objC = &objC[1];
    } while (i < 0x40);

    return i;
}
