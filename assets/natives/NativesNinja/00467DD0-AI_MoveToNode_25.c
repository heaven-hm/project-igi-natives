#include "00467DD0-AI_MoveToNode_25.h"
/* 0x00467dd0 AI_MoveToNode_25 full linked: callers=3 callees=1 */
int32_t sub_467dd0()

{
    char result = g_53f584;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0x181);
        g_53f584 = result;
    }

    return result;
}
