// IGI native provenance: Menu_UpdateLanguage_7 - 0x0041B260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B260-Menu_UpdateLanguage_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_7.h"
uint32_t Menu_UpdateLanguage_7()

{
    DynObj_CreateMagicObject_4(g_57bb98);
    uint32_t result = QTask_CloseEvent_2(g_53b580);
    g_53b580 = 0x181;
    return result;
}
