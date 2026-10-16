#include "0041B840-Menu_PlayMusic_7.h"
/* 0x0041b840 Menu_PlayMusic_7 full linked: callers=1 callees=2 */
uint32_t Menu_PlayMusic_7()

{
    sub_4c1830(g_57bba8);
    uint32_t result = QTask_CloseEvent_2(g_53b58c);
    g_53b58c = 0x181;
    return result;
}
