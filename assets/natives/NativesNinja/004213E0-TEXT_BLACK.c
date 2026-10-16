#include "004213E0-TEXT_BLACK.h"
/* 0x004213e0 TEXT_BLACK full linked: callers=1 callees=6 */
uint32_t TEXT_BLACK()

{
    sub_4c1830(g_57bbf4);
    sub_4b8920("TEXT_BLACK");
    sub_4b8920("TEXT_WHITE");
    sub_4b8920("TEXT_GREEN");
    sub_4b8920("TEXT_ORANGE");
    uint32_t result = QTask_CloseEvent_2(g_53b770);
    g_53b770 = 0x181;
    return result;
}
