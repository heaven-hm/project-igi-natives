// IGI native provenance: Script_EvaluateCondition_14 - 0x004F3E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3E40-Script_EvaluateCondition_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_EvaluateCondition_14.h"
uint32_t Script_EvaluateCondition_14()

{
    QTask_CloseEvent_2(g_54e1d8);
    int32_t entity_val = g_54e1e4;
    g_54e1d8 = 0x181;
    Script_SpawnNewTask_8(entity_val);
    void* temp_val = g_a76c3c;
    g_54e1e4 = 0xffffffff;
    DynObj_CreateMagicObject_4(temp_val);
    QTask_InitContext(g_54e1da);
    QTask_InitContext(g_54e1db);
    QTask_InitContext(g_54e1dc);
    QTask_InitContext(g_54e1dd);
    QTask_InitContext(g_54e1de);
    QTask_InitContext(g_54e1df);
    uint32_t result = QTask_InitContext(g_54e1e0);
    result = 0xff;
    g_54e1da = 0xff;
    g_54e1db = 0xff;
    g_54e1dc = 0xff;
    g_54e1dd = 0xff;
    g_54e1de = 0xff;
    g_54e1df = 0xff;
    return result;
}
