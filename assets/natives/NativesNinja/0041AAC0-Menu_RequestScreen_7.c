#include "0041AAC0-Menu_RequestScreen_7.h"
/* 0x0041aac0 Menu_RequestScreen_7 full linked: callers=1 callees=2 */
uint32_t Menu_RequestScreen_7()

{
    sub_4c1830(g_57bb90);
    uint32_t result = QTask_CloseEvent_2(g_539c40);
    g_539c40 = 0x181;
    return result;
}
