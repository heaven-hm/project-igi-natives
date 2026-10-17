// Original IGI.EXE function: AI_MoveToNode (VA 0x00450CC0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode.h"
int32_t AI_MoveToNode()

{
    char result = g_53c924;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53c924 = result;
    }

    return result;
}
