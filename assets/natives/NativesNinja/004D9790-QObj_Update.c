#include "004D9790-QObj_Update.h"
/* 0x004d9790 QObj_Update full linked: callers=1 callees=6 */
uint32_t sub_4d9790()

{
    QTask_CloseEvent_2(g_548638);
    g_548638 = 0x181;
    QTask_InitContext(7);
    QTask_InitContext(4);
    QTask_InitContext(5);
    QTask_InitContext(6);
    return QTask_InitContext(g_54863a);
}
