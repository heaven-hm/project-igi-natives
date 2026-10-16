#include "MenuLoader_OnEvent.h"
uint32_t MenuLoader_OnEvent()

{
    DynObj_CreateMagicObject_4(g_57baf4);
    uint32_t result = QTask_CloseEvent_2(g_539adc);
    g_539adc = 0x181;
    return result;
}
