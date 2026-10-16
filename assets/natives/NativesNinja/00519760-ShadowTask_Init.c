#include "00519760-ShadowTask_Init.h"
/* 0x00519760 ShadowTask_Init full linked: callers=1 callees=11 */
int32_t* sub_519760()

{
    int32_t var_34 = 0;
    g_54ed3c = TaskType_Register("ShadowTask", 0x30, QTask_OpenEvent_2(), 0);
    int32_t eax_2 = sub_4f1a60();
    int32_t var_38 = eax_2;
    eax_2 = g_54ed3c;
    QTask_RemoveEventCallback(eax_2, var_38, sub_519810);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54ed3c, eax_3, sub_4d3710);
    g_a83744 = sub_4f1950(2);
    int32_t eax_5 = sub_4f0f60();
    void var_30;
    void var_10;
    sub_4f1a80(g_a83744, &var_30, &var_10, eax_5, 7, 0);
    int32_t eax_6 = sub_4f0f50();
    void var_4;
    return sub_4f1a80(g_a83744, &var_30, &var_4, eax_6, 7, 0);
}
