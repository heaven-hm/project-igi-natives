#include "00518760-GraphNode_Init.h"
/* 0x00518760 GraphNode_Init full linked: callers=1 callees=15 */
int32_t* sub_518760()

{
    int32_t var_11c = 0;
    int16_t eax_1 = TaskType_Register("GraphNode", 0x118, sub_5034d0(), 0);
    g_54ec9c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_518870);
    QTask_TriggerEvent(g_54ec9c, 1, sub_5188c0);
    QTask_TriggerEvent(g_54ec9c, 2, sub_5188d0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54ec9c, eax_3, sub_518890);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_120_1 = eax_4;
    eax_4 = g_54ec9c;
    QTask_RemoveEventCallback(eax_4, var_120_1, sub_5188b0);
    int32_t eax_5 = sub_4f9270();
    QTask_RemoveEventCallback(g_54ec9c, eax_5, sub_4d3710);
    g_a800f0 = sub_4ceba0("1703_01_1");

    for (int32_t* i = &g_a800fc; i < &g_a801fc; i = &i[2])
    {
        i[-1] = 0;
        *i = 0;
    }

    g_a801fc = sub_4f1950(1);
    int32_t eax_8 = sub_4f0fa0();
    void var_118;
    void var_e0;
    return sub_4f1a80(g_a801fc, &var_118, &var_e0, eax_8, 2, 0);
}
