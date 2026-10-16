#include "00508F30-Sync_OnEvent.h"
/* 0x00508f30 Sync_OnEvent full linked: callers=1 callees=3 */
uint32_t sub_508f30()

{
    QTask_InitContext(g_54e830);
    QTask_InitContext(g_54e831);
    return QTask_CloseEvent_2(g_a7b298);
}
