// IGI native provenance: Menu_HandleInput_8 - 0x0041DBF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041DBF0-Menu_HandleInput_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_HandleInput_8.h"
uint32_t Menu_HandleInput_8()

{
    DynObj_CreateMagicObject_4(g_57bbc4);
    uint32_t result = QTask_CloseEvent_2(g_53b640);
    g_53b640 = 0x181;
    return result;
}
