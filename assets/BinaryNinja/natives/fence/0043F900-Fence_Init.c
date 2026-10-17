// Original IGI.EXE function: Fence_Init (VA 0x0043F900; static CFG gate PASS, CFG score 1.000).
#include "Fence_Init.h"
void* Fence_Init()

{
    int32_t v_17c = 0;
    int16_t valA1 = TaskType_Register("Fence", 0x178, DynObj_LookupHashItem_5(), 0);
    g_57c154 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Fence_LoadParameters);
    QTask_TriggerEvent(g_57c154, 1, Fence_Setup);
    QTask_TriggerEvent(g_57c154, 2, Fence_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c154, valA3, sub_43fe90);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_180_1 = valA4;
    valA4 = g_57c154;
    QTask_RemoveEventCallback(valA4, v_180_1, Fence_Update);
    int32_t valA5 = Level_LoadLevel_2();
    QTask_RemoveEventCallback(g_57c154, valA5, sub_43ff70);
    int32_t valA6 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c154, valA6, Fence_OnEvent);
    int32_t valA7 = Level_CheckQTaskID_2();
    int32_t v_180_4 = valA7;
    valA7 = g_57c154;
    QTask_RemoveEventCallback(valA7, v_180_4, sub_4ef8b0);
    int32_t valA8 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_57c154, valA8, AIGraph_LoadParameters);
    int32_t valA9 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c154, valA9, sub_440230);
    g_57c150 = Script_EvaluateCondition_7(4);
    int32_t valA11 = Script_ParseEnumReal32_4();
    void v_178;
    void v_88;
    Script_UndefinedParameterTy(g_57c150, &v_178, &v_88, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumString_2();
    void v_70;
    Script_UndefinedParameterTy(g_57c150, &v_178, &v_70, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_3();
    void v_6c;
    Script_UndefinedParameterTy(g_57c150, &v_178, &v_6c, valA13, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    void v_58;
    Script_UndefinedParameterTy(g_57c150, &v_178, &v_58, valA14, 7, 0);
    return TaskType_Set("TASKTYPE_FENCE", *g_57c154);
}
