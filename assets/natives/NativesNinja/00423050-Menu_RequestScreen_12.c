#include "00423050-Menu_RequestScreen_12.h"
/* 0x00423050 Menu_RequestScreen_12 full linked: callers=1 callees=2 */
uint32_t Menu_RequestScreen_12()

{
    sub_4c1830(g_57bc28);
    uint32_t result = QTask_CloseEvent_2(g_53b854);
    g_53b854 = 0x181;
    return result;
}
