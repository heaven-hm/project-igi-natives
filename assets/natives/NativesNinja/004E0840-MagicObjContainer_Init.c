#include "004E0840-MagicObjContainer_Init.h"
/* 0x004e0840 MagicObjContainer_Init full linked: callers=1 callees=5 */
int32_t sub_4e0840()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("MagicObjContainer", 0x24, QTask_OpenEvent_2(), 0);
    g_a5e364 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_488700);
    int32_t eax_2 = sub_4c56f0();
    int32_t var_8 = eax_2;
    eax_2 = g_a5e364;
    return QTask_RemoveEventCallback(eax_2, var_8, sub_4e0890);
}
