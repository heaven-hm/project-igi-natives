// IGI native provenance: Menu_DrawWidget_10 - 0x00420C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420C90-Menu_DrawWidget_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_10.h"
uint32_t Menu_DrawWidget_10()

{
    DynObj_CreateMagicObject_4(g_57bbec);
    uint32_t result = QTask_CloseEvent_2(g_53b700);
    g_53b700 = 0x181;
    return result;
}
