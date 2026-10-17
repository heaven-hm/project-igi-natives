// IGI native provenance: Menu_LeaveMenus_10 - 0x004201B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004201B0-Menu_LeaveMenus_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_10.h"
uint32_t Menu_LeaveMenus_10()

{
    DynObj_CreateMagicObject_4(g_57bbe4);
    uint32_t result = QTask_CloseEvent_2(g_53b6bc);
    g_53b6bc = 0x181;
    return result;
}
