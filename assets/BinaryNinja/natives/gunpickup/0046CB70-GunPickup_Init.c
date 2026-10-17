// Original IGI.EXE function: GunPickup_Init (VA 0x0046CB70; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_Init.h"
int32_t* GunPickup_Init()

{
    int32_t item_15c = 0;
    g_5be2e0 = TaskType_Register("GunPickup", 0x158, SoundSys_Update3DPosition(), 0);
    g_53fde0 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_5be2e0, 0, GunPickup_LoadParameters);
    QTask_TriggerEvent(g_5be2e0, 1, GunPickup_Setup);
    QTask_TriggerEvent(g_5be2e0, 2, AmmoPickup_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_160 = data_3;
    data_3 = g_5be2e0;
    QTask_RemoveEventCallback(data_3, item_160, sub_46d040);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be2e0, data_4, sub_46d050);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5be2e0, data_5, GunPickup_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    int32_t item_160_3 = data_6;
    data_6 = g_5be2e0;
    QTask_TriggerEvent(data_6, item_160_3, GunPickup_OnEvent);
    int32_t data_7 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5be2e0, data_7, sub_45f920);
    int32_t data_8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be2e0, data_8, sub_45f920);
    int32_t data_9 = Level_LoadObjects_3();
    int32_t item_160_6 = data_9;
    data_9 = g_5be2e0;
    QTask_RemoveEventCallback(data_9, item_160_6, GunPickup_Action);
    g_5be2f8 = Script_EvaluateCondition_7(3);
    int32_t data_11 = Script_ParseEnumReal32_4();
    void item_158;
    void item_68;
    Script_UndefinedParameterTy(g_5be2f8, &item_158, &item_68, data_11, 7, 0);
    int32_t data_13 = Script_SpawnNewTask_3();
    void item_e8;
    Script_UndefinedParameterTy(g_5be2f8, &item_158, &item_e8, data_13, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_10();
    void item_28;
    return Script_UndefinedParameterTy(g_5be2f8, &item_158, &item_28, data_15, 7, 0x56e228);
}
