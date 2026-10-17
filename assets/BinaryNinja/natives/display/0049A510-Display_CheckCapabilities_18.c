// Original IGI.EXE function: Display_CheckCapabilities_18 (VA 0x0049A510; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_18.h"
int32_t Display_CheckCapabilities_18(void* a1, int32_t a2)

{
    *(a1 + 0x98) = a2;
    return a2;
}
