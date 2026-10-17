// Original IGI.EXE function: Display_CheckCapabilities_18 (VA 0x0049A510; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_18.h"
int32_t Display_CheckCapabilities_18(void* context, int32_t param_2)

{
    *(context + 0x98) = param_2;
    return param_2;
}
