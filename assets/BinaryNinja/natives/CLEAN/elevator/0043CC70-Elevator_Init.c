// IGI native provenance: Elevator_Init - 0x0043CC70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043CC70-Elevator_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Elevator_Init.h"
int32_t* Elevator_Init()

{
    int32_t item_658 = 0;
    int16_t data_1 = TaskType_Register("Elevator", 0x648, DynObj_LookupHashItem_5(), 0);
    g_57c108 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Elevator_LoadParameters);
    QTask_TriggerEvent(g_57c108, 1, Elevator_Setup);
    QTask_TriggerEvent(g_57c108, 2, sub_43dcf0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c108, data_3, sub_43dda0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_65c_1 = data_4;
    data_4 = g_57c108;
    QTask_RemoveEventCallback(data_4, item_65c_1, sub_43ddb0);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c108, data_5, Elevator_Process);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c108, data_6, Elevator_Update);
    int32_t data_7 = DynObj_CreateMagicObject_6();
    int32_t item_65c_4 = data_7;
    data_7 = g_57c108;
    QTask_RemoveEventCallback(data_7, item_65c_4, Elevator_OnEvent);
    int32_t data_8 = Level_SetMission_3();
    QTask_RemoveEventCallback(g_57c108, data_8, Elevator_Action);
    g_57c0e8 = 0;
    g_57c0ec = 0x4b189680;
    g_57c0d0 = 0;
    g_57c0d4 = 0x461c4000;
    g_57c0d8 = 0;
    g_57c0dc = 0x3f800000;
    g_57c0e0 = Script_EvaluateCondition_7(0x19);
    int32_t data_10 = Script_ParseEnumReal32_4();
    void item_648;
    void item_558;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_558, data_10, 7, 0);
    int32_t data_11 = Script_SpawnNewTask_3();
    void item_528;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_528, data_11, 7, 0);
    int32_t data_12 = Script_EvaluateCondition_3();
    void item_4d8;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4d8, data_12, 7, 0);
    int32_t data_13 = Script_ParseEnumString_3();
    void item_4c8;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4c8, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumInt32_4();
    void item_4bc;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4bc, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_4();
    void item_4bb;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4bb, data_15, 7, 0);
    int32_t data_16 = Script_EvaluateCondition_2();
    void item_4c0;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4c0, data_16, 7, &g_57c0e8);
    int32_t data_17 = Script_EvaluateCondition_2();
    void item_4b4;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4b4, data_17, 7, &g_57c0d0);
    int32_t data_18 = Script_EvaluateCondition_2();
    void item_4b0;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_4b0, data_18, 7, &g_57c0d8);
    int32_t data_19 = Script_CallNativeHandler_3();
    void item_114;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_114, data_19, 7, 0);
    int32_t data_20 = Script_CallNativeHandler_3();
    void item_164;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_164, data_20, 7, 0);
    int32_t data_21 = Script_CallNativeHandler_3();
    void item_c4;
    Script_UndefinedParameterTy(g_57c0e0, &item_648, &item_c4, data_21, 7, 0);
    int32_t dest_val = 0;
    void item_484;
    void* context_val = &item_484;

    for (char* i = &g_57bf90; i < &g_57c0d0; )
    {
        int32_t item_658_1 = dest_val;
        Game_DataSymbolLoad(i, "Wanted floor %d");
        int32_t data_22 = Script_CallNativeHandler_3();
        Script_UndefinedParameterTy(g_57c0e0, &item_648, context_val, data_22, 7, 0);
        i = &i[0x20];
        dest_val += 1;
        context_val += 0x50;
    }

    void item_6f;
    void* source_val = &item_6f;
    int32_t i_2 = 3;
    int32_t* result;
    int32_t i_1;

    do
    {
        int32_t data_24 = Script_FormatString_3();
        result = Script_UndefinedParameterTy(g_57c0e0, &item_648, source_val, data_24, 7, 0);
        source_val += 0x20;
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    return result;
}
