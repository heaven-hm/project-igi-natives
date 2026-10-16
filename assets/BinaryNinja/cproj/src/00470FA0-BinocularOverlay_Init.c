#include "gi_platform.h"
#include "00470FA0-BinocularOverlay_Init.h"
int32_t* BinocularOverlay_Init()

{
    int32_t v_7c = 0;
    int16_t valA1 = TaskType_Register("BinocularOverlay", 0x2e00, QTask_OpenEvent_2(), 0);
    g_5401f8 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_471120);
    QTask_TriggerEvent(g_5401f8, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5401f8, 2, BinocularOverlay_Setup);
    int32_t valA3 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5401f8, valA3, BinocularOverlay_Process);
    int32_t valA4 = StatusScreen_GetEvent();
    int32_t v_80_1 = valA4;
    valA4 = g_5401f8;
    QTask_TriggerEvent(valA4, v_80_1, sub_472400);
    int32_t valA5 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5401f8, valA5, BinocularOverlay_Update);
    g_5be344 = Level_LoadObjects_6("binoculars.spr");
    int32_t v_7c_1 = 0;
    int16_t valA8 = TaskType_Register("BinocularOverlayHolder", 0x78, QTask_OpenEvent_2(), 0);
    g_5401fa = valA8;
    QTask_RemoveEventCallback(valA8, 0, BinocularOverlay_OnEvent);
    QTask_TriggerEvent(g_5401fa, 1, BinocularOverlay_Action);
    QTask_TriggerEvent(g_5401fa, 2, BinocularOverlay_Cleanup);
    int32_t valA10 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5401fa, valA10, sub_4723d0);
    int32_t valA11 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5401fa, valA11, sub_4723e0);
    g_5be348 = Script_EvaluateCondition_7(1);
    int32_t valA13 = Script_CallNativeHandler_3();
    char v_78;
    char v_54;
    return Script_UndefinedParameterTy(g_5be348, &v_78, &v_54, valA13, 7, 0);
}
