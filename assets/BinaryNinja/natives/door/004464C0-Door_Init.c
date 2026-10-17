// Original IGI.EXE function: Door_Init (VA 0x004464C0; static CFG gate PASS, CFG score 0.994).
#include "Door_Init.h"
int32_t* Door_Init()

{
    int32_t item_334 = 0;
    int16_t data_1 = TaskType_Register("Door", 0x328, DynObj_LookupHashItem_5(), 0);
    g_57c1c0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4468f0);
    QTask_TriggerEvent(g_57c1c0, 1, Door_LoadParameters);
    QTask_TriggerEvent(g_57c1c0, 2, Door_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c1c0, data_3, sub_447a80);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_338_1 = data_4;
    data_4 = g_57c1c0;
    QTask_RemoveEventCallback(data_4, item_338_1, Door_Process);
    int32_t data_5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c1c0, data_5, Door_Update);
    int32_t data_6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c1c0, data_6, sub_4efb00);
    int32_t data_7 = Level_InitSprites_2();
    int32_t item_338_4 = data_7;
    data_7 = g_57c1c0;
    QTask_RemoveEventCallback(data_7, item_338_4, AIGraph_LoadParameters);
    int32_t data_8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c1c0, data_8, sub_446ce0);
    int32_t data_9 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c1c0, data_9, Door_Action);
    int32_t data_10 = Script_SpawnNewTask_6();
    int32_t item_338_7 = data_10;
    data_10 = g_57c1c0;
    QTask_TriggerEvent(data_10, item_338_7, Door_Cleanup_3);
    int32_t data_11 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_57c1c0, data_11, Door_Cleanup);
    int32_t data_12 = AI_FireWeapon();
    QTask_RemoveEventCallback(g_57c1c0, data_12, Door_Cleanup_2);
    int32_t data_13 = Physics_SimulateRigidBody_8();
    int32_t item_338_10 = data_13;
    data_13 = g_57c1c0;
    QTask_RemoveEventCallback(data_13, item_338_10, sub_4464b0);
    int32_t data_14 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_57c1c0, data_14, sub_443dc0);
    g_57c1e8 = Script_EvaluateCondition_7(0x10);
    memcpy(&g_57c1c8,
        "\x00\x00\x20\xc1\x00\x00\x20\x41\xcd\xcc\x4c\x3d\x00\x00\xc8\x42\x00\x00\xb4\xc3\x00\x00\xb4\x43",
        0x18);
    g_57c1e0 = 0;
    g_57c1e4 = 0x3f800000;
    int32_t data_16 = Script_ParseEnumReal32_4();
    void item_328;
    void item_238;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_238, data_16, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_2();
    void item_220;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_220, data_17, 7, &g_57c1c8);
    int32_t data_18 = Script_EvaluateCondition_2();
    void item_21c;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_21c, data_18, 7, &g_57c1c8);
    int32_t data_19 = Script_EvaluateCondition_2();
    void item_1f0;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_1f0, data_19, 7, &g_57c1e0);
    int32_t data_20 = Script_SpawnNewTask_3();
    void item_218;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_218, data_20, 7, 0);
    int32_t data_21 = Script_EvaluateCondition_3();
    void item_1e0;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_1e0, data_21, 7, 0);
    int32_t data_22 = Script_EvaluateCondition_2();
    void item_1e8;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_1e8, data_22, 7, &g_57c1d8);
    int32_t data_23 = Script_EvaluateCondition_2();
    void item_1e4;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_1e4, data_23, 7, &g_57c1d0);
    int32_t data_24 = Script_ParseEnumInt32_4();
    void item_1ec;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_1ec, data_24, 7, 0);
    int32_t data_25 = Script_EvaluateCondition_2();
    void item_94;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_94, data_25, 7, 0);
    int32_t data_26 = Script_CallNativeHandler_3();
    void item_e8;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_e8, data_26, 7, 0);
    int32_t data_27 = Script_CallNativeHandler_3();
    void item_188;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_188, data_27, 7, 0);
    int32_t data_28 = Script_CallNativeHandler_3();
    void item_138;
    Script_UndefinedParameterTy(g_57c1e8, &item_328, &item_138, data_28, 7, 0);
    void item_1d0;
    void* source_val = &item_1d0;
    int32_t i_1 = 3;
    int32_t* result;
    int32_t i;

    do
    {
        int32_t data_29 = Script_EvaluateCondition_3();
        result = Script_UndefinedParameterTy(g_57c1e8, &item_328, source_val, data_29, 7, 0);
        source_val += 0x10;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
