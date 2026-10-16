#include "00467D90-AI_CheckHearing_25.h"
/* 0x00467d90 AI_CheckHearing_25 full linked: callers=27 callees=1 */
int32_t sub_467d90()

{
    char result = g_53f582;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0x181);
        g_53f582 = result;
    }

    return result;
}
