#include "0051B400-AnimSound_Init.h"
/* 0x0051b400 AnimSound_Init full linked: callers=1 callees=11 */
void* sub_51b400()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("AnimSound", 4, QTask_OpenEvent_2(), 0);
    g_a83764 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4c1780);
    QTask_TriggerEvent(g_a83764, 2, sub_4c1780);
    int32_t eax_3 = sub_4ec060();
    QTask_RemoveEventCallback(g_a83764, eax_3, sub_51b4b0);
    int32_t eax_4 = sub_4ec050();
    QTask_RemoveEventCallback(g_a83764, eax_4, sub_51b4e0);
    int32_t eax_5 = sub_4ec040();
    int32_t var_8_2 = eax_5;
    eax_5 = g_a83764;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_51b4f0);
    return TaskType_Set("TASKTYPE_ANIMSOUND", *g_a83764);
}
