// Original IGI.EXE function: AI_MoveToNode_25 (VA 0x00467DD0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_25.h"
int32_t AI_MoveToNode_25()

{
    char result = g_53f584;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0x181);
        g_53f584 = result;
    }

    return result;
}
