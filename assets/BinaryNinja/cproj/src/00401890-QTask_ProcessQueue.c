#include "gi_platform.h"
#include "00401890-QTask_ProcessQueue.h"
int32_t QTask_ProcessQueue(int16_t a1, int32_t a2)

{
    int32_t result = a2 * 6;
    *(result + &g_54f932) = 1;
    *(result + 0x54f930) = a1;
    *(result + 0x54f933) = 0;
    return result;
}
