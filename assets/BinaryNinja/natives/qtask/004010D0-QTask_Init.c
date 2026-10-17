// IGI native provenance: QTask_Init - 0x004010D0 - CFG score 93.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 004010D0-QTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_Init.h"
void* QTask_Init()

{
    memset(&g_afa6e0, 0, 0x100);
    g_afa7e0 = 0;
    g_54f92c = 0;
    QTask_OnEvent();
    QTask_Update();
    g_54ff24 = 0xffffffff;
    g_54ff28 = 0xffffffff;
    int32_t item_8 = 0;
    g_54ff2c = 0xffffffff;
    g_54ff30 = 0xffffffff;
    *memset(0xa969e0, 0xffffffff, 0xfc) = 0xffff;
    g_54f928 = TaskType_Register("QTask", 0x20, 0x181, 0);
    QTask_CleanupEvents(QTask_OpenEvent_2(), 0);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 1);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 2);
    QTask_ProcessQueue(QTask_OpenEvent_2(), 3);
    memset(&g_a96ae0, 0, 0x5f400);
    Sys_FreeMemory_2(&g_567c38, 4, 0x17b0, 0);
    return TaskType_Set("QTASK_TYPE_UNDEFINED", 0x181);
}
