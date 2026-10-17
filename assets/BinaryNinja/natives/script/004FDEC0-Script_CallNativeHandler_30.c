// IGI native provenance: Script_CallNativeHandler_30 - 0x004FDEC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FDEC0-Script_CallNativeHandler_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_30.h"
uint32_t Script_CallNativeHandler_30()

{
    QTask_InitContext(g_54e56a);
    uint32_t result = QTask_CloseEvent_2(g_54e568);
    g_54e568 = 0x181;
    return result;
}
