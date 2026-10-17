// Original IGI.EXE function: Script_FormatString_24 (VA 0x004FA140; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_24.h"
int32_t* Script_FormatString_24(int32_t context)

{
    int32_t* result = g_a774a0;

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[2] == context)
            return result;

        result = i;
    }

    return nullptr;
}
