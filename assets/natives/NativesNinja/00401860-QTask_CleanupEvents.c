#include "00401860-QTask_CleanupEvents.h"
/* 0x00401860 QTask_CleanupEvents full linked: callers=15 callees=0 */
uint32_t QTask_CleanupEvents(int16_t a1, char a2)

{
    uint32_t result = a2 * 6;
    *(result + &g_54f932) = 1;
    *(result + 0x54f930) = a1;
    *(result + 0x54f933) = 1;
    return result;
}
