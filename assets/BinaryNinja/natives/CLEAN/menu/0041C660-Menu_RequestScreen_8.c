// IGI native provenance: Menu_RequestScreen_8 - 0x0041C660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041C660-Menu_RequestScreen_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_8.h"
uint32_t Menu_RequestScreen_8()

{
    DynObj_CreateMagicObject_4(g_57bbb4);
    uint32_t result = QTask_CloseEvent_2(g_53b59c);
    g_53b59c = 0x181;
    return result;
}
