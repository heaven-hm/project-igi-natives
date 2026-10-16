#include "00450C80-AI_CheckHearing.h"
/* 0x00450c80 AI_CheckHearing full linked: callers=5 callees=1 */
int32_t sub_450c80()

{
    char result = g_53c922;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_53c922 = result;
    }

    return result;
}
