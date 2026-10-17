// IGI native provenance: Sync_OnEvent - 0x00508F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508F30-Sync_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sync_OnEvent.h"
uint32_t Sync_OnEvent()

{
    QTask_InitContext(g_54e830);
    QTask_InitContext(g_54e831);
    return QTask_CloseEvent_2(g_a7b298);
}
