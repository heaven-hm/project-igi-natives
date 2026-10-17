// IGI native provenance: Menu_PlayMusic_6 - 0x0041A1A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041A1A0-Menu_PlayMusic_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_6.h"
uint32_t Menu_PlayMusic_6()

{
    DynObj_CreateMagicObject_4(g_57bb88);
    uint32_t result = QTask_CloseEvent_2(g_539c28);
    g_539c28 = 0x181;
    return result;
}
