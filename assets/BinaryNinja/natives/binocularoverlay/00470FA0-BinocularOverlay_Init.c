// Original IGI.EXE function: BinocularOverlay_Init (VA 0x00470FA0; static CFG gate PASS, CFG score 1.000).
#include "BinocularOverlay_Init.h"
int32_t* BinocularOverlay_Init()

{
    int32_t item_7c = 0;
    int16_t data_1 = TaskType_Register("BinocularOverlay", 0x2e00, QTask_OpenEvent_2(), 0);
    g_5401f8 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_471120);
    QTask_TriggerEvent(g_5401f8, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5401f8, 2, BinocularOverlay_Setup);
    int32_t data_3 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5401f8, data_3, BinocularOverlay_Process);
    int32_t data_4 = StatusScreen_GetEvent();
    int32_t item_80_1 = data_4;
    data_4 = g_5401f8;
    QTask_TriggerEvent(data_4, item_80_1, sub_472400);
    int32_t data_5 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5401f8, data_5, BinocularOverlay_Update);
    g_5be344 = Level_LoadObjects_6("binoculars.spr");
    int32_t item_7c_1 = 0;
    int16_t data_8 = TaskType_Register("BinocularOverlayHolder", 0x78, QTask_OpenEvent_2(), 0);
    g_5401fa = data_8;
    QTask_RemoveEventCallback(data_8, 0, BinocularOverlay_OnEvent);
    QTask_TriggerEvent(g_5401fa, 1, BinocularOverlay_Action);
    QTask_TriggerEvent(g_5401fa, 2, BinocularOverlay_Cleanup);
    int32_t data_10 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5401fa, data_10, sub_4723d0);
    int32_t data_11 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5401fa, data_11, sub_4723e0);
    g_5be348 = Script_EvaluateCondition_7(1);
    int32_t data_13 = Script_CallNativeHandler_3();
    void item_78;
    void item_54;
    return Script_UndefinedParameterTy(g_5be348, &item_78, &item_54, data_13, 7, 0);
}
