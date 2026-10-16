#include "00519820-ShadowTask_Update.h"
/* 0x00519820 ShadowTask_Update full linked: callers=1 callees=2 */
uint32_t sub_519820()

{
    sub_4c1830(g_a83744);
    uint32_t result = QTask_CloseEvent_2(g_54ed3c);
    g_54ed3c = 0x181;
    return result;
}
