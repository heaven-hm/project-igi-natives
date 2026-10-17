// IGI native provenance: LevelScript_OnEvent - 0x0052CA00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CA00-LevelScript_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelScript_OnEvent.h"
int32_t LevelScript_OnEvent()

{
    QTask_InitContext(g_54f6f2);
    int16_t entity_val = g_54f6f0;
    g_54f6f2 = 0xff;
    QTask_CloseEvent_2(entity_val);
    return DynObj_CreateMagicObject_4(g_a84564);
}
