#include "004190E0-MenuLoader_Init.h"
/* 0x004190e0 MenuLoader_Init full linked: callers=1 callees=16 */
int32_t* MenuLoader_Init()

{
    int32_t var_128 = 0;
    int16_t eax_1 = TaskType_Register("MenuLoader", 0x124, QTask_OpenEvent_2(), 0);
    g_539adc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4191f0);
    QTask_TriggerEvent(g_539adc, 2, sub_4d3710);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_539adc, eax_3, sub_4192a0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_539adc, eax_4, MenuLoader_Setup);
    QTask_TriggerEvent(g_539adc, 1, sub_4d3710);
    g_57baf4 = sub_4f1950(3);
    int32_t eax_7 = sub_4f0ff0();
    void var_124;
    void var_104;
    sub_4f1a80(g_57baf4, &var_124, &var_104, eax_7, 7, 0);
    int32_t eax_9 = sub_4f0ef0();
    void var_4;
    sub_4f1a80(g_57baf4, &var_124, &var_4, eax_9, 6, 0);
    int32_t eax_11 = sub_4f0ef0();
    void var_3;
    return sub_4f1a80(g_57baf4, &var_124, &var_3, eax_11, 6, 0);
}
