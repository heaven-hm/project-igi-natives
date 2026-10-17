// Original IGI.EXE function: SCameraControl_Init (VA 0x00440C20; static CFG gate PASS, CFG score 1.000).
#include "SCameraControl_Init.h"
int32_t* SCameraControl_Init()

{
    int32_t item_2fc = 0;
    int16_t data_1 = TaskType_Register("SCameraControl", 0x2f8, Env_UpdateCameraLens_3(), 0);
    g_57c174 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_440d30);
    QTask_TriggerEvent(g_57c174, 1, SCameraControl_LoadParameters);
    QTask_TriggerEvent(g_57c174, 2, sub_440de0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c174, data_3, sub_440e40);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_300_1 = data_4;
    data_4 = g_57c174;
    QTask_RemoveEventCallback(data_4, item_300_1, sub_440e50);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c174, data_5, SCameraControl_Setup);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c174, data_6, SCameraControl_Process);
    g_57c170 = Script_FormatString_7(Env_CheckAmbientArea_3(), 1);
    int32_t data_9 = Script_CallNativeHandler_3();
    void item_2f8;
    void item_54;
    return Script_UndefinedParameterTy(g_57c170, &item_2f8, &item_54, data_9, 7, 0);
}
