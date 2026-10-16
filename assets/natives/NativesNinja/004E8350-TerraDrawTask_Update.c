#include "004E8350-TerraDrawTask_Update.h"
/* 0x004e8350 TerraDrawTask_Update full linked: callers=1 callees=1 */
uint32_t sub_4e8350()

{
    uint32_t result = QTask_CloseEvent_2(g_54d9a0);
    g_54d9a0 = 0x181;
    return result;
}
