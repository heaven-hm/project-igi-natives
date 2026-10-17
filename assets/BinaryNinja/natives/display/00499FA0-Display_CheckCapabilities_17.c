// Original IGI.EXE function: Display_CheckCapabilities_17 (VA 0x00499FA0; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_17.h"
int32_t Display_CheckCapabilities_17(void* context, float param_2)

{
    int32_t result = (param_2 * -255.0f) << 0x18;
    *(context + 0x56c8) = 0xffffff - result;
    return result;
}
