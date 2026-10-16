#include "004851B0-GameScreen_Init.h"
/* 0x004851b0 GameScreen_Init full linked: callers=1 callees=7 */
int32_t sub_4851b0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("GameScreen", 0x28, QTask_OpenEvent_2(), 0);
    g_5c8a28 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_485220);
    QTask_TriggerEvent(g_5c8a28, 1, sub_488700);
    QTask_TriggerEvent(g_5c8a28, 2, sub_4d3710);
    int32_t eax_3 = sub_4e7530();
    return QTask_TriggerEvent(g_5c8a28, eax_3, sub_424280);
}
