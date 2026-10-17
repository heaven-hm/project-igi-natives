// Original IGI.EXE function: Display_CheckCapabilities_17 (VA 0x00499FA0; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_17.h"
int32_t Display_CheckCapabilities_17(void* a1, float a2)

{
    int32_t result = (a2 * -255f) << 0x18;
    *(a1 + 0x56c8) = 0xffffff - result;
    return result;
}
