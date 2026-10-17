// Original IGI.EXE function: AmbientArea_Init (VA 0x0044C130; static CFG gate PASS, CFG score 1.000).
#include "AmbientArea_Init.h"
int32_t* AmbientArea_Init()

{
    g_57c73c = DynObj_MtpNlodvirmodelD("johan");
    int32_t item_214 = 0;
    int16_t data_2 = TaskType_Register("AmbientArea", 0x210, EditorRigidObj_OnEvent(), 0);
    g_57c734 = data_2;
    QTask_RemoveEventCallback(data_2, 0, sub_44c2c0);
    QTask_TriggerEvent(g_57c734, 1, AmbientArea_LoadParameters);
    QTask_TriggerEvent(g_57c734, 2, AmbientArea_Setup);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c734, data_4, sub_44c730);
    int32_t data_5 = Script_ParseEnumReal32_8();
    int32_t item_218_1 = data_5;
    data_5 = g_57c734;
    QTask_RemoveEventCallback(data_5, item_218_1, AmbientArea_Process);
    g_57c738 = Script_EvaluateCondition_7(6);
    int32_t data_7 = Script_ParseEnumReal32_4();
    void item_210;
    void item_1f0;
    Script_UndefinedParameterTy(g_57c738, &item_210, &item_1f0, data_7, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_1c0;
    Script_UndefinedParameterTy(g_57c738, &item_210, &item_1c0, data_9, 7, 0);
    int32_t data_11 = Script_ParseEnumReal32_3();
    void item_1d8;
    Script_UndefinedParameterTy(g_57c738, &item_210, &item_1d8, data_11, 7, 0);
    int32_t data_13 = Script_ParseEnumInt32_3();
    void item_190;
    Script_UndefinedParameterTy(g_57c738, &item_210, &item_190, data_13, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_3();
    void item_188;
    Script_UndefinedParameterTy(g_57c738, &item_210, &item_188, data_15, 7, 0);
    int32_t data_17 = Script_SpawnNewTask_4();
    void item_17c;
    return Script_UndefinedParameterTy(g_57c738, &item_210, &item_17c, data_17, 7, 0);
}
