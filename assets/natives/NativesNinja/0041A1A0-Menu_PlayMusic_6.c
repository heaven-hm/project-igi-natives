#include "0041A1A0-Menu_PlayMusic_6.h"
/* 0x0041a1a0 Menu_PlayMusic_6 full linked: callers=1 callees=2 */
uint32_t Menu_PlayMusic_6()

{
    sub_4c1830(g_57bb88);
    uint32_t result = QTask_CloseEvent_2(g_539c28);
    g_539c28 = 0x181;
    return result;
}
