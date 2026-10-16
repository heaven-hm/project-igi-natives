#include "0051B140-SplinePathGuideQTask_Init.h"
/* 0x0051b140 SplinePathGuideQTask_Init full linked: callers=1 callees=23 */
int32_t* sub_51b140()

{
    int32_t var_48 = 0;
    g_54ed50 = TaskType_Register("SplinePathGuideQTask", 0x44, QTask_OpenEvent_2(), 0);
    g_54ed52 = QTask_UnableToAllocateEven(0);
    g_54ed53 = QTask_UnableToAllocateEven(0);
    QTask_TriggerEvent(g_54ed50, 1, sub_51aeb0);
    QTask_RemoveEventCallback(g_54ed50, 0, sub_51ae50);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54ed50, eax_4, sub_51b390);
    int32_t eax_5 = sub_4f1a70();
    int32_t var_4c_1 = eax_5;
    eax_5 = g_54ed50;
    QTask_RemoveEventCallback(eax_5, var_4c_1, sub_51b2c0);
    QTask_TriggerEvent(g_54ed50, 2, sub_51ae90);
    g_a83754 = sub_4f1950(5);
    int32_t eax_7 = sub_4f0fa0();
    void var_44;
    void var_24;
    sub_4f1a80(g_a83754, &var_44, &var_24, eax_7, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_20;
    sub_4f1a80(g_a83754, &var_44, &var_20, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0fa0();
    void var_14;
    sub_4f1a80(g_a83754, &var_44, &var_14, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void var_10;
    sub_4f1a80(g_a83754, &var_44, &var_10, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f50();
    void var_4;
    sub_4f1a80(g_a83754, &var_44, &var_4, eax_11, 7, 0);
    int32_t* result = sub_4c1800(0x64);
    g_a83760 = result;
    return result;
}
