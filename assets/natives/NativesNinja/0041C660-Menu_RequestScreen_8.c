#include "0041C660-Menu_RequestScreen_8.h"
/* 0x0041c660 Menu_RequestScreen_8 full linked: callers=1 callees=2 */
uint32_t Menu_RequestScreen_8()

{
    sub_4c1830(g_57bbb4);
    uint32_t result = QTask_CloseEvent_2(g_53b59c);
    g_53b59c = 0x181;
    return result;
}
