// Original IGI.EXE function: AI_CheckHearing_25 (VA 0x00467D90; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_25.h"
int32_t AI_CheckHearing_25()

{
    char result = g_53f582;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0x181);
        g_53f582 = result;
    }

    return result;
}
