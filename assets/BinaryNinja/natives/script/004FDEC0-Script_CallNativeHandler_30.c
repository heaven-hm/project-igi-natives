// Original IGI.EXE function: Script_CallNativeHandler_30 (VA 0x004FDEC0; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_30.h"
uint32_t Script_CallNativeHandler_30()

{
    QTask_InitContext(g_54e56a);
    uint32_t result = QTask_CloseEvent_2(g_54e568);
    g_54e568 = 0x181;
    return result;
}
