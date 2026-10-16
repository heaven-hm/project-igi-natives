#include "0052C820-LevelScript_Init.h"
/* 0x0052c820 LevelScript_Init full linked: callers=1 callees=13 */
int32_t* sub_52c820()

{
    int32_t var_2c = 0;
    g_54f6f0 = TaskType_Register("LevelScript", 0x28, QTask_OpenEvent_2(), 0);
    g_54f6f2 = QTask_UnableToAllocateEven(QTask_OpenEvent_2());
    QTask_RemoveEventCallback(g_54f6f0, 0, sub_52c8f0);
    QTask_TriggerEvent(g_54f6f0, 1, sub_52c900);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54f6f0, eax_4, sub_4d3710);
    int32_t eax_5 = sub_4f1a60();
    int32_t var_30_1 = eax_5;
    eax_5 = g_54f6f0;
    QTask_RemoveEventCallback(eax_5, var_30_1, sub_52c8e0);
    g_a84564 = sub_4f1950(2);
    int32_t eax_7 = sub_4f0fa0();
    void var_28;
    void var_8;
    return sub_4f1a80(g_a84564, &var_28, &var_8, eax_7, 7, 0);
}
