#include "004E7500-Screen_Update.h"
/* 0x004e7500 Screen_Update full linked: callers=1 callees=2 */
uint32_t sub_4e7500()

{
    QTask_CreateTask_2(g_5488c8);
    int16_t ecx = g_a5e618;
    g_5488c8 = 0xff;
    uint32_t result = QTask_CloseEvent_2(ecx);
    g_a5ea66 = 0;
    return result;
}
