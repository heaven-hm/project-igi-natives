/* LOGIC NOTE (QTask_Init @ 0x004010D0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , QTas
   called by : sub_5323c0
   data refs : none
   strings   : QTask; QTASK_TYPE_UNDEFINED
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_Init.h"

void* QTask_Init()

{
    __builtin_memset(&data_afa6e0, 0, 0x100);
    data_afa7e0 = 0;
    data_54f92c = 0;
    QTask_OnEvent();
    QTask_Update();
    data_54ff24 = 0xffffffff;
    data_54ff28 = 0xffffffff;
    int32_t v_8 = 0;
    data_54ff2c = 0xffffffff;
    data_54ff30 = 0xffffffff;
    *__builtin_memset(0xa969e0, 0xffffffff, 0xfc) = 0xffff;
    data_54f928 = TaskType_Register("QTask", 0x20, 0x181, 0);
    QTask_CleanupEvents(QTask_OpenEvent_2(), 0);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 1);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 2);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 3);
    __builtin_memset(&data_a96ae0, 0, 0x5f400);
    Sys_FreeMemory_2(&data_567c38, 4, 0x17b0, 0);
    return TaskType_Set("QTASK_TYPE_UNDEFINED", 0x181);
}
