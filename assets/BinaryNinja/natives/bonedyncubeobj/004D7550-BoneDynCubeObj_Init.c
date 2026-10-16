#include "BoneDynCubeObj_Init.h"
int32_t BoneDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("BoneDynCubeObj", 0xd8, g_54875c, 0);
    g_548618 = valA1;
    char valA2 = QTask_UnableToAllocateEvent(valA1);
    int16_t objC = g_548618;
    g_54861a = valA2;
    QTask_RemoveEventCallback(objC, 4, BoneDynCubeObj_LoadParameters);
    QTask_RemoveEventCallback(g_548618, 7, sub_4d9480);
    QTask_RemoveEventCallback(g_548618, 9, BoneDynCubeObj_Setup);
    int32_t tmpD1 = QTask_RemoveEventCallback(g_548618, 8, BoneDynCubeObj_Process);
    tmpD1 = g_54861a;
    QTask_RemoveEventCallback(g_548618, tmpD1, sub_4f4390);
    int32_t valA5 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_548618, valA5, BoneDynCubeObj_Update);
    return QTask_RemoveEventCallback(g_548618, 6, BoneDynCubeObj_OnEvent);
}
