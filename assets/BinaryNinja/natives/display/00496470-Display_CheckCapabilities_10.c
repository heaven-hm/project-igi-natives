// Original IGI.EXE function: Display_CheckCapabilities_10 (VA 0x00496470; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_10.h"
int32_t* Display_CheckCapabilities_10(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* result = *(context + param_2 * 0xc);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[3] == param_3)
            return result;

        result = i;
    }

    return nullptr;
}
