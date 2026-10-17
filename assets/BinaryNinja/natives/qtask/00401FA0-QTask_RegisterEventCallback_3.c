// Original IGI.EXE function: QTask_RegisterEventCallback_3 (VA 0x00401FA0; static CFG gate PASS, CFG score 1.000).
#include "QTask_RegisterEventCallback_3.h"
uint32_t QTask_RegisterEventCallback_3(int16_t context, int32_t param_2)

{
    uint32_t result = context;
    *(result * 0x30 + 0xaf5f0c) = param_2 | 0x20000000;
    return result;
}
