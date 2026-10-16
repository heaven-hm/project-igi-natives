#include "004E94E0-GlowTask_Update.h"
/* 0x004e94e0 GlowTask_Update full linked: callers=1 callees=1 */
uint32_t sub_4e94e0()

{
    uint32_t result = QTask_CloseEvent_2(g_54da50);
    g_54da50 = 0x181;
    return result;
}
