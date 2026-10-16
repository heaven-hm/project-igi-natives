#include "0052AD10-AnimScaleTask_Init.h"
/* 0x0052ad10 AnimScaleTask_Init full linked: callers=1 callees=18 */
❓  int32_t* sub_52ad10()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x20168);
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("AnimScaleTask", 0x20168, sub_4f4100(), 0);
    g_54f68c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_52ae50);
    QTask_TriggerEvent(g_54f68c, 1, sub_52af10);
    g_a84394 = sub_4f1950(0xa);
    int32_t eax_4 = sub_4f1010();
    void arg_20;
    sub_4f1a80(g_a84394, &__return_addr, &arg_20, eax_4, 7, 0);
    int32_t eax_6 = sub_4f0f70();
    void arg_38;
    sub_4f1a80(g_a84394, &__return_addr, &arg_38, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void arg_2014c;
    sub_4f1a80(g_a84394, &__return_addr, &arg_2014c, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0ff0();
    void arg_200f8;
    sub_4f1a80(g_a84394, &__return_addr, &arg_200f8, eax_10, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void arg_200f4;
    sub_4f1a80(g_a84394, &__return_addr, &arg_200f4, eax_12, 7, 0);
    int32_t eax_14 = sub_4f40f0();
    return sub_4f1a80(g_a84394, &__return_addr, &__return_addr, eax_14, 7, 0);
}
