// IGI native provenance: FX_Statusscreen - 0x00487130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00487130-FX_Statusscreen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_Statusscreen.h"
int32_t FX_Statusscreen()

{
    QTask_InitContext(g_540b5c);
    int16_t entity_val = g_5c8a74;
    g_540b5c = 0xff;
    QTask_CloseEvent_2(entity_val);
    return Sys_OpenFileStream_4("STATUSSCREEN:");
}
