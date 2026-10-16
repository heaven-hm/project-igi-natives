#include "00460C10-AI_SelectTarget_17.h"
/* 0x00460c10 AI_SelectTarget_17 full linked: callers=8 callees=1 */
int32_t sub_460c10()

{
    char result = g_53f315;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_53f315 = result;
    }

    return result;
}
