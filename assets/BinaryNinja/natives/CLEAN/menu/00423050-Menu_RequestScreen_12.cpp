// IGI native provenance: Menu_RequestScreen_12 - 0x00423050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00423050-Menu_RequestScreen_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_12.h"
uint32_t Menu_RequestScreen_12()

{
    DynObj_CreateMagicObject_4(g_57bc28);
    uint32_t result = QTask_CloseEvent_2(g_53b854);
    g_53b854 = 0x181;
    return result;
}
