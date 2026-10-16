#include "004E7840-DebugText_Init.h"
/* 0x004e7840 DebugText_Init full linked: callers=1 callees=10 */
int32_t* sub_4e7840()

{
    g_a5ebcc = 1;
    int32_t** eax = sub_4e7600(nullptr, 0x50, 0x3c);
    g_a5ebd0 = eax;
    sub_4e7830(eax, 1);
    g_a5ea74 = 0;
    g_a5ea75 = 0;
    g_a5ebd4 = 0;
    g_a5ea70 = 0;
    sub_491630(sub_4e7900);
    int32_t var_8 = 0;
    int16_t eax_2 = TaskType_Register("DebugText", 0x20, QTask_OpenEvent_2(), 0);
    g_a5ea76 = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_4e7950);
    QTask_TriggerEvent(g_a5ea76, 2, sub_4e7a60);
    int32_t eax_4 = sub_4e7530();
    QTask_TriggerEvent(g_a5ea76, eax_4, sub_4e7960);
    return sub_4b6420("LOCAL:debug.fnt", 0x507c, "ILFF|P");
}
