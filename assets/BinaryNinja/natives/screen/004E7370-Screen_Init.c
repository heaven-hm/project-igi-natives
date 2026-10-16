#include "Screen_Init.h"
int32_t Screen_Init()

{
    g_5488c8 = QTask_UnableToAllocateEven_2(0);
    int32_t v_8 = 0;
    int16_t valA2 = TaskType_Register("Screen", 0x20, QTask_OpenEvent_2(), 0);
    g_a5e618 = valA2;
    QTask_RemoveEventCallback(valA2, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a5e618, 1, sub_488700);
    int32_t valA4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_a5e618, valA4, sub_4e7400);
    __builtin_memset(0xa5e940, 0, 0x11c);
    g_a5ea65 = 0;
    g_a5ea66 = 1;
    return 0;
}
