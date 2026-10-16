#include "ShadowTask_Update.h"
uint32_t ShadowTask_Update()

{
    DynObj_CreateMagicObject_4(g_a83744);
    uint32_t result = QTask_CloseEvent_2(g_54ed3c);
    g_54ed3c = 0x181;
    return result;
}
