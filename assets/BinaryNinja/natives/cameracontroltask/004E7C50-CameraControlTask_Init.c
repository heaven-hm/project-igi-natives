// Original IGI.EXE function: CameraControlTask_Init (VA 0x004E7C50; static CFG gate PASS, CFG score 1.000).
#include "CameraControlTask_Init.h"
int32_t CameraControlTask_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("CameraControlTask", 0x2c, QTask_OpenEvent_2(), 0);
    g_54d974 = data_1;
    QTask_TriggerEvent(data_1, 1, CameraControlTask_LoadParameters);
    return QTask_TriggerEvent(g_54d974, 2, AIGraph_LoadParameters);
}
