// Original IGI.EXE function: AlarmControl_Init (VA 0x00440710; static CFG gate PASS, CFG score 1.000).
#include "AlarmControl_Init.h"
int32_t* AlarmControl_Init()

{
    int32_t item_354 = 0;
    int16_t data_1 = TaskType_Register("AlarmControl", 0x350, Env_UpdateCameraLens_3(), 0);
    g_57c164 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_440840);
    QTask_TriggerEvent(g_57c164, 1, AlarmControl_LoadParameters);
    QTask_TriggerEvent(g_57c164, 2, sub_440970);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c164, data_3, sub_4409e0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_358_1 = data_4;
    data_4 = g_57c164;
    QTask_RemoveEventCallback(data_4, item_358_1, sub_4409f0);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c164, data_5, AlarmControl_Setup);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c164, data_6, AlarmControl_Process);
    g_57c168 = Script_FormatString_7(Env_CheckAmbientArea_3(), 2);
    int32_t data_9 = Script_CallNativeHandler_3();
    void item_350;
    void item_a4;
    Script_UndefinedParameterTy(g_57c168, &item_350, &item_a4, data_9, 7, 0);
    int32_t data_10 = Script_CallNativeHandler_3();
    void item_54;
    return Script_UndefinedParameterTy(g_57c168, &item_350, &item_54, data_10, 7, 0);
}
