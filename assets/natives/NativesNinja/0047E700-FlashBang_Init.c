#include "0047E700-FlashBang_Init.h"
/* 0x0047e700 FlashBang_Init full linked: callers=1 callees=8 */
char* sub_47e700()

{
    g_540914 = QTask_UnableToAllocateEven(0);
    int32_t var_4 = 0;
    int16_t eax_2 = TaskType_Register("FlashBang", 0x48, QTask_OpenEvent_2(), 4);
    g_5c1144 = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_47e790);
    QTask_TriggerEvent(g_5c1144, 1, sub_47e820);
    QTask_TriggerEvent(g_5c1144, 2, sub_4d3710);
    g_5c1148 = Level_LoadLevel_5("burn1.tex");
    char* result = Level_LoadObjects_6("smoke1.spr");
    g_5c114c = result;
    return result;
}
