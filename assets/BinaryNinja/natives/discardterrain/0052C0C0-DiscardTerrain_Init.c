// Original IGI.EXE function: DiscardTerrain_Init (VA 0x0052C0C0; static CFG gate PASS, CFG score 1.000).
#include "DiscardTerrain_Init.h"
int32_t* DiscardTerrain_Init()

{
    int32_t v_15c = 0;
    int16_t valA1 = TaskType_Register("DiscardTerrain", 0x158, EditorRigidObj_OnEvent(), 0);
    g_a8454c = valA1;
    QTask_RemoveEventCallback(valA1, 0, DiscardTerrain_LoadParameters);
    QTask_RemoveEventCallback(g_a8454c, 4, j_Script_ParseEnumReal32_5);
    QTask_RemoveEventCallback(g_a8454c, 0xf, sub_52c0b0);
    QTask_RemoveEventCallback(g_a8454c, 7, sub_52c510);
    QTask_TriggerEvent(g_a8454c, 2, sub_426860);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a8454c, valA4, sub_52c500);
    int32_t valA5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a8454c, valA5, DiscardTerrain_Setup);
    int32_t valA6 = SoundSys_AttachLipsync_2();
    int32_t v_160_2 = valA6;
    valA6 = g_a8454c;
    QTask_RemoveEventCallback(valA6, v_160_2, sub_52bfe0);
    QTask_RemoveEventCallback(g_a8454c, 0xb, sub_52bf00);
    int32_t valA7 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_a8454c, valA7, sub_52c580);
    int32_t valA8 = DynObj_UpdateDynTree_12();
    int32_t v_160_4 = valA8;
    valA8 = g_a8454c;
    QTask_RemoveEventCallback(valA8, v_160_4, DiscardTerrain_Process);
    int32_t valA9 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a8454c, valA9, 0);
    QTask_RemoveEventCallback(g_a8454c, 9, 0);
    QTask_RemoveEventCallback(g_a8454c, 8, 0);
    QTask_RemoveEventCallback(g_a8454c, 0xa, 0);
    g_a84550 = Script_EvaluateCondition_7(2);
    int32_t valA12 = Script_ParseEnumReal32_4();
    void v_158;
    void v_68;
    Script_UndefinedParameterTy(g_a84550, &v_158, &v_68, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumString_3();
    void v_8;
    return Script_UndefinedParameterTy(g_a84550, &v_158, &v_8, valA13, 7, 0);
}
