#include "GlowTask_Update.h"
uint32_t GlowTask_Update()

{
    uint32_t result = QTask_CloseEvent_2(g_54da50);
    g_54da50 = 0x181;
    return result;
}
