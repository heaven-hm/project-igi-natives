#include "AI_AlertAllies_17.h"
int32_t AI_AlertAllies_17()

{
    char result = g_53f314;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53f314 = result;
    }

    return result;
}
