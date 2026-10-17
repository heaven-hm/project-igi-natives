// IGI native provenance: Menu_PlayMusic_7 - 0x0041B840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B840-Menu_PlayMusic_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_7.h"
uint32_t Menu_PlayMusic_7()

{
    DynObj_CreateMagicObject_4(g_57bba8);
    uint32_t result = QTask_CloseEvent_2(g_53b58c);
    g_53b58c = 0x181;
    return result;
}
