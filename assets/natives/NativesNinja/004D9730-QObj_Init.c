#include "004D9730-QObj_Init.h"
/* 0x004d9730 QObj_Init full linked: callers=1 callees=7 */
int32_t sub_4d9730()

{
    QTask_CleanupEvents(0, 4);
    QTask_CleanupEvents(0, 5);
    QTask_CleanupEvents(0, 6);
    QTask_CleanupEvents(0, 7);
    g_54863a = QTask_UnableToAllocateEven(0);
    int32_t var_4 = 0;
    int16_t result = TaskType_Register("QObj", 0x50, QTask_OpenEvent_2(), 0);
    g_548638 = result;
    return result;
}
