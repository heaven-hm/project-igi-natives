// Original IGI.EXE function: BoneDynCubeObj_Init (VA 0x004D7550; static CFG gate PASS, CFG score 1.000).
#include "BoneDynCubeObj_Init.h"
int32_t BoneDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("BoneDynCubeObj", 0xd8, g_54875c, 0);
    g_548618 = data_1;
    char data_2 = QTask_UnableToAllocateEvent(data_1);
    int16_t entity_val = g_548618;
    g_54861a = data_2;
    QTask_RemoveEventCallback(entity_val, 4, BoneDynCubeObj_LoadParameters);
    QTask_RemoveEventCallback(g_548618, 7, sub_4d9480);
    QTask_RemoveEventCallback(g_548618, 9, BoneDynCubeObj_Setup);
    int32_t temp_1 = QTask_RemoveEventCallback(g_548618, 8, BoneDynCubeObj_Process);
    temp_1 = g_54861a;
    QTask_RemoveEventCallback(g_548618, temp_1, sub_4f4390);
    int32_t data_5 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_548618, data_5, BoneDynCubeObj_Update);
    return QTask_RemoveEventCallback(g_548618, 6, BoneDynCubeObj_OnEvent);
}
