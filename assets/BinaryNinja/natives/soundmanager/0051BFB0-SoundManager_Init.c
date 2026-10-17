// Original IGI.EXE function: SoundManager_Init (VA 0x0051BFB0; static CFG gate PASS, CFG score 1.000).
#include "SoundManager_Init.h"
int32_t* SoundManager_Init()

{
    int32_t item_48 = 0;
    int16_t data_1 = TaskType_Register("SoundManager", 0x44, QTask_OpenEvent_2(), 0);
    g_54ee3c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_51c090);
    QTask_TriggerEvent(g_54ee3c, 1, sub_488700);
    QTask_TriggerEvent(g_54ee3c, 2, sub_51c0a0);
    int32_t data_3 = SoundSys_SetFrequency_5();
    QTask_RemoveEventCallback(g_54ee3c, data_3, sub_51c0c0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_4c_1 = data_4;
    data_4 = g_54ee3c;
    QTask_RemoveEventCallback(data_4, item_4c_1, SoundManager_LoadParameters);
    int32_t data_5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54ee3c, data_5, sub_51c280);
    g_a83780 = Script_EvaluateCondition_7(1);
    int32_t data_7 = Script_FormatString_3();
    void item_44;
    void item_24;
    return Script_UndefinedParameterTy(g_a83780, &item_44, &item_24, data_7, 7, 0);
}
