#include "00422B10-Menu_HandleInput_11.h"
/* 0x00422b10 Menu_HandleInput_11 full linked: callers=1 callees=2 */
uint32_t Menu_HandleInput_11()

{
    sub_4c1830(g_57bc10);
    uint32_t result = QTask_CloseEvent_2(g_53b838);
    g_53b838 = 0x181;
    return result;
}
