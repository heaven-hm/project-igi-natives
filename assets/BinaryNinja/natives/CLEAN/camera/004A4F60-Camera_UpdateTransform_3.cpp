// IGI native provenance: Camera_UpdateTransform_3 - 0x004A4F60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A4F60-Camera_UpdateTransform_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_3.h"
uint32_t Camera_UpdateTransform_3()

{
    Display_CheckCapabilities_14(g_935c08);
    Display_CheckCapabilities_14(g_935c0c);
    Display_CheckCapabilities_14(g_936018);
    Display_CheckCapabilities_14(g_936014);
    int32_t entity_1 = g_935bfc;
    Sys_ResolveSymbol_2(entity_1);
    Sys_ResolveSymbol_2(g_935c00);
    Sys_ResolveSymbol_2(g_936010);
    entity_1 = g_543d58;
    QTask_CloseEvent_2(entity_1);
    QTask_CloseEvent_2(g_543d50);
    QTask_CloseEvent_2(g_543d4e);
    return QTask_CloseEvent_2(g_543d4c);
}
