// Original IGI.EXE function: DiscardTerrain_Init (VA 0x0052C0C0; static CFG gate PASS, CFG score 1.000).
#include "DiscardTerrain_Init.h"
int32_t* DiscardTerrain_Init()

{
    int32_t item_15c = 0;
    int16_t data_1 = TaskType_Register("DiscardTerrain", 0x158, EditorRigidObj_OnEvent(), 0);
    g_a8454c = data_1;
    QTask_RemoveEventCallback(data_1, 0, DiscardTerrain_LoadParameters);
    QTask_RemoveEventCallback(g_a8454c, 4, j_Script_ParseEnumReal32_5);
    QTask_RemoveEventCallback(g_a8454c, 0xf, sub_52c0b0);
    QTask_RemoveEventCallback(g_a8454c, 7, sub_52c510);
    QTask_TriggerEvent(g_a8454c, 2, sub_426860);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a8454c, data_4, sub_52c500);
    int32_t data_5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a8454c, data_5, DiscardTerrain_Setup);
    int32_t data_6 = SoundSys_AttachLipsync_2();
    int32_t item_160_2 = data_6;
    data_6 = g_a8454c;
    QTask_RemoveEventCallback(data_6, item_160_2, sub_52bfe0);
    QTask_RemoveEventCallback(g_a8454c, 0xb, sub_52bf00);
    int32_t data_7 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_a8454c, data_7, sub_52c580);
    int32_t data_8 = DynObj_UpdateDynTree_12();
    int32_t item_160_4 = data_8;
    data_8 = g_a8454c;
    QTask_RemoveEventCallback(data_8, item_160_4, DiscardTerrain_Process);
    int32_t data_9 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a8454c, data_9, 0);
    QTask_RemoveEventCallback(g_a8454c, 9, 0);
    QTask_RemoveEventCallback(g_a8454c, 8, 0);
    QTask_RemoveEventCallback(g_a8454c, 0xa, 0);
    g_a84550 = Script_EvaluateCondition_7(2);
    int32_t data_12 = Script_ParseEnumReal32_4();
    void item_158;
    void item_68;
    Script_UndefinedParameterTy(g_a84550, &item_158, &item_68, data_12, 7, 0);
    int32_t data_13 = Script_ParseEnumString_3();
    void item_8;
    return Script_UndefinedParameterTy(g_a84550, &item_158, &item_8, data_13, 7, 0);
}
