// Original IGI.EXE function: QTask_CleanupEvents (VA 0x00401860; static CFG gate PASS, CFG score 1.000).
#include "QTask_CleanupEvents.h"
uint32_t QTask_CleanupEvents(int16_t context, char param_2)

{
    uint32_t result = param_2 * 6;
    *(result + &g_54f932) = 1;
    *(result + 0x54f930) = context;
    *(result + 0x54f933) = 1;
    return result;
}
