#include "gi_platform.h"
#include "00508F30-Sync_OnEvent.h"
uint32_t Sync_OnEvent()

{
    QTask_InitContext(g_54e830);
    QTask_InitContext(g_54e831);
    return QTask_CloseEvent_2(g_a7b298);
}
