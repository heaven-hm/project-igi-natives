#include "0041DBF0-Menu_HandleInput_8.h"
/* 0x0041dbf0 Menu_HandleInput_8 full linked: callers=1 callees=2 */
uint32_t Menu_HandleInput_8()

{
    sub_4c1830(g_57bbc4);
    uint32_t result = QTask_CloseEvent_2(g_53b640);
    g_53b640 = 0x181;
    return result;
}
