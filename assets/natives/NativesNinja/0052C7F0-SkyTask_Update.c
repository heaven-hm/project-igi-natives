#include "0052C7F0-SkyTask_Update.h"
/* 0x0052c7f0 SkyTask_Update full linked: callers=1 callees=2 */
uint32_t sub_52c7f0()

{
    sub_4c1830(g_a84558);
    uint32_t result = QTask_CloseEvent_2(g_54f6e4);
    g_54f6e4 = 0x181;
    return result;
}
