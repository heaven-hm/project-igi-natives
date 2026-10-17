// IGI native provenance: Menu_FormatScreen_8 - 0x0041D050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D050-Menu_FormatScreen_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_8.h"
uint32_t Menu_FormatScreen_8()

{
    DynObj_CreateMagicObject_4(g_57bbbc);
    uint32_t result = QTask_CloseEvent_2(g_53b5f4);
    g_53b5f4 = 0x181;
    return result;
}
