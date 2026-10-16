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
