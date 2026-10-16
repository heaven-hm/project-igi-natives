#include "RigidDynCubeObj_Init.h"
uint32_t RigidDynCubeObj_Init()

{
    int32_t v_4 = 0;
    g_547f42 = TaskType_Register("RigidDynCubeObj", 0xf0, g_54875c, 0);
    g_547f3c = QTask_UnableToAllocateEvent(0);
    g_547f3d = QTask_UnableToAllocateEvent(0);
    g_547f3e = QTask_UnableToAllocateEvent(0);
    g_547f3f = QTask_UnableToAllocateEvent(0);
    char valA6 = QTask_UnableToAllocateEvent(0);
    int16_t objC = g_547f42;
    g_547f40 = valA6;
    QTask_RemoveEventCallback(objC, 4, RigidDynCubeObj_LoadParameters);
    QTask_RemoveEventCallback(g_547f42, 7, sub_4c3110);
    QTask_RemoveEventCallback(g_547f42, 0xa, RigidDynCubeObj_Setup);
    QTask_RemoveEventCallback(g_547f42, 0xb, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_547f42, 9, RigidDynCubeObj_Setup);
    QTask_RemoveEventCallback(g_547f42, 8, RigidDynCubeObj_OnEvent);
    QTask_RemoveEventCallback(g_547f42, 0xc, sub_4c35d0);
    QTask_RemoveEventCallback(g_547f42, 0, RigidDynCubeObj_Action);
    int32_t valA9 = SoundSys_PlaySoundSample_3();
    int32_t v_8 = valA9;
    valA9 = g_547f42;
    QTask_RemoveEventCallback(valA9, v_8, RigidDynCubeObj_Cleanup);
    int32_t valA10 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_547f42, valA10, RigidDynCubeObj_Cleanup_2);
    QTask_RemoveEventCallback(g_547f42, 6, RigidDynCubeObj_Cleanup_3);
    Game_DefineOptions("DefineMagicObj", Define_MagicObj, 0, 0xffffffff);
    QTask_DispatchEvent_3(0x8000000);
    return QTask_RegisterEventCallback_3(g_547f42, 0x8000000);
}
