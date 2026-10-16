#include "00460BF0-AI_AlertAllies_17.h"
/* 0x00460bf0 AI_AlertAllies_17 full linked: callers=15 callees=1 */
int32_t sub_460bf0()

{
    char result = g_53f314;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_53f314 = result;
    }

    return result;
}
