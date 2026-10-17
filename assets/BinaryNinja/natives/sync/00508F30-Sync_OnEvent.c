// Original IGI.EXE function: Sync_OnEvent (VA 0x00508F30; static CFG gate PASS, CFG score 1.000).
#include "Sync_OnEvent.h"
uint32_t Sync_OnEvent()

{
    QTask_InitContext(g_54e830);
    QTask_InitContext(g_54e831);
    return QTask_CloseEvent_2(g_a7b298);
}
