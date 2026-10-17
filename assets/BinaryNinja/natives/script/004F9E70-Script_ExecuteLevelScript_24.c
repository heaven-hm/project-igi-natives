// Original IGI.EXE function: Script_ExecuteLevelScript_24 (VA 0x004F9E70; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_24.h"
int32_t Script_ExecuteLevelScript_24(char* context)

{
    char* source_val = context;
    int32_t result = 0;
    uint32_t temp_val = 1;
    char i = *source_val;

    while (i)
    {
        source_val = &source_val[1];

        if (i >= 0x61 && i <= 0x7a)
            i -= 0x20;

        result += i * temp_val;
        i = *source_val;
        temp_val = temp_val + 0x13d;
    }

    return result;
}
