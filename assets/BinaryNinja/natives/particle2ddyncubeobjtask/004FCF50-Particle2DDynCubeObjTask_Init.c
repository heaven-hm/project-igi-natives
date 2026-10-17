// Original IGI.EXE function: Particle2DDynCubeObjTask_Init (VA 0x004FCF50; static CFG gate PASS, CFG score 1.000).
#include "Particle2DDynCubeObjTask_Init.h"
int32_t Particle2DDynCubeObjTask_Init()

{
    int32_t v_4 = 0;
    g_54e568 = TaskType_Register("Particle2DDynCubeObjTask", 0x100, g_54875c, 0x19);
    char valA2 = QTask_UnableToAllocateEvent(0);
    int16_t objC = g_54e568;
    g_54e56a = valA2;
    QTask_RemoveEventCallback(objC, 0, sub_4fd5e0);
    QTask_TriggerEvent(g_54e568, 1, Particle2DDynCubeObjTask_LoadParameters);
    QTask_TriggerEvent(g_54e568, 2, Particle2DDynCubeObjTask_Setup);
    QTask_RemoveEventCallback(g_54e568, 4, Particle2DDynCubeObjTask_Process);
    int32_t valA4 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_54e568, valA4, Particle2DDynCubeObjTask_Update);
    Sys_ResolveSymbol_13(0xa7a4c0);
    int32_t result = Sys_OpenFileStream_14(0xa7a4c0, 0x12332153);
    g_a7a4d0 = 0;
    g_a7a4d4 = 0;
    return result;
}
