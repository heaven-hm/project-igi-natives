#include "0041D050-Menu_FormatScreen_8.h"
/* 0x0041d050 Menu_FormatScreen_8 full linked: callers=1 callees=2 */
uint32_t Menu_FormatScreen_8()

{
    sub_4c1830(g_57bbbc);
    uint32_t result = QTask_CloseEvent_2(g_53b5f4);
    g_53b5f4 = 0x181;
    return result;
}
