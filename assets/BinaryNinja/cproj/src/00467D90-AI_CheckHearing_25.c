#include "gi_platform.h"
#include "00467D90-AI_CheckHearing_25.h"
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
