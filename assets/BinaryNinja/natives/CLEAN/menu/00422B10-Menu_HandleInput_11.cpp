// IGI native provenance: Menu_HandleInput_11 - 0x00422B10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422B10-Menu_HandleInput_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_HandleInput_11.h"
uint32_t Menu_HandleInput_11()

{
    DynObj_CreateMagicObject_4(g_57bc10);
    uint32_t result = QTask_CloseEvent_2(g_53b838);
    g_53b838 = 0x181;
    return result;
}
