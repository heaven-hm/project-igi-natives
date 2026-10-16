#include "gi_platform.h"
#include "00460C10-AI_SelectTarget_17.h"
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
