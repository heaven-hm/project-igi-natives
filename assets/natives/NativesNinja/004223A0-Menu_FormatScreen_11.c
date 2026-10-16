#include "004223A0-Menu_FormatScreen_11.h"
/* 0x004223a0 Menu_FormatScreen_11 full linked: callers=1 callees=2 */
uint32_t Menu_FormatScreen_11()

{
    sub_4c1830(g_57bc04);
    uint32_t result = QTask_CloseEvent_2(g_53b800);
    g_53b800 = 0x181;
    return result;
}
