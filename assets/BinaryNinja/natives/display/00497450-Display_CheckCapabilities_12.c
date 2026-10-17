// Original IGI.EXE function: Display_CheckCapabilities_12 (VA 0x00497450; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_12.h"
uint32_t Display_CheckCapabilities_12(char* context)

{
    char* source_val = context;
    uint32_t result = 0;
    char i = *source_val;
    uint32_t dest_val = 1;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *source_val = i - 0x20;

        uint32_t result_1 = COMBINE(0, result + *source_val * dest_val) % 0x65;
        i = source_val[1];
        dest_val = dest_val + 0x13e;
        source_val = &source_val[1];
        result = result_1;
    }

    return result;
}
