// IGI native provenance: AIConfig_InitItem_2 - 0x00407D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00407D00-AIConfig_InitItem_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIConfig_InitItem_2.h"
uint32_t AIConfig_InitItem_2()

{
    Script_ParseEnumInt32_10(0x5691f0);
    Script_ParseEnumInt32_10(0x5690e0);
    DynObj_CreateMagicObject_4(g_569208);
    DynObj_CreateMagicObject_4(g_569204);
    QTask_CloseEvent_2(g_5384c2);
    QTask_CloseEvent_2(g_5384c0);
    return QTask_InitContext(g_5690d8);
}
