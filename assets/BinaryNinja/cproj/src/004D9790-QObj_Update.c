#include "gi_platform.h"
#include "004D9790-QObj_Update.h"
uint32_t QObj_Update()

{
    QTask_CloseEvent_2(g_548638);
    g_548638 = 0x181;
    QTask_InitContext(7);
    QTask_InitContext(4);
    QTask_InitContext(5);
    QTask_InitContext(6);
    return QTask_InitContext(g_54863a);
}
