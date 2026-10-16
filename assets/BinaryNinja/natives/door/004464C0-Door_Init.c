#include "Door_Init.h"
int32_t* Door_Init()

{
    int32_t v_334 = 0;
    int16_t valA1 = TaskType_Register("Door", 0x328, DynObj_LookupHashItem_5(), 0);
    g_57c1c0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4468f0);
    QTask_TriggerEvent(g_57c1c0, 1, Door_LoadParameters);
    QTask_TriggerEvent(g_57c1c0, 2, Door_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c1c0, valA3, sub_447a80);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_338_1 = valA4;
    valA4 = g_57c1c0;
    QTask_RemoveEventCallback(valA4, v_338_1, Door_Process);
    int32_t valA5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c1c0, valA5, Door_Update);
    int32_t valA6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c1c0, valA6, sub_4efb00);
    int32_t valA7 = Level_InitSprites_2();
    int32_t v_338_4 = valA7;
    valA7 = g_57c1c0;
    QTask_RemoveEventCallback(valA7, v_338_4, AIGraph_LoadParameters);
    int32_t valA8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c1c0, valA8, sub_446ce0);
    int32_t valA9 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c1c0, valA9, Door_Action);
    int32_t valA10 = Script_SpawnNewTask_6();
    int32_t v_338_7 = valA10;
    valA10 = g_57c1c0;
    QTask_TriggerEvent(valA10, v_338_7, Door_Cleanup_3);
    int32_t valA11 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_57c1c0, valA11, Door_Cleanup);
    int32_t valA12 = AI_FireWeapon();
    QTask_RemoveEventCallback(g_57c1c0, valA12, Door_Cleanup_2);
    int32_t valA13 = Physics_SimulateRigidBody_8();
    int32_t v_338_10 = valA13;
    valA13 = g_57c1c0;
    QTask_RemoveEventCallback(valA13, v_338_10, sub_4464b0);
    int32_t valA14 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_57c1c0, valA14, sub_443dc0);
    g_57c1e8 = Script_EvaluateCondition_7(0x10);
    memcpy(&g_57c1c8,
        "\x00\x00\x20\xc1\x00\x00\x20\x41\xcd\xcc\x4c\x3d\x00\x00\xc8\x42\x00\x00\xb4\xc3\x00\x00\xb4\x43",
        0x18);
    g_57c1e0 = 0;
    g_57c1e4 = 0x3f800000;
    int32_t valA16 = Script_ParseEnumReal32_4();
    void v_328;
    void v_238;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_238, valA16, 7, 0);
    int32_t valA17 = Script_EvaluateCondition_2();
    void v_220;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_220, valA17, 7, &g_57c1c8);
    int32_t valA18 = Script_EvaluateCondition_2();
    void v_21c;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_21c, valA18, 7, &g_57c1c8);
    int32_t valA19 = Script_EvaluateCondition_2();
    void v_1f0;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_1f0, valA19, 7, &g_57c1e0);
    int32_t valA20 = Script_SpawnNewTask_3();
    void v_218;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_218, valA20, 7, 0);
    int32_t valA21 = Script_EvaluateCondition_3();
    void v_1e0;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_1e0, valA21, 7, 0);
    int32_t valA22 = Script_EvaluateCondition_2();
    void v_1e8;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_1e8, valA22, 7, &g_57c1d8);
    int32_t valA23 = Script_EvaluateCondition_2();
    void v_1e4;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_1e4, valA23, 7, &g_57c1d0);
    int32_t valA24 = Script_ParseEnumInt32_4();
    void v_1ec;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_1ec, valA24, 7, 0);
    int32_t valA25 = Script_EvaluateCondition_2();
    void v_94;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_94, valA25, 7, 0);
    int32_t valA26 = Script_CallNativeHandler_3();
    void v_e8;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_e8, valA26, 7, 0);
    int32_t valA27 = Script_CallNativeHandler_3();
    void v_188;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_188, valA27, 7, 0);
    int32_t valA28 = Script_CallNativeHandler_3();
    void v_138;
    Script_UndefinedParameterTy(g_57c1e8, &v_328, &v_138, valA28, 7, 0);
    void v_1d0;
    void* srcS = &v_1d0;
    int32_t i_1 = 3;
    int32_t* result;
    int32_t i;

    do
    {
        int32_t valA29 = Script_EvaluateCondition_3();
        result = Script_UndefinedParameterTy(g_57c1e8, &v_328, srcS, valA29, 7, 0);
        srcS += 0x10;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
