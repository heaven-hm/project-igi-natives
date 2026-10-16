#include "00450CC0-AI_MoveToNode.h"
/* 0x00450cc0 AI_MoveToNode full linked: callers=1 callees=1 */
int32_t sub_450cc0()

{
    char result = g_53c924;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_53c924 = result;
    }

    return result;
}
