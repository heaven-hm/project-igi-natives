#include "004FAA60-Graph_Init.h"
/* 0x004faa60 Graph_Init full linked: callers=1 callees=46 */
void* sub_4faa60()

{
    int32_t var_8c = 0;
    g_54e364 = TaskType_Register("Graph", 0x80, sub_5034d0(), 0);
    g_54e368 = QTask_UnableToAllocateEven(0);
    g_54e369 = QTask_UnableToAllocateEven(0);
    g_54e36a = QTask_UnableToAllocateEven(0);
    g_54e36b = QTask_UnableToAllocateEven(0);
    g_54e36c = QTask_UnableToAllocateEven(0);
    g_54e36f = QTask_UnableToAllocateEven(0);
    g_54e371 = QTask_UnableToAllocateEven(0);
    g_54e370 = QTask_UnableToAllocateEven(0);
    g_54e36d = QTask_UnableToAllocateEven(0);
    g_54e36e = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_54e364, 0, sub_4f90b0);
    QTask_TriggerEvent(g_54e364, 1, sub_4c1780);
    QTask_TriggerEvent(g_54e364, 2, sub_4f9160);
    QTask_TriggerEvent(g_54e364, 3, sub_4fadb0);
    int32_t eax_13 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54e364, eax_13, sub_4f9180);
    int32_t eax_14 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54e364, eax_14, sub_4fae40);
    int32_t eax_15 = sub_4f1b60();
    sub_4f1bc0(sub_4f1020(), eax_15, sub_4fae50);
    g_a76d10 = sub_4f1950(5);
    int32_t eax_18 = sub_4f1010();
    void var_80;
    void var_60;
    sub_4f1a80(g_a76d10, &var_80, &var_60, eax_18, 7, 0);
    int32_t eax_19 = sub_4f0ef0();
    void var_1b;
    sub_4f1a80(g_a76d10, &var_80, &var_1b, eax_19, 7, 0);
    int32_t eax_20 = sub_4f1000();
    void var_18;
    sub_4f1a80(g_a76d10, &var_80, &var_18, eax_20, 6, 0);
    int32_t eax_21 = sub_4f1000();
    void var_17;
    sub_4f1a80(g_a76d10, &var_80, &var_17, eax_21, 6, 0);
    int32_t eax_22 = sub_4f1020();
    sub_4f1a80(g_a76d10, &var_80, &var_80, eax_22, 7, 0);
    g_a77248 = &g_a7724c;
    g_a77250 = &g_a77248;
    g_a7724c = 0;
    int32_t* i;

    for (i = &g_a7722c; i < &g_a7724c; i = &i[2])
    {
        i[-1] = 0x181;
        *i = 0;
    }

    i = g_54e364;
    sub_4f9460(i, 0x240);
    g_a774a0 = &g_a774a4;
    g_a774a8 = &g_a774a0;
    g_a774a4 = 0;
    g_a76d18 = &g_a76d1c;
    g_a76d20 = &g_a76d18;
    g_a76d1c = 0;

    for (int32_t* i_1 = &g_a76d28; i_1 < &g_a77228; i_1 = &i_1[5])
    {
        i_1[1] = 0;
        *i_1 = 0;
        sub_4af8f0(&g_a76d18, i_1);
    }

    sub_4f9df0("nMaxNodes", 5, sub_4faee0);
    sub_4f9df0("nNodeID", 5, sub_4faf50);
    sub_4f9df0("tNodePosition", 8, sub_4faf80);
    sub_4f9df0("vNodeGamma", 6, sub_4fafa0);
    sub_4f9df0("vNodeRadius", 6, sub_4fafc0);
    sub_4f9df0("nNodeMaterial", 5, sub_4fafe0);
    sub_4f9df0("nNodeCriteria", 9, sub_4fb030);
    sub_4f9df0("nLinkID1", 5, sub_4fb080);
    sub_4f9df0("nLinkID2", 5, sub_4fb0b0);
    return sub_4f9df0("eLinkType", 5, sub_4fb0d0);
}
