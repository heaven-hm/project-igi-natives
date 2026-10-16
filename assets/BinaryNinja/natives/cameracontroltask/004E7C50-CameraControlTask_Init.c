#include "CameraControlTask_Init.h"
int32_t CameraControlTask_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("CameraControlTask", 0x2c, QTask_OpenEvent_2(), 0);
    g_54d974 = valA1;
    QTask_TriggerEvent(valA1, 1, CameraControlTask_LoadParameters);
    return QTask_TriggerEvent(g_54d974, 2, AIGraph_LoadParameters);
}
