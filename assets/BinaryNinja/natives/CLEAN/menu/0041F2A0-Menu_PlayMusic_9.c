// IGI native provenance: Menu_PlayMusic_9 - 0x0041F2A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041F2A0-Menu_PlayMusic_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_9.h"
uint32_t Menu_PlayMusic_9()

{
    DynObj_CreateMagicObject_4(g_57bbdc);
    uint32_t result = QTask_CloseEvent_2(g_53b694);
    g_53b694 = 0x181;
    return result;
}
