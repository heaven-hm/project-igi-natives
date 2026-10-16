#include "00424B90-Cursor_Init.h"
/* 0x00424b90 Cursor_Init full linked: callers=1 callees=8 */
void* Cursor_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Cursor", 0x40, QTask_OpenEvent_2(), 0);
    g_57bc60 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_424c10);
    QTask_TriggerEvent(g_57bc60, 1, Cursor_LoadParameters);
    QTask_TriggerEvent(g_57bc60, 2, sub_4d3710);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_57bc60, eax_3, sub_424c40);
    return sub_48f490(sub_424ca0);
}
