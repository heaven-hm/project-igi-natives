#include "gi_platform.h"
#include "00421700-Menu_RequestScreen_11.h"
uint32_t Menu_RequestScreen_11()

{
    DynObj_CreateMagicObject_4(g_57bbfc);
    uint32_t result = QTask_CloseEvent_2(g_53b7f0);
    g_53b7f0 = 0x181;
    return result;
}
