// Original IGI.EXE function: AI_SelectTarget_17 (VA 0x00460C10; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_17.h"
int32_t AI_SelectTarget_17()

{
    char result = g_53f315;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53f315 = result;
    }

    return result;
}
