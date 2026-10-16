#include "004192B0-MenuLoader_OnEvent.h"
/* 0x004192b0 MenuLoader_OnEvent full linked: callers=1 callees=2 */
uint32_t MenuLoader_OnEvent()

{
    sub_4c1830(g_57baf4);
    uint32_t result = QTask_CloseEvent_2(g_539adc);
    g_539adc = 0x181;
    return result;
}
