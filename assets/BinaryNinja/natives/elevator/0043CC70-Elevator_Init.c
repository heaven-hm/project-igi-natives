#include "Elevator_Init.h"
int32_t* Elevator_Init()

{
    int32_t v_658 = 0;
    int16_t valA1 = TaskType_Register("Elevator", 0x648, DynObj_LookupHashItem_5(), 0);
    g_57c108 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Elevator_LoadParameters);
    QTask_TriggerEvent(g_57c108, 1, Elevator_Setup);
    QTask_TriggerEvent(g_57c108, 2, sub_43dcf0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c108, valA3, sub_43dda0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_65c_1 = valA4;
    valA4 = g_57c108;
    QTask_RemoveEventCallback(valA4, v_65c_1, sub_43ddb0);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c108, valA5, Elevator_Process);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c108, valA6, Elevator_Update);
    int32_t valA7 = DynObj_CreateMagicObject_6();
    int32_t v_65c_4 = valA7;
    valA7 = g_57c108;
    QTask_RemoveEventCallback(valA7, v_65c_4, Elevator_OnEvent);
    int32_t valA8 = Level_SetMission_3();
    QTask_RemoveEventCallback(g_57c108, valA8, Elevator_Action);
    g_57c0e8 = 0;
    g_57c0ec = 0x4b189680;
    g_57c0d0 = 0;
    g_57c0d4 = 0x461c4000;
    g_57c0d8 = 0;
    g_57c0dc = 0x3f800000;
    g_57c0e0 = Script_EvaluateCondition_7(0x19);
    int32_t valA10 = Script_ParseEnumReal32_4();
    void v_648;
    void v_558;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_558, valA10, 7, 0);
    int32_t valA11 = Script_SpawnNewTask_3();
    void v_528;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_528, valA11, 7, 0);
    int32_t valA12 = Script_EvaluateCondition_3();
    void v_4d8;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4d8, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumString_3();
    void v_4c8;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4c8, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumInt32_4();
    void v_4bc;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4bc, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_4();
    void v_4bb;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4bb, valA15, 7, 0);
    int32_t valA16 = Script_EvaluateCondition_2();
    void v_4c0;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4c0, valA16, 7, &g_57c0e8);
    int32_t valA17 = Script_EvaluateCondition_2();
    void v_4b4;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4b4, valA17, 7, &g_57c0d0);
    int32_t valA18 = Script_EvaluateCondition_2();
    void v_4b0;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_4b0, valA18, 7, &g_57c0d8);
    int32_t valA19 = Script_CallNativeHandler_3();
    void v_114;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_114, valA19, 7, 0);
    int32_t valA20 = Script_CallNativeHandler_3();
    void v_164;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_164, valA20, 7, 0);
    int32_t valA21 = Script_CallNativeHandler_3();
    void v_c4;
    Script_UndefinedParameterTy(g_57c0e0, &v_648, &v_c4, valA21, 7, 0);
    int32_t dstD = 0;
    void v_484;
    void* ctxB = &v_484;

    for (char* i = &g_57bf90; i < &g_57c0d0; )
    {
        int32_t v_658_1 = dstD;
        Game_DataSymbolLoad(i, "Wanted floor %d");
        int32_t valA22 = Script_CallNativeHandler_3();
        Script_UndefinedParameterTy(g_57c0e0, &v_648, ctxB, valA22, 7, 0);
        i = &i[0x20];
        dstD += 1;
        ctxB += 0x50;
    }

    void v_6f;
    void* srcS = &v_6f;
    int32_t i_2 = 3;
    int32_t* result;
    int32_t i_1;

    do
    {
        int32_t valA24 = Script_FormatString_3();
        result = Script_UndefinedParameterTy(g_57c0e0, &v_648, srcS, valA24, 7, 0);
        srcS += 0x20;
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    return result;
}
