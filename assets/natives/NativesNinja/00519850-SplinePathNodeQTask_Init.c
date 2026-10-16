#include "00519850-SplinePathNodeQTask_Init.h"
/* 0x00519850 SplinePathNodeQTask_Init full linked: callers=1 callees=22 */
int32_t* sub_519850()

{
    int32_t var_cc = 0;
    int16_t eax_1 = TaskType_Register("SplinePathNodeQTask", 0xc8, QTask_OpenEvent_2(), 0);
    g_54ed4c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_519ad0);
    QTask_TriggerEvent(g_54ed4c, 2, sub_519b80);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54ed4c, eax_3, sub_519a60);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54ed4c, eax_4, sub_519a50);
    QTask_RemoveEventCallback(g_54ed4c, 7, sub_5199d0);
    g_a8374c = sub_4f1950(6);
    int32_t eax_7 = sub_4f1010();
    void var_c8;
    void var_a8;
    sub_4f1a80(g_a8374c, &var_c8, &var_a8, eax_7, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_90;
    sub_4f1a80(g_a8374c, &var_c8, &var_90, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0f50();
    void var_38;
    sub_4f1a80(g_a8374c, &var_c8, &var_38, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0f50();
    void var_34;
    sub_4f1a80(g_a8374c, &var_c8, &var_34, eax_13, 7, 0);
    int32_t eax_15 = sub_4f1010();
    void var_50;
    sub_4f1a80(g_a8374c, &var_c8, &var_50, eax_15, 7, 0);
    int32_t eax_17 = sub_4f1000();
    void var_4;
    return sub_4f1a80(g_a8374c, &var_c8, &var_4, eax_17, 7, 0);
}
