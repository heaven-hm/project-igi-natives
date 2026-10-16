#include "AI_CheckHearing.h"
int32_t AI_CheckHearing()

{
    char result = g_53c922;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53c922 = result;
    }

    return result;
}
