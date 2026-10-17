// IGI native provenance: Menu_RequestScreen_7 - 0x0041AAC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041AAC0-Menu_RequestScreen_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_7.h"
uint32_t Menu_RequestScreen_7()

{
    DynObj_CreateMagicObject_4(g_57bb90);
    uint32_t result = QTask_CloseEvent_2(g_539c40);
    g_539c40 = 0x181;
    return result;
}
