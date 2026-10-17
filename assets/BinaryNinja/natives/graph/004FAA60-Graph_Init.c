// Original IGI.EXE function: Graph_Init (VA 0x004FAA60; static CFG gate PASS, CFG score 1.000).
#include "Graph_Init.h"
void* Graph_Init()

{
    int32_t item_8c = 0;
    g_54e364 = TaskType_Register("Graph", 0x80, EditorRigidObj_OnEvent(), 0);
    g_54e368 = QTask_UnableToAllocateEvent(0);
    g_54e369 = QTask_UnableToAllocateEvent(0);
    g_54e36a = QTask_UnableToAllocateEvent(0);
    g_54e36b = QTask_UnableToAllocateEvent(0);
    g_54e36c = QTask_UnableToAllocateEvent(0);
    g_54e36f = QTask_UnableToAllocateEvent(0);
    g_54e371 = QTask_UnableToAllocateEvent(0);
    g_54e370 = QTask_UnableToAllocateEvent(0);
    g_54e36d = QTask_UnableToAllocateEvent(0);
    g_54e36e = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_54e364, 0, Graph_LoadParameters);
    QTask_TriggerEvent(g_54e364, 1, AnimSound_LoadParameters);
    QTask_TriggerEvent(g_54e364, 2, Graph_Process);
    QTask_TriggerEvent(g_54e364, 3, sub_4fadb0);
    int32_t data_13 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e364, data_13, Graph_Update);
    int32_t data_14 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54e364, data_14, sub_4fae40);
    int32_t data_15 = Script_CallNativeHandler_8();
    Script_ParseEnumString_9(Script_ParseEnumString_4(), data_15, Graph_OnEvent);
    g_a76d10 = Script_EvaluateCondition_7(5);
    int32_t data_18 = Script_ParseEnumReal32_4();
    void item_80;
    void item_60;
    Script_UndefinedParameterTy(g_a76d10, &item_80, &item_60, data_18, 7, 0);
    int32_t data_19 = Script_SpawnNewTask_2();
    void item_1b;
    Script_UndefinedParameterTy(g_a76d10, &item_80, &item_1b, data_19, 7, 0);
    int32_t data_20 = Script_ParseEnumInt32_4();
    void item_18;
    Script_UndefinedParameterTy(g_a76d10, &item_80, &item_18, data_20, 6, 0);
    int32_t data_21 = Script_ParseEnumInt32_4();
    void item_17;
    Script_UndefinedParameterTy(g_a76d10, &item_80, &item_17, data_21, 6, 0);
    int32_t data_22 = Script_ParseEnumString_4();
    Script_UndefinedParameterTy(g_a76d10, &item_80, &item_80, data_22, 7, 0);
    g_a77248 = &g_a7724c;
    g_a77250 = &g_a77248;
    g_a7724c = 0;
    int32_t* i;

    for (i = &g_a7722c; i < &g_a7724c; i = &i[2])
    {
        i[-1] = 0x181;
        *i = 0;
    }

    i = g_54e364;
    Script_NoFreeNodesizeElemen(i, 0x240);
    g_a774a0 = &g_a774a4;
    g_a774a8 = &g_a774a0;
    g_a774a4 = 0;
    g_a76d18 = &g_a76d1c;
    g_a76d20 = &g_a76d18;
    g_a76d1c = 0;

    for (int32_t* i_1 = &g_a76d28; i_1 < &g_a77228; i_1 = &i_1[5])
    {
        i_1[1] = 0;
        *i_1 = 0;
        Camera_SetFieldOfView_33(&g_a76d18, i_1);
    }

    Script_GraphstreamCollision("nMaxNodes", 5, Graph_Action);
    Script_GraphstreamCollision("nNodeID", 5, sub_4faf50);
    Script_GraphstreamCollision("tNodePosition", 8, sub_4faf80);
    Script_GraphstreamCollision("vNodeGamma", 6, sub_4fafa0);
    Script_GraphstreamCollision("vNodeRadius", 6, sub_4fafc0);
    Script_GraphstreamCollision("nNodeMaterial", 5, Graph_Cleanup);
    Script_GraphstreamCollision("nNodeCriteria", 9, Graph_Cleanup_2);
    Script_GraphstreamCollision("nLinkID1", 5, sub_4fb080);
    Script_GraphstreamCollision("nLinkID2", 5, sub_4fb0b0);
    return Script_GraphstreamCollision("eLinkType", 5, Graph_Cleanup_3);
}
