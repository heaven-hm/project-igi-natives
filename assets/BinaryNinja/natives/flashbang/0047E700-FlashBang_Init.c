#include "FlashBang_Init.h"
char* FlashBang_Init()

{
    g_540914 = QTask_UnableToAllocateEvent(0);
    int32_t v_4 = 0;
    int16_t valA2 = TaskType_Register("FlashBang", 0x48, QTask_OpenEvent_2(), 4);
    g_5c1144 = valA2;
    QTask_RemoveEventCallback(valA2, 0, FlashBang_LoadParameters);
    QTask_TriggerEvent(g_5c1144, 1, FlashBang_Setup);
    QTask_TriggerEvent(g_5c1144, 2, AIGraph_LoadParameters);
    g_5c1148 = Level_LoadLevel_5("burn1.tex");
    char* result = Level_LoadObjects_6("smoke1.spr");
    g_5c114c = result;
    return result;
}
