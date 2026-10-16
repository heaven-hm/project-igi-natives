#include "00407D00-AIConfig_InitItem_2.h"
/* 0x00407d00 AIConfig_InitItem_2 full linked: callers=1 callees=7 */
uint32_t AIConfig_InitItem_2()

{
    sub_4f1d80(0x5691f0);
    sub_4f1d80(0x5690e0);
    sub_4c1830(g_569208);
    sub_4c1830(g_569204);
    QTask_CloseEvent_2(g_5384c2);
    QTask_CloseEvent_2(g_5384c0);
    return QTask_InitContext(g_5690d8);
}
