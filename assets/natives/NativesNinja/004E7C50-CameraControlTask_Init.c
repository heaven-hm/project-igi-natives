#include "004E7C50-CameraControlTask_Init.h"
/* 0x004e7c50 CameraControlTask_Init full linked: callers=1 callees=4 */
int32_t sub_4e7c50()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("CameraControlTask", 0x2c, QTask_OpenEvent_2(), 0);
    g_54d974 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_4e7c90);
    return QTask_TriggerEvent(g_54d974, 2, sub_4d3710);
}
