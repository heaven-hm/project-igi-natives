// Original IGI.EXE function: Light_UpdateGlobalLight (VA 0x00520FF0; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight.h"
uint32_t Light_UpdateGlobalLight()

{
    Script_SpawnNewTask_8(g_a83898);
    DynObj_CreateMagicObject_4(g_a83970);
    DynObj_CreateMagicObject_4(g_a8389c);
    QTask_CloseEvent_2(g_a83968);
    return QTask_CloseEvent_2(g_a83894);
}
