#include "004C3450-RigidDynCubeObj_Init.h"
/* 0x004c3450 RigidDynCubeObj_Init full linked: callers=1 callees=22 */
uint32_t sub_4c3450()

{
    int32_t var_4 = 0;
    g_547f42 = TaskType_Register("RigidDynCubeObj", 0xf0, g_54875c, 0);
    g_547f3c = QTask_UnableToAllocateEven(0);
    g_547f3d = QTask_UnableToAllocateEven(0);
    g_547f3e = QTask_UnableToAllocateEven(0);
    g_547f3f = QTask_UnableToAllocateEven(0);
    char eax_6 = QTask_UnableToAllocateEven(0);
    int16_t ecx = g_547f42;
    g_547f40 = eax_6;
    QTask_RemoveEventCallback(ecx, 4, sub_4a01b0);
    QTask_RemoveEventCallback(g_547f42, 7, sub_4c3110);
    QTask_RemoveEventCallback(g_547f42, 0xa, sub_4c1840);
    QTask_RemoveEventCallback(g_547f42, 0xb, sub_4d3710);
    QTask_RemoveEventCallback(g_547f42, 9, sub_4c1840);
    QTask_RemoveEventCallback(g_547f42, 8, sub_4c35f0);
    QTask_RemoveEventCallback(g_547f42, 0xc, sub_4c35d0);
    QTask_RemoveEventCallback(g_547f42, 0, sub_4c3010);
    int32_t eax_9 = sub_4e55b0();
    int32_t var_8 = eax_9;
    eax_9 = g_547f42;
    QTask_RemoveEventCallback(eax_9, var_8, sub_4c31f0);
    int32_t eax_10 = sub_4cea10();
    QTask_RemoveEventCallback(g_547f42, eax_10, sub_4c4660);
    QTask_RemoveEventCallback(g_547f42, 6, sub_4c4780);
    Game_DefineOptions("DefineMagicObj", Define_MagicObj, 0, 0xffffffff);
    QTask_DispatchEvent_3(0x8000000);
    return QTask_RegisterEventCallback_3(g_547f42, 0x8000000);
}
