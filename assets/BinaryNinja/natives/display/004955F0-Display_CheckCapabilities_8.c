// Original IGI.EXE function: Display_CheckCapabilities_8 (VA 0x004955F0; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_8.h"
int32_t* Display_CheckCapabilities_8(void* context)

{
    int32_t i_1 = 0x65;
    int32_t* result = context + 4;
    int32_t i;

    do
    {
        result[-1] = result;
        result[1] = &result[-1];
        *result = 0;
        result = &result[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
