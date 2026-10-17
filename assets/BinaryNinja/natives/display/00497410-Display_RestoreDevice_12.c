// Original IGI.EXE function: Display_RestoreDevice_12 (VA 0x00497410; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_12.h"
int32_t Display_RestoreDevice_12(char* context)

{
    char* temp_val = context;
    int32_t result = 0;
    uint32_t source_val = 1;
    char i = *temp_val;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *temp_val = i - 0x20;

        result += *temp_val * source_val;
        i = temp_val[1];
        temp_val = &temp_val[1];
        source_val = source_val + 0x13d;
    }

    return result;
}
