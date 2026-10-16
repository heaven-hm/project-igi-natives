/* LOGIC NOTE (QTask_Process @ 0x004011F0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : sub_5323d0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_Process.h"

int32_t QTask_Process()

{
    Sys_OpenFileStream_2(&data_567c38);
    QTask_InitContext(0);
    QTask_InitContext(1);
    QTask_InitContext(2);
    QTask_InitContext(3);
    QTask_CloseEvent_2(data_54f928);
    QTask_Action();
    /* tailcall */
    return QTask_OnTick();
}
