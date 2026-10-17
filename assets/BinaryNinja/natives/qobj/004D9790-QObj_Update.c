// IGI native provenance: QObj_Update - 0x004D9790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D9790-QObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QObj_Update.h"
uint32_t QObj_Update()

{
    QTask_CloseEvent_2(g_548638);
    g_548638 = 0x181;
    QTask_InitContext(7);
    QTask_InitContext(4);
    QTask_InitContext(5);
    QTask_InitContext(6);
    return QTask_InitContext(g_54863a);
}
