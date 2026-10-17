// Original IGI.EXE function: QTask_ProcessQueue (VA 0x00401890; static CFG gate PASS, CFG score 1.000).
#include "QTask_ProcessQueue.h"
int32_t QTask_ProcessQueue(int16_t context, int32_t param_2)

{
    int32_t result = param_2 * 6;
    *(result + &g_54f932) = 1;
    *(result + 0x54f930) = context;
    *(result + 0x54f933) = 0;
    return result;
}
