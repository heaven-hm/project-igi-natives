// Original IGI.EXE function: Script_FormatString_6 (VA 0x004F16C0; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_6.h"
int32_t* Script_FormatString_6(int32_t* a1)

{
    int32_t* result = a1;

    if (!*result)
    {
        result = 0;
        return result;
    }

    if (*result[1])
    {
        result = result[2];
        return result;
    }

    result = 0;
    return result;
}
