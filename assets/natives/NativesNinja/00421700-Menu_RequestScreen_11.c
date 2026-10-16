#include "00421700-Menu_RequestScreen_11.h"
/* 0x00421700 Menu_RequestScreen_11 full linked: callers=1 callees=2 */
uint32_t Menu_RequestScreen_11()

{
    sub_4c1830(g_57bbfc);
    uint32_t result = QTask_CloseEvent_2(g_53b7f0);
    g_53b7f0 = 0x181;
    return result;
}
