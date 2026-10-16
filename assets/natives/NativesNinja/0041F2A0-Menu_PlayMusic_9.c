#include "0041F2A0-Menu_PlayMusic_9.h"
/* 0x0041f2a0 Menu_PlayMusic_9 full linked: callers=1 callees=2 */
uint32_t Menu_PlayMusic_9()

{
    sub_4c1830(g_57bbdc);
    uint32_t result = QTask_CloseEvent_2(g_53b694);
    g_53b694 = 0x181;
    return result;
}
