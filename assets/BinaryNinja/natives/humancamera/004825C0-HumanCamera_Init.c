#include "HumanCamera_Init.h"
char* HumanCamera_Init()

{
    int32_t v_4 = 0;
    g_540990 = TaskType_Register("HumanCamera", 0x128, QTask_OpenEvent_2(), 0);
    g_540992 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_540990, 0, sub_482650);
    QTask_TriggerEvent(g_540990, 1, sub_482700);
    QTask_TriggerEvent(g_540990, 2, sub_484ce0);
    char* i;

    for (i = &g_5c118d; i < 0x5c158d; i = &i[8])
    {
        *(i - 5) = 0;
        *i = 0;
    }

    return i;
}
