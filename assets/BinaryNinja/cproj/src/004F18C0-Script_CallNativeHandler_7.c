#include "gi_platform.h"
#include "004F18C0-Script_CallNativeHandler_7.h"
uint32_t Script_CallNativeHandler_7()

{
    Script_ExecuteLevelScript_8(g_54e0eb);
    Script_ExecuteLevelScript_8(g_54e0ea);
    Script_ExecuteLevelScript_8(g_54e0e7);
    Script_ExecuteLevelScript_8(g_54e0e8);
    Script_ExecuteLevelScript_8(g_54e0e9);
    Script_ExecuteLevelScript_8(g_54e0e6);
    g_54e0eb = 0xff;
    g_54e0ea = 0xff;
    g_54e0e7 = 0xff;
    g_54e0e8 = 0xff;
    g_54e0e9 = 0xff;
    g_54e0e6 = 0xff;
    QTask_InitContext(g_54e0e4);
    uint32_t result = QTask_InitContext(g_54e0e5);
    result = 0xff;
    g_54e0e4 = 0xff;
    g_54e0e5 = 0xff;
    return result;
}
