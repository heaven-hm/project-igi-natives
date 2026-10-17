// Original IGI.EXE function: MoveRigidObj_Init (VA 0x0051F580; static CFG gate PASS, CFG score 1.000).
#include "MoveRigidObj_Init.h"
void* MoveRigidObj_Init()

{
    int32_t item_21c = 0;
    int16_t data_1 = TaskType_Register("MoveRigidObj", 0x208, DynObj_LookupHashItem_5(), 0);
    g_a837cc = data_1;
    QTask_RemoveEventCallback(data_1, 0, MoveRigidObj_LoadParameters);
    QTask_TriggerEvent(g_a837cc, 1, MoveRigidObj_Setup);
    QTask_TriggerEvent(g_a837cc, 2, MoveRigidObj_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a837cc, data_3, sub_51fa90);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_220_1 = data_4;
    data_4 = g_a837cc;
    QTask_RemoveEventCallback(data_4, item_220_1, sub_51fd60);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a837cc, data_5, MoveRigidObj_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a837cc, data_6, MoveRigidObj_OnEvent);
    int32_t dest_val = 0;
    g_a837d0 = Script_EvaluateCondition_7(0x14);
    void item_b0;
    void* context_val = &item_b0;
    void item_118;
    void* flagP = &item_118;
    void item_208;

    for (void* i = nullptr; i < 0x20; )
    {
        int32_t item_21c_1 = dest_val;
        Game_DataSymbolLoad(i + 0xa83814, "Position %d");
        int32_t item_228_1 = dest_val;
        Game_DataSymbolLoad(i + 0xa837d4, "Alpha %d");
        int32_t item_234_1 = dest_val;
        Game_DataSymbolLoad(i + 0xa837ac, "Beta %d");
        int32_t item_240_1 = dest_val;
        Game_DataSymbolLoad(i + 0xa837f4, "Gamma %d");
        int32_t data_10 = Script_ParseEnumReal32_4();
        Script_UndefinedParameterTy(g_a837d0, &item_208, flagP, data_10, 7, 0);
        int32_t data_11 = Script_ParseEnumString_2();
        Script_UndefinedParameterTy(g_a837d0, &item_208, context_val - 8, data_11, 7, 0);
        int32_t data_13 = Script_ParseEnumString_2();
        Script_UndefinedParameterTy(g_a837d0, &item_208, context_val, data_13, 7, 0);
        int32_t data_14 = Script_ParseEnumString_2();
        Script_UndefinedParameterTy(g_a837d0, &item_208, context_val + 8, data_14, 7, 0);
        i += 0x10;
        dest_val += 1;
        flagP += 0x18;
        context_val += 4;
    }

    int32_t data_15 = Script_EvaluateCondition_3();
    void item_88;
    Script_UndefinedParameterTy(g_a837d0, &item_208, &item_88, data_15, 3, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_54;
    Script_UndefinedParameterTy(g_a837d0, &item_208, &item_54, data_16, 7, 0);
    int32_t data_17 = Script_ParseEnumInt32_3();
    void item_68;
    Script_UndefinedParameterTy(g_a837d0, &item_208, &item_68, data_17, 3, 0);
    int32_t data_18 = Script_ParseEnumInt32_4();
    void item_58;
    Script_UndefinedParameterTy(g_a837d0, &item_208, &item_58, data_18, 3, 0);
    return TaskType_Set("TASKTYPE_MOVERIGIDOBJ", *g_a837cc);
}
