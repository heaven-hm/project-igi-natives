// Original IGI.EXE function: RotatingObject_Init (VA 0x00438DF0; static CFG gate PASS, CFG score 1.000).
#include "RotatingObject_Init.h"
int32_t* RotatingObject_Init()

{
    int32_t item_204 = 0;
    int16_t data_1 = TaskType_Register("RotatingObject", 0x200, DynObj_LookupHashItem_5(), 0);
    g_57be98 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_438c30);
    QTask_TriggerEvent(g_57be98, 1, RotatingObject_LoadParameters);
    QTask_TriggerEvent(g_57be98, 2, RotatingObject_Setup);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57be98, data_3, RotatingObject_Process);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_208_1 = data_4;
    data_4 = g_57be98;
    QTask_RemoveEventCallback(data_4, item_208_1, sub_439750);
    int32_t data_5 = SoundSys_SetFrequency_5();
    QTask_RemoveEventCallback(g_57be98, data_5, sub_439770);
    int32_t data_6 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57be98, data_6, sub_439790);
    g_57be90 = Script_EvaluateCondition_7(0xc);
    int32_t data_8 = Script_ParseEnumReal32_4();
    void item_200;
    void item_78;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_78, data_8, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_a0;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_a0, data_9, 7, 0);
    int32_t data_10 = Script_EvaluateCondition_3();
    void item_f0;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_f0, data_10, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_3();
    void item_110;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_110, data_11, 7, 0);
    int32_t data_12 = Script_ExecuteLevelScript_2();
    void item_e0;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_e0, data_12, 7, 0);
    int32_t data_13 = Script_ExecuteLevelScript_2();
    void item_dc;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_dc, data_13, 7, 0);
    int32_t data_14 = Script_ExecuteLevelScript_2();
    void item_d8;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_d8, data_14, 7, 0);
    int32_t data_15 = Script_ExecuteLevelScript_2();
    void item_d4;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_d4, data_15, 7, 0);
    int32_t data_16 = Script_ExecuteLevelScript_2();
    void item_d0;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_d0, data_16, 7, 0);
    int32_t data_17 = Script_ExecuteLevelScript_2();
    void item_cc;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_cc, data_17, 7, 0);
    int32_t data_18 = Script_ParseEnumInt32_4();
    void item_c8;
    Script_UndefinedParameterTy(g_57be90, &item_200, &item_c8, data_18, 7, 0);
    int32_t data_19 = Script_CallNativeHandler_3();
    void item_54;
    return Script_UndefinedParameterTy(g_57be90, &item_200, &item_54, data_19, 7, 0);
}
