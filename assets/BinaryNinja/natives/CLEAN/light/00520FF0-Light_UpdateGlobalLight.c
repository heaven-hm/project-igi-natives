// IGI native provenance: Light_UpdateGlobalLight - 0x00520FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520FF0-Light_UpdateGlobalLight.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_UpdateGlobalLight.h"
uint32_t Light_UpdateGlobalLight()

{
    Script_SpawnNewTask_8(g_a83898);
    DynObj_CreateMagicObject_4(g_a83970);
    DynObj_CreateMagicObject_4(g_a8389c);
    QTask_CloseEvent_2(g_a83968);
    return QTask_CloseEvent_2(g_a83894);
}
