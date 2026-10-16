#include "0051B960-EditorMagicObj_Init.h"
/* 0x0051b960 EditorMagicObj_Init full linked: callers=1 callees=16 */
void* sub_51b960()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("EditorMagicObj", 0x140, MagicObj_GetTypeId(), 0);
    g_a8376c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51b850);
    QTask_TriggerEvent(g_a8376c, 2, sub_51b940);
    int32_t eax_3 = sub_4c56d0();
    QTask_RemoveEventCallback(g_a8376c, eax_3, sub_51ba60);
    int32_t eax_4 = sub_4c56e0();
    QTask_RemoveEventCallback(g_a8376c, eax_4, sub_51baa0);
    int32_t eax_5 = sub_4c56f0();
    int32_t var_8_2 = eax_5;
    eax_5 = g_a8376c;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_51b540);
    int32_t eax_6 = sub_4d14d0();
    QTask_RemoveEventCallback(g_a8376c, eax_6, 0);
    QTask_RemoveEventCallback(g_a8376c, 9, 0);
    QTask_RemoveEventCallback(g_a8376c, 0xa, 0);
    QTask_RemoveEventCallback(g_a8376c, 0xb, 0);
    return TaskType_Set("TASKTYPE_EDITORMAGICOBJ", *g_a8376c);
}
