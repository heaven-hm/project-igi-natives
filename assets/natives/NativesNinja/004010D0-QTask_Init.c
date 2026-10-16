#include "004010D0-QTask_Init.h"
/* 0x004010d0 QTask_Init full linked: callers=1 callees=16 */
void* QTask_Init()

{
    __builtin_memset(&g_afa6e0, 0, 0x100);
    g_afa7e0 = 0;
    g_54f92c = 0;
    QTask_OnEvent();
    QTask_Update();
    g_54ff24 = 0xffffffff;
    g_54ff28 = 0xffffffff;
    int32_t var_8 = 0;
    g_54ff2c = 0xffffffff;
    g_54ff30 = 0xffffffff;
    *__builtin_memset(0xa969e0, 0xffffffff, 0xfc) = 0xffff;
    g_54f928 = TaskType_Register("QTask", 0x20, 0x181, 0);
    QTask_CleanupEvents(QTask_OpenEvent_2(), 0);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 1);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 2);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 3);
    __builtin_memset(&g_a96ae0, 0, 0x5f400);
    sub_4b0b00(&g_567c38, 4, 0x17b0, 0);
    return TaskType_Set("QTASK_TYPE_UNDEFINED", 0x181);
}
