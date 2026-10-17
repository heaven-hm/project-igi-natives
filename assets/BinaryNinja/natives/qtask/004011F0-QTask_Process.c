// Original IGI.EXE function: QTask_Process (VA 0x004011F0; static CFG gate FAIL, CFG score 0.722).
#include "QTask_Process.h"
int32_t QTask_Process()

{
    Sys_OpenFileStream_2(&g_567c38);
    QTask_InitContext(0);
    QTask_InitContext(1);
    QTask_InitContext(2);
    QTask_InitContext(3);
    QTask_CloseEvent_2(g_54f928);
    QTask_Action();
    /* tailcall */
    return QTask_OnTick();
}
