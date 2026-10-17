// IGI native provenance: CameraControlTask_Init - 0x004E7C50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7C50-CameraControlTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraControlTask_Init.h"
int32_t CameraControlTask_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("CameraControlTask", 0x2c, QTask_OpenEvent_2(), 0);
    g_54d974 = data_1;
    QTask_TriggerEvent(data_1, 1, CameraControlTask_LoadParameters);
    return QTask_TriggerEvent(g_54d974, 2, AIGraph_LoadParameters);
}
