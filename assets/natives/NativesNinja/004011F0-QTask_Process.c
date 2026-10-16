#include "004011F0-QTask_Process.h"
/* 0x004011f0 QTask_Process full linked: callers=1 callees=8 */
int32_t QTask_Process()

{
    sub_4b0b70(&g_567c38);
    QTask_InitContext(0);
    QTask_InitContext(1);
    QTask_InitContext(2);
    QTask_InitContext(3);
    QTask_CloseEvent_2(g_54f928);
    QTask_Action();
    /* tailcall */
    return QTask_OnTick();
}
