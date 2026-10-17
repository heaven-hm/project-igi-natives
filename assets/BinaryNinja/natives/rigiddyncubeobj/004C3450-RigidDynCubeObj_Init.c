// IGI native provenance: RigidDynCubeObj_Init - 0x004C3450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C3450-RigidDynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RigidDynCubeObj_Init.h"
uint32_t RigidDynCubeObj_Init()

{
    int32_t item_4 = 0;
    g_547f42 = TaskType_Register("RigidDynCubeObj", 0xf0, g_54875c, 0);
    g_547f3c = QTask_UnableToAllocateEvent(0);
    g_547f3d = QTask_UnableToAllocateEvent(0);
    g_547f3e = QTask_UnableToAllocateEvent(0);
    g_547f3f = QTask_UnableToAllocateEvent(0);
    char data_6 = QTask_UnableToAllocateEvent(0);
    int16_t entity_val = g_547f42;
    g_547f40 = data_6;
    QTask_RemoveEventCallback(entity_val, 4, RigidDynCubeObj_LoadParameters);
    QTask_RemoveEventCallback(g_547f42, 7, sub_4c3110);
    QTask_RemoveEventCallback(g_547f42, 0xa, RigidDynCubeObj_Setup);
    QTask_RemoveEventCallback(g_547f42, 0xb, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_547f42, 9, RigidDynCubeObj_Setup);
    QTask_RemoveEventCallback(g_547f42, 8, RigidDynCubeObj_OnEvent);
    QTask_RemoveEventCallback(g_547f42, 0xc, sub_4c35d0);
    QTask_RemoveEventCallback(g_547f42, 0, RigidDynCubeObj_Action);
    int32_t data_9 = SoundSys_PlaySoundSample_3();
    int32_t item_8 = data_9;
    data_9 = g_547f42;
    QTask_RemoveEventCallback(data_9, item_8, RigidDynCubeObj_Cleanup);
    int32_t data_10 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_547f42, data_10, RigidDynCubeObj_Cleanup_2);
    QTask_RemoveEventCallback(g_547f42, 6, RigidDynCubeObj_Cleanup_3);
    Game_DefineOptions("DefineMagicObj", Define_MagicObj, 0, 0xffffffff);
    QTask_DispatchEvent_3(0x8000000);
    return QTask_RegisterEventCallback_3(g_547f42, 0x8000000);
}
