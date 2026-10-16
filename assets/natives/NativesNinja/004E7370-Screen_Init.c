#include "004E7370-Screen_Init.h"
/* 0x004e7370 Screen_Init full linked: callers=1 callees=8 */
int32_t sub_4e7370()

{
    g_5488c8 = QTask_UnableToAllocateEven_2(0);
    int32_t var_8 = 0;
    int16_t eax_2 = TaskType_Register("Screen", 0x20, QTask_OpenEvent_2(), 0);
    g_a5e618 = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_4d3710);
    QTask_TriggerEvent(g_a5e618, 1, sub_488700);
    int32_t eax_4 = sub_4e7530();
    QTask_TriggerEvent(g_a5e618, eax_4, sub_4e7400);
    __builtin_memset(0xa5e940, 0, 0x11c);
    g_a5ea65 = 0;
    g_a5ea66 = 1;
    return 0;
}
